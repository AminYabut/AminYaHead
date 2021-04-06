// Copyright Epic Games, Inc. All Rights Reserved.

#include "AminYaHeadGameMode.h"
#include "AminYaHeadCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAminYaHeadGameMode::AAminYaHeadGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
