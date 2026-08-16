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

	Forward.Z = 0.0f;
	Right.Z = 0.0f;

	Forward.Normalize();
	Right.Normalize();

	FVector MoveData = MoveInput.X * Forward + MoveInput.Y * Right;

	float DeltaTime = GetWorld()->GetDeltaSeconds();

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

	float CurrentZ = GetActorLocation().Z;

	if (!FMath::IsNearlyZero(FlyInput)) {

		AddActorLocalOffset(FVector(0, 0, FlyInput * 500 * DeltaTime));

		if (!IsFly && FlyInput > 0)
		{ IsFly = true; }
		else if (IsFly && FlyInput < 0 && (gravity || !gravity && CurrentZ <= 80 ))
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
}

void ACH3_PlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	Start = GetActorLocation();
	End = Start - FVector(0.0f, 0.0f, 80.0f);

	gravity = GetWorld()->LineTraceSingleByChannel(Hit,
		Start,
		End,
		ECC_Visibility,
		QueryParams);

	float CurrentZ = GetActorLocation().Z;
	float GroundZ = Hit.ImpactPoint.Z;

	float TargetZ = GroundZ + 80.0f;
	float NextZ = CurrentZ - (980.0f * DeltaTime);

	if(!IsFly)
	{ 
		if (NextZ > TargetZ && !gravity && CurrentZ <= 80)
		{ AddActorWorldOffset(FVector(0, 0, NextZ - CurrentZ));}
		else
		{ AddActorWorldOffset(FVector(0, 0, TargetZ - CurrentZ));}
	}
}