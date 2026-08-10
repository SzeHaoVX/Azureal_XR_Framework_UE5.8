

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Azr_Types.h" 
#include "Azr_ExplainWidget.h" 

#include "Azr_Explain.generated.h"

// Forward Declarations
class UWidgetComponent;
class UAudioComponent;
class USoundWave;
class UCableComponent;
class UStaticMeshComponent;
class UMaterialParameterCollection;
class UAzr_ExplainWidget;
class UAzr_Pointer; // Standard pointer reference

// --- EVENTS ---
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExplainFinished);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExplainPlusFinished, int32, StepIndex);

// Fires when player press start button
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnExplainStarted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExplainPlusStarted, int32, StepIndex);

/**
 * UAzr_Explain
 * The logic manager for AzurealXR Explanation UI flows.
 * Handles single-shot explains or multi-step (Start -> Middle -> End) sequences.
 */
UCLASS(ClassGroup = (AzurealXR), meta = (BlueprintSpawnableComponent, DisplayName = "Azr Explain Logic"))
class AZUREALXR_API UAzr_Explain : public UActorComponent
{
	GENERATED_BODY()

public:
	UAzr_Explain();

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	// --- CORE SETTINGS ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings")
	int32 InteractID = 1;


	// --- 1. NORMAL EXPLAIN ---
	// Used when EnableExplain() is called
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Normal Explain")
	FAzr_ExplainStep SingleExplainStep;

	// --- 2. EXPLAIN+ (THE CHAIN) ---
	// Used when EnableExplainPlus() is called
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Explain Plus")
	FAzr_ExplainStep StartStep;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Explain Plus")
	TArray<FAzr_ExplainStep> MiddleSteps;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Explain Plus")
	FAzr_ExplainStep EndStep;

	// --- SPOKEN TEXT REVEAL ---
	// The sentence is readable in full as soon as the widget appears. Once the learner presses Play it
	// is cleared and rebuilt a letter at a time alongside the narration, so a slow reading reveals
	// slowly and a fast one reveals fast. Off by default -- existing content keeps the static sentence.

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Text Reveal")
	bool bRevealTextWithAudio = false;

	/**
	 * Work out where the finished paragraph wraps and hold those line breaks still while it is
	 * revealed.
	 *
	 * Leave this on. A letter-at-a-time reveal grows a word across the line it is on, so a word that
	 * will not fit ends up hopping down to the next line partway through being spelled out. Pinning the
	 * breaks puts every letter where it will finally sit, and the paragraph never moves.
	 *
	 * Turn it off only if the pinned breaks ever disagree with how the widget actually wraps -- the
	 * reveal then runs unpinned rather than fighting it.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Text Reveal",
		meta = (EditCondition = "bRevealTextWithAudio"))
	bool bPinLineBreaks = true;

	/**
	 * How much longer than the sentence's usual pace a single word may take to spell out before the
	 * reveal simply waits for the next one.
	 *
	 * Word timings say when each word starts, not when it ends, so without a limit the last word before
	 * a pause would trickle its letters out across the whole silence. Capping it near the clip's own
	 * measured pace lets the word finish at speaking speed and hold still through the gap, which is
	 * what makes the text feel locked to the voice rather than merely ending with it.
	 *
	 * Only used when a step has authored timings.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Text Reveal",
		meta = (EditCondition = "bRevealTextWithAudio", ClampMin = "1.0", ClampMax = "3.0"))
	float WordFillSlack = 1.3f;

	/**
	 * How quiet the narration must go, as a fraction of its own loudest moment, before it counts as a
	 * pause rather than speech.
	 *
	 * Relative rather than an absolute loudness on purpose. The engine measures the envelope as an
	 * average absolute sample value, which for speech peaks around 0.1 rather than anywhere near 1, and
	 * scales with however the clip was mastered -- so any fixed number is wrong for the next asset.
	 * Judging against this clip's own peak works whatever its level.
	 *
	 * Only used when a step has no authored timings. Raise it if room tone keeps the text creeping
	 * through pauses; lower it if quiet speech stalls it.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Text Reveal",
		meta = (EditCondition = "bRevealTextWithAudio", ClampMin = "0.01", ClampMax = "0.9"))
	float SilenceLevel = 0.15f;

	/**
	 * Fraction of the clip assumed to be speech rather than pauses, used only for the opening moments.
	 * The real figure is measured as the clip plays and takes over from this guess, so it just stops the
	 * first letters from mistiming before there is anything to measure.
	 *
	 * Only used when a step has no authored timings.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Text Reveal",
		meta = (EditCondition = "bRevealTextWithAudio", ClampMin = "0.1", ClampMax = "1.0"))
	float AssumedSpeechRatio = 0.85f;

	/**
	 * How much of the sentence's pacing is set aside for the beats between words.
	 *
	 * Letters already measure themselves -- a long word takes longer than a short one because it has
	 * more of them -- but the gap between two words is spoken whether they are long or short. Giving it
	 * nothing makes the text stream out as one unbroken crawl; giving it something makes the reveal
	 * hold briefly at each word, which is what lets it read as speech.
	 *
	 * Only used when a step has no authored timings.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Text Reveal",
		meta = (EditCondition = "bRevealTextWithAudio", ClampMin = "0.0", ClampMax = "1.0"))
	float WordGapWeighting = 1.0f;

	/**
	 * How long the reveal keeps treating the narration as still speaking after the sound dips quiet.
	 *
	 * Consonants like t, k and p are silent for a moment before they release, so a bare loudness test
	 * reads them as pauses and stalls the text mid-word. Holding briefly bridges those without hiding
	 * real pauses, which are several times longer.
	 *
	 * Only used when a step has no authored timings.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Text Reveal",
		meta = (EditCondition = "bRevealTextWithAudio", ClampMin = "0.0", ClampMax = "0.5"))
	float SpeechHoldTime = 0.12f;

	/** Log what the reveal actually measured, so a mistimed step can be diagnosed instead of guessed at. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Text Reveal",
		meta = (EditCondition = "bRevealTextWithAudio"))
	bool bLogRevealDiagnostics = false;

	// --- AUDIO ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Audio")
	USoundBase* SoundHighlightStart;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Explain Settings|Audio")
	USoundBase* SoundHighlightEnd;

	// --- EVENTS ---
	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnExplainFinished OnExplainCompleted;

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnExplainPlusFinished OnExplainPlusCompleted;

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnExplainStarted OnExplainStarted;

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnExplainPlusStarted OnExplainPlusStarted;

	// --- API ---
	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void EnableExplain();

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void EnableExplainPlus();

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void DisableExplain();

private:
	// --- INTERNAL COMPONENTS ---
	UPROPERTY()
	UAudioComponent* ActiveAudioComp;
	UPROPERTY()
	UStaticMeshComponent* StartAnchor;
	UPROPERTY()
	UStaticMeshComponent* EndAnchor;
	UPROPERTY()
	UCableComponent* TetherCable;
	UPROPERTY()
	UMaterialParameterCollection* HighlightMPC;
	UPROPERTY()
	UPrimitiveComponent* TargetMesh;

	// --- STATE TRACKING ---
	bool bIsActive;
	bool bIsPlusMode;
	int32 CurrentMiddleIndex;
	EAzr_ExplainStepType CurrentStepType;

	bool bIsStepRunning = false;
	float StepStartTime = 0.0f;
	float StepDuration = 0.0f;

	/**
	 * How far into the narration playback actually is, as opposed to how long ago Play was pressed.
	 *
	 * The two are not the same. A compressed asset played for the first time, or a streaming hitch,
	 * delays the sound without delaying the clock -- and every word after that point would then be
	 * revealed early by exactly that delay. Reported by the audio engine, advanced by DeltaTime between
	 * reports so the reveal stays smooth rather than stepping once per buffer.
	 */
	float PlaybackElapsed = 0.0f;

	/**
	 * Whether the audio engine has reported a playback position at all.
	 *
	 * The engine notes this feed is not implemented on every platform, so a step that never hears from
	 * it falls back to timing from when Play was pressed -- which is what this always did before.
	 */
	bool bPlaybackPositionReceived = false;

	/**
	 * Whether any reported position was ever believable -- that is, not ahead of the moment Play was
	 * pressed.
	 *
	 * Diagnostics only, but the distinction matters when reading a log: the reveal can be running with
	 * the position feed bound and every single report being thrown away, which is indistinguishable
	 * from the plain clock and should not be reported as though the position were being followed.
	 */
	bool bPlaybackPositionTrusted = false;

	// --- TEXT REVEAL STATE ---
	/** True only while a reveal is actually driving this step's text. */
	bool bRevealActive = false;
	/** Newest loudness reading from the narration. Written by the audio thread's callback, read on tick. */
	float LatestEnvelope = 0.0f;
	/**
	 * Whether any loudness reading has arrived at all this step.
	 *
	 * The engine notes that the envelope feed is not implemented on every platform. Without this the
	 * reveal would look broken rather than absent -- blank text for the whole clip, then the entire
	 * sentence at once at the end -- so a step that never hears anything falls back to pacing on the
	 * clip's length.
	 */
	bool bEnvelopeReceived = false;
	/** Seconds of narration that carried speech rather than silence. This is the reveal's real clock. */
	float SpeechSeconds = 0.0f;
	/** Time left on the hold that carries the speech clock through a consonant's brief silence. */
	float SpeechHoldRemaining = 0.0f;
	/** Loudest the narration has reached this step. What "quiet" is judged against. */
	float PeakEnvelope = 0.0f;
	/** Frames counted as speech, and frames seen in total. Diagnostics only. */
	int32 DiagSpeechFrames = 0;
	int32 DiagTotalFrames = 0;
	/** Letters shown so far. Only ever climbs, so the sentence cannot flicker backwards mid-play. */
	int32 RevealedChars = 0;
	/** Letters in the sentence being revealed, cached from the widget when playback starts. */
	int32 TotalRevealChars = 0;

	/**
	 * Authored moment each word begins. Empty unless this step carries usable timings.
	 *
	 * When this is filled the reveal stops estimating entirely: word i's letters begin appearing the
	 * instant playback reaches its time. Nothing about loudness or speech ratio is consulted.
	 */
	TArray<float> ExactWordTimes;

	/**
	 * Moment each word finishes being spoken. Empty when a step carries only start times.
	 *
	 * Knowing where a word ends is what removes the last of the guesswork. Without it the only clue to
	 * a word's length is the gap to the next one, which also contains any pause -- so the reveal had to
	 * infer a speaking pace and cap each word against it. With it, a word's letters simply occupy
	 * exactly as long as the word is spoken, pauses fall out for free, and a written form shorter than
	 * its spoken one ("11kV" for "eleven kilovolts") stretches to match the voice instead of finishing
	 * early and waiting.
	 */
	TArray<float> ExactWordEnds;

	/**
	 * How long each word's letters are given to appear.
	 *
	 * Taken straight from the end times above when they are present. Otherwise inferred, for timings
	 * that carry only word starts: the gap to the next word, capped near the sentence's own measured
	 * pace so a word finishes at speaking speed and then holds still through a pause rather than
	 * crawling across it.
	 */
	TArray<float> WordFillDurations;

	/** Resolve a 3-box field to the session's language, matching how the widget picks its text. */
	FString ResolveLanguageString(const FAzr_MultiLangText& MultiLangText) const;

	/**
	 * Read this step's timings for the active language into ExactWordTimes.
	 *
	 * Refuses anything that does not line up with the sentence actually on screen -- a fingerprint that
	 * no longer matches the text, the wrong number of entries, or times that run backwards. Stale
	 * timings are worse than none: they would desynchronise confidently rather than fall back to the
	 * estimate, which is at least roughly right.
	 */
	void ParseExactWordTimes(int32 ExpectedWordCount);

	/** Work out how long each word gets to spell itself out. Call after ExactWordTimes is accepted. */
	void BuildWordFillDurations();

	// Stores the visuals of the currently active step so helpers can read it dynamically
	FAzr_ExplainStep CurrentActiveStep;

	UPROPERTY()
	UWidgetComponent* ActiveWidgetComp;

	UPROPERTY()
	UAzr_ExplainWidget* ActiveExplainUI;

	// --- HIGHLIGHT ENGINE ---
	int32 StencilID;
	float LastHighlightValue;
	bool bWasRising;

	// --- CORE LOGIC HANDLERS ---
	void LoadStep(const FAzr_ExplainStep& StepData, EAzr_ExplainStepType StepType);
	void HideAllWidgets();

	UFUNCTION()
	void HandlePlayAudioClicked();
	UFUNCTION()
	void HandleProceedClicked();

	/** Loudness of the narration, delivered continuously while the clip plays. */
	UFUNCTION()
	void HandleAudioEnvelope(const USoundWave* PlayingSoundWave, const float EnvelopeValue);

	/** How far through the clip the audio engine has actually got. */
	UFUNCTION()
	void HandleAudioPlaybackPercent(const USoundWave* PlayingSoundWave, const float PlaybackPercent);

	/**
	 * Build the audio component this step will narrate through, without starting it.
	 *
	 * Separate from playback because the loudness readings are switched on when the sound begins, from
	 * whether OnAudioSingleEnvelopeValue is bound at that moment -- so the binding has to already exist.
	 * SpawnSoundAttached plays on creation, which is a frame too late to ever hear anything.
	 */
	void EnsureAudioComponent();

	/** Push the reveal forward to match how much narration has actually been spoken. */
	void UpdateTextReveal(float DeltaTime, float Elapsed);

	// --- VISUAL HELPERS ---
	void EnsureInitialized();
	void ToggleTether(bool bState);
	void ToggleHighlight(bool bState);
	void UpdatePointer(bool bIsActiveMode);

	UPrimitiveComponent* FindMeshByName(FName Name);
	UWidgetComponent* FindWidgetByName(FName Name);
	UAzr_Pointer* FindPlayerPointer() const;
	FVector CalculateSurfaceAnchor(USceneComponent* Target, EAzr_TetherPos Pos, const FAzr_TetherConfig& Config);
};