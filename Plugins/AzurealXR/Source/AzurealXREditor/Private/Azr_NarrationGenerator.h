// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

class IPropertyHandle;
class USoundBase;

/** How a step's generation ended, so callers do not have to read the message to find out. */
enum class EAzr_NarrationOutcome : uint8
{
	/** Audio and timings were produced and written back. */
	Generated,
	/** The text still matches what it was last generated from, so nothing was called for or spent. */
	AlreadyCurrent,
	/** Nothing to narrate. Normal for the steps of a component that only uses some of them. */
	NoText,
	Failed
};

/** What one generated line came back as. */
struct FAzr_NarrationResult
{
	bool bSuccess = false;

	EAzr_NarrationOutcome Outcome = EAzr_NarrationOutcome::Failed;

	/** Why it failed, or what it produced. Shown to the developer either way. */
	FText Message;

	/** The imported sound asset. */
	USoundBase* Audio = nullptr;

	/** Comma-separated seconds, one per word, ready for the step's Word Timings box. */
	FString WordTimingsCsv;

	/** Fingerprint of the text this was generated from, so a later edit can be detected. */
	FString TextHash;

	int32 WordCount = 0;
};

/**
 * Turns a line of narration text into a sound asset and the word timings the Explain text reveal
 * needs, in one call to ElevenLabs.
 *
 * The timings are not estimated or inferred: the with-timestamps endpoint returns the instant every
 * character is voiced, and those characters are folded back into words. That is what makes the reveal
 * exact rather than merely plausible.
 *
 * Editor only, and deliberately so -- nothing here exists in a packaged build.
 */
class FAzr_NarrationGenerator
{
public:
	/**
	 * Generate one line. Blocks until the request finishes, which is why the callers wrap it in a
	 * progress dialog.
	 */
	static FAzr_NarrationResult Generate(const FString& Text, const FString& AssetBaseName);

	/**
	 * Generate for one step property and write the results back through its handles.
	 *
	 * Written through the property system rather than into the struct's memory so the change is
	 * undoable, dirties the right package, and reaches instances of a Blueprint that has already been
	 * placed.
	 *
	 * bForce off skips a step whose text still matches the fingerprint it was last generated from --
	 * no call, no credits, and no new recording that its existing timings would no longer fit.
	 */
	static FAzr_NarrationResult GenerateForStepHandle(const TSharedPtr<IPropertyHandle>& StepHandle, bool bForce);

	/** Fold a character-level alignment into "start:end" seconds for each word. */
	static FString MakeWordTimingsCsv(const TArray<FString>& Characters, const TArray<double>& StartTimes, const TArray<double>& EndTimes, int32& OutWordCount);

	/** Words in a sentence, by the same rule the runtime reveal counts them: any run of whitespace separates. */
	static int32 CountWords(const FString& Text);

	/** Put a RIFF header on raw 16-bit mono PCM so Unreal will import it as a sound. */
	static void WrapPcmAsWav(const TArray<uint8>& PcmBytes, int32 SampleRate, TArray<uint8>& OutWavBytes);
};
