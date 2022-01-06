// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BaseCube.h"



#include "LSD_RunnerGameMode.generated.h"

UCLASS(minimalapi)
class ALSD_RunnerGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	ALSD_RunnerGameMode();

	void HideBlueCubes();

	void HideRedCubes();

	void HideGreenCubes();

	void HideYellowCubes();

private:
	void ShowAllCubes();

	UPROPERTY(VisibleAnywhere)
	TArray<AActor*>ArrayOfCubes;
};


