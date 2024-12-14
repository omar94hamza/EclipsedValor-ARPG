// Copyright Epic Games, Inc. All Rights Reserved.

#include "EclipsedValorGameMode.h"
#include "EclipsedValorCharacter.h"
#include "UObject/ConstructorHelpers.h"

AEclipsedValorGameMode::AEclipsedValorGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
