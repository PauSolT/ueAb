// Copyright Epic Games, Inc. All Rights Reserved.

#include "AbilitiesGameMode.h"
#include "AbilitiesCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAbilitiesGameMode::AAbilitiesGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
