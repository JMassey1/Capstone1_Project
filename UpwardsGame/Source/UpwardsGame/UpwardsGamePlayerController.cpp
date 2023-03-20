// Copyright Epic Games, Inc. All Rights Reserved.

#include "UpwardsGamePlayerController.h"

AUpwardsGamePlayerController::AUpwardsGamePlayerController()
{
	bShowMouseCursor = true;
	bEnableClickEvents = true;
	bEnableTouchEvents = true;
	DefaultMouseCursor = EMouseCursor::Crosshairs;
}
