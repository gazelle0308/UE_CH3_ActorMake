// 26/08/10 Copyright Jinho Song

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/CapsuleComponent.h"
#include "CH3_PlayerPawn.generated.h"

class USpringArmComponent;
class UCameraComponent;
struct FInputActionValue;

UCLASS()
class CH3_ACTORMAKEPROJECT_API ACH3_PlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	ACH3_PlayerPawn();

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CH3 Player Pawn|Coponent")
	UCapsuleComponent* CapsualRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CH3 Player Pawn|Coponent")
	USkeletalMeshComponent *SkeletalMeshComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CH3 Player Pawn|Camera")
	USpringArmComponent* SpringArmComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CH3 Player Pawn|Camera")
	UCameraComponent* CameraComp;

	FVector Start;
	FVector End;

	FHitResult Hit;
	FCollisionQueryParams QueryParams;

	bool gravity;


	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "CH3 Player Pawn|Properties")
	bool IsFly = false;

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION()
	void Move(const FInputActionValue& value);

	UFUNCTION()
	void Look(const FInputActionValue& value);

	UFUNCTION()
	void Fly(const FInputActionValue& value);

	UFUNCTION()
	void Roll(const FInputActionValue& value);

	virtual void BeginPlay() override;
	virtual void Tick(float DeltaTime) override;

};
