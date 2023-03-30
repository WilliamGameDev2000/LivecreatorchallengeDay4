// Copyright Epic Games, Inc. All Rights Reserved.

#include "FroggerCloneGameMode.h"
#include "FroggerCloneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFroggerCloneGameMode::AFroggerCloneGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
