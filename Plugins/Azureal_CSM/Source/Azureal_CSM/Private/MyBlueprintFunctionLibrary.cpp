// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"
#include "Azr_SessionSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"

FText UMyBlueprintFunctionLibrary::GetActiveLanguageText(UObject* WorldContextObject, FAzr_MultiLangText MultiLangText)
{
	// Default to English as a fail-safe
	FString TargetLanguage = TEXT("en");
	FString OutputString = MultiLangText.English;

	// Try to get the language from the Azureal Session Subsystem
	if (WorldContextObject)
	{
		if (UGameInstance* GI = UGameplayStatics::GetGameInstance(WorldContextObject))
		{
			if (UAzr_SessionSubsystem* Subsystem = GI->GetSubsystem<UAzr_SessionSubsystem>())
			{
				TargetLanguage = Subsystem->GetSessionLanguage();
			}
		}
	}

	// The code-to-box rule lives on the struct, so this resolver and the four in AzurealXR cannot
	// drift apart the way they did when Malay's code changed.
	OutputString = MultiLangText.Resolve(TargetLanguage);

	return FText::FromString(OutputString);
}

