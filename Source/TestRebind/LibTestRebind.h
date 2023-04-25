// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "LibTestRebind.generated.h"

class UInputMappingContext;

/**
 * 
 */
UCLASS()
class TESTREBIND_API ULibTestRebind : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, BlueprintPure, Category = "ReBind")
	static TArray<FEnhancedActionKeyMapping> GetInput(APlayerController* playerController);

	UFUNCTION(BlueprintCallable, Category = "Rebind")
	static void RebindAction(UInputMappingContext* InputMap, FEnhancedActionKeyMapping CurrentKeyRef);
};
