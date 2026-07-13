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

	// Check the language code and return the matching text box (fallback to English if empty)
	if (TargetLanguage.Equals(TEXT("Malay"), ESearchCase::IgnoreCase) || TargetLanguage.Equals(TEXT("ms"), ESearchCase::IgnoreCase))
	{
		OutputString = MultiLangText.Malay.IsEmpty() ? MultiLangText.English : MultiLangText.Malay;
	}
	else if (TargetLanguage.Equals(TEXT("Tamil"), ESearchCase::IgnoreCase) || TargetLanguage.Equals(TEXT("ta"), ESearchCase::IgnoreCase))
	{
		OutputString = MultiLangText.Tamil.IsEmpty() ? MultiLangText.English : MultiLangText.Tamil;
	}

	return FText::FromString(OutputString);
}

