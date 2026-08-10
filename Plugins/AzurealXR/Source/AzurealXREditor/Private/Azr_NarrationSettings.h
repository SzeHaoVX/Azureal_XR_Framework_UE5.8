// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Azr_NarrationSettings.generated.h"

/**
 * How the narration is spoken, and where it is saved. Shared by the whole project.
 *
 * These belong to the project rather than to a person: a voice is a property of the module, not of
 * whoever happened to generate a line. If two developers held their own settings, the lines each
 * generated would audibly differ from the rest of the module and the only fix would be regenerating
 * everything.
 *
 * Saved to Config/DefaultEditor.ini and committed, so a fresh clone generates identical narration.
 */
UCLASS(config = Editor, defaultconfig, meta = (DisplayName = "AzurealXR Narration"))
class UAzr_NarrationProjectSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	/**
	 * Which voice reads the narration -- either its id, or simply its name, which is looked up.
	 *
	 * Defaults to Roger. On a free ElevenLabs subscription only the built-in premade voices can be
	 * driven through the API at all; anything added from the Voice Library works on the website and is
	 * refused here.
	 *
	 * Worth settling before a module is narrated rather than during. Changing it later leaves whatever
	 * was already generated in the old voice, and the only way back to one consistent module is to
	 * regenerate every line.
	 */
	UPROPERTY(config, EditAnywhere, Category = "Voice")
	FString VoiceId = TEXT("CwhRBWXzGAHq8TQ4Fs17");

	UPROPERTY(config, EditAnywhere, Category = "Voice")
	FString ModelId = TEXT("eleven_multilingual_v2");

	// The four below decide how the read sounds, and the same warning applies: they are part of what a
	// module sounds like, so a line generated after a change will not match the lines generated before
	// it. Settle them once, project-wide -- which is why they live here and not in each developer's own
	// preferences.

	UPROPERTY(config, EditAnywhere, Category = "Voice", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float Stability = 0.89f;

	UPROPERTY(config, EditAnywhere, Category = "Voice", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float SimilarityBoost = 0.97f;

	UPROPERTY(config, EditAnywhere, Category = "Voice", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float Style = 0.0f;

	UPROPERTY(config, EditAnywhere, Category = "Voice", meta = (ClampMin = "0.7", ClampMax = "1.2"))
	float Speed = 1.0f;

	UPROPERTY(config, EditAnywhere, Category = "Voice")
	bool bUseSpeakerBoost = true;

	/**
	 * Same seed with the same text and settings reproduces a generation. 0 leaves it to ElevenLabs.
	 *
	 * Worth setting if a line ever has to be reproduced exactly: without one, regenerating the same
	 * sentence gives a different read of a different length, which is why the Generate buttons avoid
	 * regenerating anything whose text has not changed.
	 */
	UPROPERTY(config, EditAnywhere, Category = "Voice", meta = (ClampMin = "0"))
	int32 Seed = 0;

	/** Where generated sound assets are saved. Blank means /Game/Narration. */
	UPROPERTY(config, EditAnywhere, Category = "Output", meta = (ContentDir))
	FDirectoryPath NarrationFolder;

	virtual FName GetCategoryName() const override { return FName(TEXT("Plugins")); }

#if WITH_EDITOR
	virtual FText GetSectionText() const override;
	virtual FText GetSectionDescription() const override;
#endif
};

/**
 * The developer's own ElevenLabs API key.
 *
 * Kept apart from the project settings above, and configured against EditorPerProjectUserSettings so
 * it lands in this developer's own ini under Saved/ rather than in Config/ -- which is committed. A key
 * in a project settings page is a key in the repository, shared with everyone who ever clones it.
 *
 * It is still plaintext on this machine. Prefer the ELEVENLABS_API_KEY environment variable, which is
 * read first and never written anywhere.
 */
UCLASS(config = EditorPerProjectUserSettings, meta = (DisplayName = "AzurealXR Narration (API Key)"))
class UAzr_NarrationSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	/**
	 * ElevenLabs API key. Left blank, the ELEVENLABS_API_KEY environment variable is used instead --
	 * which is the better habit, since nothing then writes the key to disk at all.
	 */
	UPROPERTY(config, EditAnywhere, Category = "ElevenLabs", meta = (PasswordField = "true"))
	FString ApiKey;

	/** The key to use, preferring the environment over anything written to disk. Empty if neither is set. */
	FString ResolveApiKey() const;

	virtual FName GetCategoryName() const override { return FName(TEXT("Plugins")); }

#if WITH_EDITOR
	virtual FText GetSectionText() const override;
	virtual FText GetSectionDescription() const override;
#endif
};
