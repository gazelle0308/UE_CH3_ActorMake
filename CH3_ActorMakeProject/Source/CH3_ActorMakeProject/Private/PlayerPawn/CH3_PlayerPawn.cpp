// 26/08/10 Copyright Jinho Song

#include "PlayerPawn/CH3_PlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "EnhancedInputComponent.h"
#include "PlayerController/CH3_PlayerController.h"
#include "GameFramework/SpringArmComponent.h"
#include "EnhancedInputSubsystems.h"

ACH3_PlayerPawn::ACH3_PlayerPawn()
{
	PrimaryActorTick.bCanEverTick = true;
	CapsualRoot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("SceneRoot"));
	CapsualRoot->SetSimulatePhysics(false);
	SetRootComponent(CapsualRoot);


	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("StaticMesh"));
	SkeletalMeshComp->SetSimulatePhysics(false);
	SkeletalMeshComp->SetupAttachment(CapsualRoot);


	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(CapsualRoot);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = false;


	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;
}

void ACH3_PlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (ACH3_PlayerController* PlayerController = Cast<ACH3_PlayerController>(GetController()))
		{
			if (PlayerController->InputActionMove)
			{
				EnhancedInput->BindAction(
					PlayerController->InputActionMove,
					ETriggerEvent::Triggered,
					this,
					&ACH3_PlayerPawn::Move
				);
			}

			if (PlayerController->InputActionLook)
			{
				EnhancedInput->BindAction(
					PlayerController->InputActionLook,
					ETriggerEvent::Triggered,
					this,
					&ACH3_PlayerPawn::Look
				);
			}

			if (PlayerController->InputActionFly)
			{
				EnhancedInput->BindAction(
					PlayerController->InputActionFly,
					ETriggerEvent::Triggered,
					this,
					&ACH3_PlayerPawn::Fly
				);
			}

			if (PlayerController->InputActionRoll)
			{
				EnhancedInput->BindAction(
					PlayerController->InputActionRoll,
					ETriggerEvent::Triggered,
					this,
					&ACH3_PlayerPawn::Roll
				);
			}
		}
	}
}


void ACH3_PlayerPawn::Move(const FInputActionValue& value)
{
	if (!Controller) { return; }

	const FVector2D MoveInput = value.Get<FVector2D>();
	FVector Forward = GetActorForwardVector();
	FVector Right = GetActorRightVector();

	Forward.Z = 0.0f; // 지면 이동 시 Z축 방향의 이동을 제거하기 위한 값
	Right.Z = 0.0f;   // 지면 이동 시 Z축 방향의 이동을 제거하기 위한 값

	Forward.Normalize(); // Z값의 제거에 의해 깨진 균형 값을 맞춰주기 위한 Normalize
	Right.Normalize(); // Z값의 제거에 의해 깨진 균형 값을 맞춰주기 위한 Normalize
	

	// Normalize():
	// 벡터의 방향은 유지하면서 벡터의 길이를 1로 만든다.
 
	// 중요:
	// 해당 코드는 유저의 조작감과도 관계있다.
	// 유저는 무의식적으로 상하 시선 이동과 지상 이동은 별개라고 인식한다.
	// 따라서 지상에서는 고개의 움직임과 관계없이 이동 속도가 일정할 것이라고 기대한다.
	// 그러므로 Z값 제거로 인해 벡터의 길이가 달라지는 해당 상황에서는,
	// Normalize()를 통해 방향은 유지하면서 벡터의 길이를 1로 정규화하여
	// 시선의 상하 움직임에 따라 지상 이동 속도가 달라지지 않도록 구현하였다.

	// 결론:
	// 내가 생각하는 "게임이라면 당연한 것"을 구현에 잘 녹이는 것은 중요하다.
	// 다만 내가 당연하다고 생각하는 것이 항상 정답이라고 판단하지 않고,
	// 실제 플레이 경험과 목적에 맞는지 검증하며 필요한 것만 구현하는 것이 중요하다.


	FVector MoveData = MoveInput.X * Forward + MoveInput.Y * Right;

	float DeltaTime = GetWorld()->GetDeltaSeconds();

	if (CurrentZ <= TargetZ && IsFly)
	{ IsFly = false; }

	if (IsFly)
	{

		if (!FMath::IsNearlyZero(MoveInput.X)) 
		{ AddActorLocalOffset(FVector(MoveInput.X * 250 * DeltaTime, 0, 0)); }

		if (!FMath::IsNearlyZero(MoveInput.Y))
		{ AddActorLocalOffset(FVector(0, MoveInput.Y * 250 * DeltaTime, 0)); }
	}
	else
	{
		if (!MoveData.IsNearlyZero())
		{ AddActorWorldOffset(MoveData * 5); }
	}
}


void ACH3_PlayerPawn::Look(const FInputActionValue& value)
{

	const FVector2D LookInput = value.Get<FVector2D>();

	float DeltaTime = GetWorld()->GetDeltaSeconds();

	if (!FMath::IsNearlyZero(LookInput.X)) 
	{ AddActorLocalRotation(FRotator(0, LookInput.X * 500 * DeltaTime, 0)); }

	if (!FMath::IsNearlyZero(LookInput.Y)) 
	{ AddActorLocalRotation(FRotator(LookInput.Y * 500 * DeltaTime, 0, 0)); }

}

void ACH3_PlayerPawn::Fly(const FInputActionValue& value)
{

	const float FlyInput = value.Get<float>();

	float DeltaTime = GetWorld()->GetDeltaSeconds();

	if (!FMath::IsNearlyZero(FlyInput)) {

		if (!(FlyInput < 0 && TargetZ > CurrentZ))
		{ AddActorLocalOffset(FVector(0, 0, FlyInput * 500 * DeltaTime)); }

		if (!IsFly && FlyInput > 0)
		{ IsFly = true; }
		else if (IsFly && FlyInput < 0 && (NearlyGround || !NearlyGround && CurrentZ <= NearlyGroundCheck))
		{ IsFly = false; }

	}
}

void ACH3_PlayerPawn::Roll(const FInputActionValue& value)
{
	const float RollInput = value.Get<float>();

	float DeltaTime = GetWorld()->GetDeltaSeconds();

	if (!FMath::IsNearlyZero(RollInput)) 
	{ AddActorLocalRotation(FRotator(0, 0, RollInput * 500 * DeltaTime)); }
}

void ACH3_PlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	FVector StartSetup = GetActorLocation();
	StartSetup.Z = StartSetup.Z + 500;

	SetActorLocation(StartSetup);
}

void ACH3_PlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	float GroundZ;
	float Accelerate = GravityAccelerate * DeltaTime;

	CurrentZ = GetActorLocation().Z;

	StartTrace = GetActorLocation();
	EndTrace = StartTrace - FVector(0.0f, 0.0f, ActorHalfSize);

	NearlyGround = GetWorld()->LineTraceSingleByChannel(TraceHit,
		StartTrace,
		EndTrace,
		ECC_Visibility,
		QueryParams);



	NoMoreGround = FVector(StartTrace.X, StartTrace.Y, -10000);

	FoundGround = GetWorld()->LineTraceSingleByChannel(GroundTraceHit,
		StartTrace,
		NoMoreGround,
		ECC_Visibility,
		QueryParams);



	if (FoundGround)
	{ GroundZ = GroundTraceHit.ImpactPoint.Z; }
	else
	{ GroundZ = -10000.0f; }

	TargetZ = GroundZ + NearlyGroundCheck; // 중력 도달의 기준점
	
	if (IsFly && NearlyGround)
	{
		FVector HookGround = GetActorLocation();
		HookGround.Z = GroundZ + ActorHalfSize;

		SetActorLocation(HookGround);
	}

	if(!IsFly)
	{ 
		if (NearlyGround)
		{ AddActorWorldOffset(FVector(0, 0, 0)); }
		else
		{ AddActorWorldOffset(FVector(0, 0, -(Accelerate))); }
	}
}