// Fill out your copyright notice in the Description page of Project Settings.


#include "LibTestRebind.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "Framework/Commands/InputChord.h"

TArray<FEnhancedActionKeyMapping> ULibTestRebind::GetInput(APlayerController* playerController)
{
	UEnhancedInputLocalPlayerSubsystem* subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(playerController->GetLocalPlayer());

	return subsystem->GetAllPlayerMappableActionKeyMappings();
}

void ULibTestRebind::RebindAction(UInputMappingContext* InputMap, FEnhancedActionKeyMapping CurrentKeyRef)
{
	//if(InputMap)
	//InputMap->MapKey(CurrentKeyRef.Action, InputChord.Key);
	return;
}
