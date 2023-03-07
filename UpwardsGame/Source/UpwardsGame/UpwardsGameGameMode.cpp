// Copyright Epic Games, Inc. All Rights Reserved.

#include "UpwardsGameGameMode.h"
#include "UpwardsGamePlayerController.h"
#include "UpwardsGamePawn.h"

AUpwardsGameGameMode::AUpwardsGameGameMode()
{
	// no pawn by default
	DefaultPawnClass = AUpwardsGamePawn::StaticClass();
	// use our own player controller class
	PlayerControllerClass = AUpwardsGamePlayerController::StaticClass();
}
