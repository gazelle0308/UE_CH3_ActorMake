// 26/08/10 Copyright Jinho Song

#include "GameMode/CH3_GameMode.h"
#include "PlayerPawn/CH3_PlayerPawn.h"
#include "PlayerController/CH3_PlayerController.h"

ACH3_GameMode::ACH3_GameMode()
{
	DefaultPawnClass = ACH3_PlayerPawn::StaticClass();
	PlayerControllerClass = ACH3_PlayerController::StaticClass();
}
