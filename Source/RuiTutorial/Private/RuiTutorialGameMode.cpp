// Copyright 1998-2014 Epic Games, Inc. All Rights Reserved.

#include "RuiTutorial.h"
#include "RuiTutorialGameMode.h"
#include "RuiTutorialCharacter.h"

ARuiTutorialGameMode::ARuiTutorialGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/Blueprints/MyCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
