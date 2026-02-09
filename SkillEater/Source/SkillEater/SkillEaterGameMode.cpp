// Copyright Epic Games, Inc. All Rights Reserved.

#include "SkillEaterGameMode.h"
#include "SkillEaterCharacter.h"
#include "UObject/ConstructorHelpers.h"

ASkillEaterGameMode::ASkillEaterGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
