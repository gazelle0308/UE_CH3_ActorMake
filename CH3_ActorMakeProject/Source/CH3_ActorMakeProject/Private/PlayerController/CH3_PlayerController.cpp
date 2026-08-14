// 26/08/10 Copyright Jinho Song

#include "PlayerController/CH3_PlayerController.h"
#include "EnhancedInputSubsystems.h"

ACH3_PlayerController::ACH3_PlayerController() :
	InputMappingContextPlayer(nullptr),
	InputActionMove(nullptr),
	InputActionLook(nullptr)
{}

void ACH3_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem =
			LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContextPlayer)
			{
				Subsystem->AddMappingContext(InputMappingContextPlayer, 0);
			}
		}
	}
}