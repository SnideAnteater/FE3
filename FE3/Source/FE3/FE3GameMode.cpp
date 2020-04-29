// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "FE3GameMode.h"
#include "FE3Character.h"
#include "UObject/ConstructorHelpers.h"

AFE3GameMode::AFE3GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/SideScrollerCPP/Blueprints/SideScrollerCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
