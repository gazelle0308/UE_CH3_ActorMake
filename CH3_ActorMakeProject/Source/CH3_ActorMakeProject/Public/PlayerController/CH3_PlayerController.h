// 26/08/10 Copyright Jinho Song

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CH3_PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class CH3_ACTORMAKEPROJECT_API ACH3_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:

	ACH3_PlayerController();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContextPlayer;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* InputActionMove;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* InputActionLook;

protected:

	virtual void BeginPlay() override;

};