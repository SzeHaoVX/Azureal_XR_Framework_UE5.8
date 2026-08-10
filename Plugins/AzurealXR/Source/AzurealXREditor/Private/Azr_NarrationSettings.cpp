// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "Azr_NarrationSettings.h"
#include "HAL/PlatformMisc.h"

FString UAzr_NarrationSettings::ResolveApiKey() const
{
	// The environment wins. A key set there is never written to any file this project owns, which is
	// the difference between a secret on one machine and a secret in everyone's clone.
	const FString FromEnvironment = FPlatformMisc::GetEnvironmentVariable(TEXT("ELEVENLABS_API_KEY"));
	if (!FromEnvironment.IsEmpty())
	{
		return FromEnvironment.TrimStartAndEnd();
	}

	return ApiKey.TrimStartAndEnd();
}

#if WITH_EDITOR

FText UAzr_NarrationProjectSettings::GetSectionText() const
{
	return NSLOCTEXT("AzurealXREditor", "NarrationProjectSection", "AzurealXR Narration");
}

FText UAzr_NarrationProjectSettings::GetSectionDescription() const
{
	return NSLOCTEXT("AzurealXREditor", "NarrationProjectDescription",
		"Voice and output settings for the Generate Narration buttons on Azr Explain Logic. Shared by the project so every developer generates the same voice. Your API key lives in Editor Preferences.");
}

FText UAzr_NarrationSettings::GetSectionText() const
{
	return NSLOCTEXT("AzurealXREditor", "NarrationKeySection", "AzurealXR Narration (API Key)");
}

FText UAzr_NarrationSettings::GetSectionDescription() const
{
	return NSLOCTEXT("AzurealXREditor", "NarrationKeyDescription",
		"Your own ElevenLabs key. Stored per user and never committed with the project. The voice settings are in Project Settings.");
}

#endif
