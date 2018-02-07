// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "TestProjectCppGameMode.h"
#include "TestProjectCppHUD.h"
#include "TestProjectCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATestProjectCppGameMode::ATestProjectCppGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATestProjectCppHUD::StaticClass();
}
