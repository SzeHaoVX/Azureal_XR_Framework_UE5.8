// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Azr_Types.h" // For FAzr_MultiLangText (AzurealXR module)
#include "MyBlueprintFunctionLibrary.generated.h"

/**
 * Localization helper for the CSM curriculum UI.
 */
UCLASS()
class AZUREAL_CSM_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	/**
	 * Reads a 3-language text block and outputs the correct string as an FText.
	 * Automatically falls back to English if the translation box is empty.
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal Localization", meta = (WorldContext = "WorldContextObject"))
	static FText GetActiveLanguageText(UObject* WorldContextObject, FAzr_MultiLangText MultiLangText);

};
