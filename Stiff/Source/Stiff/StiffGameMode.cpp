// Copyright Epic Games, Inc. All Rights Reserved.

#include "StiffGameMode.h"
#include "StiffCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStiffGameMode::AStiffGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
