

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

	// --- SPOKEN TEXT REVEAL ---
	// The sentence is shown whole while the widget waits, so it can be read at the learner's own pace.
	// Once the narration starts it is cleared and rebuilt one letter at a time, in step with the voice.

	/**
	 * Work out where the finished paragraph will wrap and pin those line breaks in place for the
	 * duration of the reveal. Call once, just before revealing.
	 *
	 * Without this a word that will not fit its line grows across the line anyway and then hops down
	 * partway through -- an artefact a word-at-a-time reveal never had, because a whole word was always
	 * placed correctly first time. Pinning the breaks means every letter appears exactly where it will
	 * finally sit and the paragraph never moves.
	 *
	 * Deliberately not done when the text is set: the widget has usually not been laid out by then, so
	 * there is no width to measure against. By the time the learner has pressed Play it has been on
	 * screen for a while. Measuring is skipped harmlessly if the width still is not known, leaving the
	 * plain reveal.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void PrepareTextReveal(bool bPinLineBreaks);

	/** Show only the first NumChars letters of the sentence. 0 clears it. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void SetRevealedCharCount(int32 NumChars);

	/** Put the whole sentence back, as authored. Called when playback ends and whenever no reveal is running. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Explain API")
	void ShowFullExplainText();

	/** Letters in the current sentence, ignoring the spaces between words. What the reveal counts towards. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Explain API")
	int32 GetExplainCharCount() const { return CharEndOffsets.Num(); }

	/** Words in the current sentence. Used to check a step's timings still describe the text on screen. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Explain API")
	int32 GetExplainWordCount() const { return WordCharCounts.Num(); }

	/** Letter index the given word starts at, so a word's authored timing can be turned into a letter position. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Explain API")
	int32 GetWordFirstCharIndex(int32 WordIndex) const;

	/** Letters in the given word, i.e. how many the reveal has to get through before the next word begins. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Explain API")
	int32 GetWordCharCount(int32 WordIndex) const;

	/**
	 * How many letters should be showing once Fraction of the narration has been spoken.
	 *
	 * Used only when a step has no authored timings. Letters are already their own measure of how long
	 * a word takes to say, so unlike the word-at-a-time reveal there is nothing to weight -- but the
	 * beat between two words is spoken whether the words are long or short, and giving it no time at
	 * all makes the text stream out as one unbroken run. WordGapWeighting is how much of the sentence's
	 * budget is set aside for those beats; the reveal holds still on each one, which is what gives the
	 * letters an audible rhythm rather than a constant crawl.
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal|Explain API")
	int32 GetCharCountForProgress(float Fraction, float WordGapWeighting) const;

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
	/** The sentence as authored, so a partial reveal can always be rebuilt from the original. */
	FString FullExplainString;

	/**
	 * The same sentence with the line breaks the finished paragraph will have written in, once
	 * PrepareTextReveal has measured them. Identical to FullExplainString when nothing was pinned.
	 *
	 * This, not the original, is what a partial reveal is cut from -- that is the whole point of
	 * pinning. ShowFullExplainText still restores the original, so the resting text is always exactly
	 * what the author wrote even if the measurement was ever off.
	 */
	FString RevealSourceString;

	/**
	 * Where each letter ends in RevealSourceString, counting only letters and not the spaces between
	 * words.
	 *
	 * Offsets rather than a split array so a partial reveal is just the left of the original, which
	 * keeps the author's punctuation, double spaces and line breaks exactly as written instead of
	 * re-joining pieces with single spaces and quietly reflowing the paragraph. Cutting just past a
	 * letter also means the text never ends on a dangling space, which would nudge where the line wraps.
	 *
	 * One entry per grapheme, not per string index. Tamil writes its vowels as separate combining
	 * marks, so stepping an index at a time would show a consonant for a frame before its vowel
	 * arrived -- a visibly broken glyph on every letter.
	 */
	TArray<int32> CharEndOffsets;

	/** First letter of each word, as an index into the letters above. */
	TArray<int32> WordFirstChar;

	/** Letters in each word. Together with the above this maps a word's authored timing onto letters. */
	TArray<int32> WordCharCounts;

	/** Recompute the reveal index. Called whenever the displayed sentence changes. */
	void RebuildRevealIndex(const FString& SourceText);

	/**
	 * Where the paragraph will wrap once it is whole, as string offsets to break at.
	 *
	 * Greedy fill against Slate's own font measurements, which is how Slate itself wraps, so the two
	 * agree for ordinary prose. Returns nothing at all when there is no width to measure against, and
	 * the reveal then simply runs unpinned rather than guessing.
	 */
	void MeasureWrapPoints(const FString& SourceText, TArray<int32>& OutBreakOffsets) const;

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