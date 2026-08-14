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
		}
	}
}


void ACH3_PlayerPawn::Move(const FInputActionValue& value)
{
	if (!Controller) { return; }

	const FVector2D MoveInput = value.Get<FVector2D>();

	float DeltaTime = GetWorld()->GetDeltaSeconds();

	if (!FMath::IsNearlyZero(MoveInput.X)) {
		AddActorLocalOffset(FVector(MoveInput.X * 500 * DeltaTime, 0, 0));
	}

	if (!FMath::IsNearlyZero(MoveInput.Y)) {
		AddActorLocalOffset(FVector(0, MoveInput.Y * 500 * DeltaTime, 0));
	}
}


void ACH3_PlayerPawn::Look(const FInputActionValue& value)
{

	const FVector2D LookInput = value.Get<FVector2D>();

	float DeltaTime = GetWorld()->GetDeltaSeconds();

	if (!FMath::IsNearlyZero(LookInput.X)) {
		AddActorLocalRotation(FRotator(0, LookInput.X * 500 * DeltaTime, 0));
	}

	if (!FMath::IsNearlyZero(LookInput.Y)) {
		AddActorLocalRotation(FRotator(LookInput.Y * 500 * DeltaTime, 0, 0));
	}
}
