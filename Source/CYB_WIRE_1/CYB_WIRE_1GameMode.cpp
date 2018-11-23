// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "CYB_WIRE_1GameMode.h"
#include "CYB_WIRE_1Character.h"
#include "UObject/ConstructorHelpers.h"

ACYB_WIRE_1GameMode::ACYB_WIRE_1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
