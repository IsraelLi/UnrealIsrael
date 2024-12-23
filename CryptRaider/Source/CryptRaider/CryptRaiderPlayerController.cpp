// Copyright Epic Games, Inc. All Rights Reserved.

#include "CryptRaiderPlayerController.h"
#include "EnhancedInputSubsystems.h"

void ACryptRaiderPlayerController::BeginPlay()
{
	Super::BeginPlay();

	// get the enhanced input subsystem
	if (UEnhancedInputLocalPlayerSubsystem *Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		// add the mapping context so we get controls
		Subsystem->AddMappingContext(InputMappingContext, 0);

		UE_LOG(LogTemp, Warning, TEXT("IF =========== BeginPlay ==========="));
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("ELSE =========== BeginPlay ==========="));
	}
}