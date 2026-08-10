

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Azr_Types.h" // For FAzr_MultiLangText
#include "Azr_ExplainWidget.generated.h"

// Forward Declarations
class UButton;
class UTextBlock;
class UProgressBar;

// Determines what text the button shows when audio is done
UENUM(BlueprintType)
enum class EAzr_ExplainStepType : uint8 {
	Single, // Normal Explain (Completes with "CONFIRM")
	Start,  // Explain+ (Completes with "CONTINUE")
	Middle, // Explain+ (Completes with "CONTINUE")
	End     // Explain+ (Completes with "CONFIRM")
};

// Tracks the current visual state of the widget
UENUM(BlueprintType)
enum class EAzr_ExplainWidgetState : uint8 {
	Idle,     // Waiting for player to click Play
	Playing,  // Audio is running, button is locked
	Completed // Audio done, waiting for player to click Continue/Confirm
};

// --- EVENTS ---
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExplainPlayAudio);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExplainProceed);

/**
 * UAzr_ExplainWidget
 * The C++ base for the AzurealXR Explanation UI.
 * Manages the Play/Progress/Continue state machine.
 */
UCLASS(Abstract)
class AZUREALXR_API UAzr_ExplainWidget : public UUserWidget {
	GENERATED_BODY()

public:
	// --- EVENTS FOR THE COMPONENT TO LISTEN TO ---
	UPROPERTY(BlueprintAssignable, Category = "Azureal|Explain Events")
	FOnExplainPlayAudio OnPlayAudioClicked;

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Explain Events")
	FOnExplainProceed OnProceedClicked;

	// --- PUBLIC API FOR THE COMPONENT TO CALL ---
	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void InitializeStep(EAzr_ExplainStepType InStepType);

	// NEW: Allows the logic component to inject the paragraph text (3-box localized)
	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void SetExplainText(const FAzr_MultiLangText& NewText);

	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void SetAudioProgress(float Progress);

	// --- SPOKEN REVEAL ---
	// The sentence is shown in full first so it can be read at the learner's own pace. When the audio
	// starts it is cleared and rebuilt word by word, in step with the narration.

	/** Show only the first NumWords of the sentence. 0 clears it. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void SetRevealedWordCount(int32 NumWords);

	/** Put the whole sentence back. Called when playback ends, and whenever the reveal is not in use. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void ShowFullExplainText();

	/** How many words the current sentence has, so the driver knows what it is counting towards. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Explain API")
	int32 GetExplainWordCount() const { return WordEndOffsets.Num(); }

	/**
	 * How many words should be showing once Fraction of the narration has been spoken.
	 *
	 * Not simply Fraction * WordCount. Words are not spoken at a uniform rate -- "the" and
	 * "electricity" take very different amounts of time -- so giving every word an equal slice of the
	 * clip makes short words lag and long words arrive early. Each word instead claims time in
	 * proportion to its length, which is what stops the reveal drifting against the voice mid-sentence.
	 *
	 * LengthWeighting blends between equal slices (0) and fully length-proportional (1).
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal|Explain API")
	int32 GetWordCountForProgress(float Fraction, float LengthWeighting) const;

	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void SetPlaybackCompleted();

	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void SetHoveredByLeftHand(bool bIsHovering);

	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void SetHoveredByRightHand(bool bIsHovering);

protected:
	virtual void NativeConstruct() override;

	// --- EXACT UMG BINDINGS ---
	UPROPERTY(BlueprintReadWrite, Category = "Azureal|UI", meta = (BindWidget))
	UButton* InteractionButton;

	UPROPERTY(BlueprintReadWrite, Category = "Azureal|UI", meta = (BindWidget))
	UTextBlock* ActionText;

	UPROPERTY(BlueprintReadWrite, Category = "Azureal|UI", meta = (BindWidget))
	UTextBlock* ExplainTextBlock;

	UPROPERTY(BlueprintReadWrite, Category = "Azureal|UI", meta = (BindWidget))
	UProgressBar* AudioProgressBar;

	// --- LOCALIZATION CONFIGURATION (button captions per language; defaults seeded in C++) ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Localization")
	FAzr_MultiLangText Text_PlayAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Localization")
	FAzr_MultiLangText Text_PlayingAudio;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Localization")
	FAzr_MultiLangText Text_Confirm;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Localization")
	FAzr_MultiLangText Text_Continue;

private:
	/** The sentence as authored, kept so a partial reveal can always rebuild from the original. */
	FString FullExplainString;

	/**
	 * Where each word ends in FullExplainString.
	 *
	 * Offsets rather than a split array so a partial reveal is just Left(N) of the original -- which
	 * keeps the author's punctuation, double spaces and line breaks byte-for-byte instead of
	 * re-joining words with a single space and quietly reflowing the paragraph.
	 *
	 * Words rather than characters on purpose: at headset distance a per-character typewriter is hard
	 * to read and fights the rhythm of speech, whereas words land naturally with the narration.
	 */
	TArray<int32> WordEndOffsets;

	/**
	 * Characters in each word, used as a stand-in for how long it takes to say.
	 *
	 * Character count rather than a syllable estimate on purpose: it holds up across English, Malay and
	 * Tamil without per-language rules, and syllable counting actually overstates the difference --
	 * longer words are spoken with shorter syllables, so their duration grows more slowly than their
	 * syllable count does.
	 */
	TArray<int32> WordLengths;

	/** Recompute the reveal offsets. Called whenever the displayed sentence changes. */
	void RebuildWordOffsets(const FText& SourceText);

	UFUNCTION()
	void OnInteractionButtonClicked();

	UFUNCTION()
	void OnInteractionButtonHovered();

	UFUNCTION()
	void OnInteractionButtonUnhovered();

	void UpdateButtonVisuals();

	// Resolves a 3-box struct to the session's active language (falls back to English).
	FText GetLocalizedText(const FAzr_MultiLangText& MultiLangText) const;

	// --- STATE TRACKING ---
	EAzr_ExplainStepType CurrentStepType;
	EAzr_ExplainWidgetState CurrentState;

	bool bIsLeftHandHovering;
	bool bIsRightHandHovering;
};