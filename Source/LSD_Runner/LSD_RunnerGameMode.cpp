// Copyright Epic Games, Inc. All Rights Reserved.

#include "LSD_RunnerGameMode.h"
#include "LSD_RunnerCharacter.h"
#include "UObject/ConstructorHelpers.h"
#include "BaseCube.h"

ALSD_RunnerGameMode::ALSD_RunnerGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}

	
}
