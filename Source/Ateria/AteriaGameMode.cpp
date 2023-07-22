// Copyright Epic Games, Inc. All Rights Reserved.

#include "AteriaGameMode.h"
#include "AteriaCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAteriaGameMode::AAteriaGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
