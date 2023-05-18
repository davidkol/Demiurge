// Copyright Epic Games, Inc. All Rights Reserved.

#include "DemiurgeGameMode.h"
#include "DemiurgeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ADemiurgeGameMode::ADemiurgeGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
