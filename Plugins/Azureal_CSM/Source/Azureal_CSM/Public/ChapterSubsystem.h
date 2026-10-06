

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Engine/TimerHandle.h"
#include "ChapterBundle.h"
#include "ChapterSubsystem.generated.h"

// --- DECLARE EVENT ---
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnChapterDataUpdated);

class UTrainingCurriculum;

UCLASS()
class AZUREAL_CSM_API UChapterSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    // --- EVENT DISPATCHER ---
    UPROPERTY(BlueprintAssignable, Category = "Events")
    FOnChapterDataUpdated OnChapterDataUpdated;

    // --- SESSION STATE ---
    UFUNCTION(BlueprintPure, Category = "Session State")
    bool HasPassedStartScreen() const { return bHasPassedStartScreen; }

    UFUNCTION(BlueprintCallable, Category = "Session State")
    void SetHasPassedStartScreen(bool bValue)
    {
        bHasPassedStartScreen = bValue;

        // Passing the start screen is the moment a jump stops being special: from here on the player
        // has seen the menu, so the ordinary "a chapter is current" rule takes over again.
        if (bValue) bOpenedByChapterJump = false;
    }

    /**
     * True when this level was opened by a platform chapter jump rather than by the player choosing
     * from the menu.
     *
     * The start screen is normally hidden once a chapter is current, on the reasoning that a current
     * chapter means the player has already been through the menu to pick it. A jump breaks that: it
     * selects the chapter on their behalf, so they arrive inside one having never seen the menu, and
     * the index alone stops meaning what it used to. This says which of the two happened.
     *
     * Goes false as soon as the player passes the start screen, so it only affects the first look.
     */
    UFUNCTION(BlueprintPure, Category = "Session State")
    bool WasOpenedByChapterJump() const { return bOpenedByChapterJump; }

    // --- SETUP ---
    /**
     * Points the subsystem at the module's chapter list, and -- unless told not to -- opens straight
     * away to whichever chapter the platform asked for.
     *
     * The auto-open lives here because this is the one call every module already makes, and it is
     * the first moment the chapter list is known, so nothing downstream has to be re-wired to get
     * the behaviour. It costs nothing when the platform did not ask for a chapter, which is every
     * launch that goes through the menu normally.
     *
     * Untick bAutoOpenRequestedChapter when the module wants something in between -- a fade, a
     * loading screen, a "resuming Chapter 2" beat -- and drive it with ConsumeRequestedChapter or
     * TryOpenRequestedChapter instead.
     */
    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    void InitializeChapters(UChapterBundle* MasterList, bool bAutoOpenRequestedChapter = true);

    // --- NAVIGATION ---
    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    FName SelectChapter(int32 Index);

    /**
     * Takes the chapter the platform asked for, if it asked for one, and returns the level to open.
     * Returns NAME_None when there was no request, when it has already been taken, or when the
     * number does not name a chapter in this module -- in every one of those cases the menu should
     * open as usual.
     *
     * Call it once, after InitializeChapters. The number arrives 1-based from AZUREAL_START_CHAPTER,
     * matching every other chapter number the platform and the server exchange, and is converted to
     * the 0-based index the rest of this subsystem uses -- doing that conversion here is the point,
     * since it is the off-by-one every consumer would otherwise have to get right on its own.
     *
     * Opening the level is left to the caller. A product almost always wants a fade or a loading
     * screen in front of it, and that is not something this subsystem should decide.
     */
    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    FName ConsumeRequestedChapter();

    /**
     * The same thing, and it opens the level too. Returns true when it did, false when there was
     * nothing to open and the menu should carry on as usual.
     *
     * One node instead of four. Use this when the module goes straight into the chapter; use
     * ConsumeRequestedChapter instead when something has to happen in between -- a fade, a loading
     * screen, a "resuming Chapter 2" beat -- since that keeps the transition where a designer can
     * see it.
     *
     * Safe to call from a widget's Construct: OpenLevel only sets a pending travel, so the map
     * change happens at the end of the frame rather than underneath whatever is still building.
     */
    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    bool TryOpenRequestedChapter();

    /**
     * Leaves the boot map when it turns out to be a chapter the explanation filter hides, opening the
     * nearest visible chapter instead (later ones first). Returns true when it travelled.
     *
     * A module whose GameDefaultMap doubles as its opening chapter drops the player into that chapter's
     * world no matter what the filter says -- the engine loads it before any of this code runs, and the
     * menu that sits on top of it is then offering chapters while the player stands in one that is not
     * on the list. This is the correction.
     *
     * Three things it deliberately does not do. It does not touch a boot map that is not a chapter at
     * all, which is what a dedicated menu map is. It does not run after the platform's chapter jump has
     * been taken, since that destination was chosen on purpose. And it runs ONCE, because the menu
     * initialises again every time the player opens it and this is a question about where the module
     * booted, not about where they are now.
     *
     * InitializeChapters calls this itself when bAutoOpenRequestedChapter is ticked and no chapter jump
     * happened. A module that unticks it and drives the jump on its own should call this whenever it
     * does not jump.
     */
    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    bool TryLeaveHiddenBootChapter();

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetCurrentChapterIndex() const;

    /**
     * The current chapter as AUTHORED in the bundle, 1-based. The number the platform and the server
     * exchange, and the one AZUREAL_START_CHAPTER counts in. Same number as GetCurrentChapterInfo gives.
     *
     * Report progress with this and never with the display number. The display number shifts the moment
     * a chapter is filtered out, so a session played with explanations off would file its results
     * against a different chapter of the module than the one the learner actually played.
     */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetCurrentAuthoredChapterNumber() const { return GetCurrentChapterIndex() + 1; }

    /**
     * The current chapter's place in the list the learner is shown, 1-based. For headers and captions
     * only; it shifts when an earlier chapter is filtered out, so never report it.
     */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetCurrentChapterDisplayNumber() const;

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetNextUnplayedChapterIndex();

    // --- COMPLETION & PROGRESS ---
    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    void MarkCurrentChapterComplete();

    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    void UpdateChapterProgress(int32 StepIndex);

    /** Completely wipes progress for a specific chapter. */
    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    void ResetChapterProgress(int32 Index);

    /** Wipes ALL progress and resets session. */
    UFUNCTION(BlueprintCallable, Category = "Chapter System")
    void ResetAllModuleProgress();

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    bool IsChapterComplete(int32 Index) const;

    /**
     * Returns TRUE once every VISIBLE chapter has been completed. A chapter the explanation filter hides
     * cannot be played, so it cannot be required.
     */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    bool IsModuleFullyComplete() const;

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    void GetChapterProgress(int32 Index, int32& OutCurrent, int32& OutMax) const;

    // --- CHAPTER VISIBILITY (EXPLANATION FILTERING) ---

    /**
     * The survivor rule for a chapter, in one place: a chapter disappears only when explanations are off
     * and the filter removed every step it had. That is the step rule applied one level up, which is why
     * this asks CountFilteredSteps rather than deciding anything for itself.
     *
     * With explanations on, every chapter is visible. A chapter with no curriculum, or an empty one,
     * stays visible either way: an unauthored chapter is a mistake worth seeing, not something to
     * quietly hide.
     *
     * Static and taking the chapter outright, so a menu handed a bundle other than the active one can
     * filter the bundle it was actually given without a second copy of this rule existing.
     */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    static bool IsChapterDefVisible(const FChapterDef& Chapter);

    /** The same question asked of a chapter in the active bundle. False for an index that is not one. */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    bool IsChapterVisible(int32 Index) const;

    /**
     * Where this chapter sits in the list the learner is shown, 1-based. 0 when it is hidden.
     *
     * The raw bundle index stays the identity used everywhere else -- progress, completion, which level
     * to open, the number the platform asks for. This is presentation only, and the two part company
     * the moment a chapter ahead of this one is filtered out.
     */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetChapterDisplayNumber(int32 Index) const;

    /** Raw bundle indices of the surviving chapters, in authored order. */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    TArray<int32> GetVisibleChapterIndices() const;

    // --- DATA HELPERS ---
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    UTrainingCurriculum* GetCurrentStepData() const;

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    UTrainingCurriculum* GetStepDataForIndex(int32 Index) const;

    /**
     * Turns a 0-based page index on the current chapter into the 1-based AUTHORED step number.
     * Returns 0 when there is no curriculum, or when the index does not name a surviving step.
     *
     * Asks GetFilteredSteps, the call the page list itself is built with, so the index lands in the
     * same list. Which steps survive is decided once, in UTrainingCurriculum::DoesStepSurvive.
     */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetAuthoredStepNumber(int32 FilteredStepIndex) const;

    /**
     * The authored step number of the page that most recently started the Chapter Game Manager. 0 after
     * a chapter change, until the step page starts the manager again.
     *
     * A Game Manager switches on this instead of counting its own dispatches. Counting works only while
     * nothing is filtered; this is correct either way.
     */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetCurrentAuthoredStepNumber() const { return CurrentAuthoredStepNumber; }

    /** Published by the step page immediately before it fires RunStepsOrder. Not exposed to Blueprint on purpose. */
    void SetCurrentAuthoredStepNumber(int32 AuthoredNumber) { CurrentAuthoredStepNumber = AuthoredNumber; }

    // --- NEW: MANAGER HELPER ---
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    TSubclassOf<AActor> GetCurrentChapterGameManagerClass() const;

    // --- INFO HELPERS ---
    /**
     * Chapter number and title. OutChapterNumber is the AUTHORED number, safe to report to the server.
     *
     * A header shown to the learner wants GetCurrentChapterDisplayNumber instead, which closes the gap
     * a filtered-out chapter leaves. This one deliberately kept its old meaning: Blueprints written
     * before chapters could be hidden feed it into Quiz Update, and they keep reporting correctly.
     */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    void GetCurrentChapterInfo(int32& OutChapterNumber, FAzr_MultiLangText& OutChapterTitle) const;

    // --- STATISTICS ---
    /** Every chapter in the bundle, hidden ones included. A loop over the bundle wants this one. */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetTotalChapterCount() const;

    /** How many chapters the learner can see, for "of how many" captions. */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetVisibleChapterCount() const;

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetTotalMasterStepCount() const;

    /** Returns current progress for the whole module (e.g. 3 out of 5 chapters completed), counted over visible chapters. */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    void GetModuleCompletionStatus(int32& OutCompletedCount, int32& OutTotalCount) const;

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    /** Seconds the arrival fade takes to come back up. */
    UPROPERTY(BlueprintReadWrite, Category = "Chapter System|Transition")
    float ChapterJumpFadeInSeconds = 0.6f;

    /**
     * How long the boot map may sit black before the fade is lifted anyway.
     *
     * A safety net, not a timing knob. If the module never calls InitializeChapters -- no menu, or a
     * boot map that does not have one -- the jump never happens and nothing else would ever lower
     * the fade. Better a late reveal than a screen that stays black forever.
     */
    UPROPERTY(BlueprintReadWrite, Category = "Chapter System|Transition")
    float ChapterJumpFadeTimeoutSeconds = 8.0f;

private:
    /**
     * Holds the boot map black when a chapter jump is coming, and fades in once it has landed.
     *
     * Hooked to map load rather than driven from Blueprint because the boot map has to be black
     * before its first frame is drawn, and the earliest a widget could ask is several frames later.
     * By then the player has already seen wherever the module happens to boot -- which, for a module
     * whose GameDefaultMap is a chapter, means watching the wrong chapter load in full.
     */
    void HandlePostLoadMap(UWorld* LoadedWorld);
    void HoldBlack(UWorld* World);
    void FadeIn(UWorld* World, float Duration);

    /**
     * Raises the fade for a jump that is about to happen, with a timer that lifts it again if the jump
     * never does. Shared by the platform chapter jump and by leaving a hidden boot chapter: both black
     * the screen on the assumption of a travel that has not been committed to yet.
     */
    void HoldBlackWithTimeout(UWorld* World);

    /** Fades the held black back out and forgets it was held. */
    void LiftHeldFade(UWorld* World);

    /**
     * Decides explanation mode once, at startup, and applies it to UExplanationFlowLibrary.
     *
     * The platform decides when AZUREAL_IS_EXPLAINED is set. Otherwise the GameInstance's
     * "Explanation Mode" bool is the default (a PIE run or a desktop launch). Whichever wins is written
     * back into that bool, so every reader agrees with the value in force.
     *
     * Done here, before any world exists, because the library's flag is a module-scope static that
     * survives PIE stop, PIE start, OpenLevel and GameInstance teardown. Left to the menu, anything that
     * read it earlier in a new session would read whatever the previous session left behind.
     */
    void LatchExplanationFlag();

    /** The visible chapter nearest Index, later ones first. INDEX_NONE when no chapter is visible. */
    int32 FindNearestVisibleChapter(int32 Index) const;

    FDelegateHandle PostLoadMapHandle;

    /** True between raising the fade over the boot map and lowering it in the destination. */
    bool bHoldingChapterJumpFade = false;

    /**
     * The world the fade was raised in. A map load only counts as arriving when it is a different world:
     * a menu built during BeginPlay raises the fade before its own map's load broadcast comes through.
     */
    TWeakObjectPtr<UWorld> FadeRaisedInWorld;

    /** Lifts a held fade whose jump never happened. Cleared whenever the fade is lifted. */
    FTimerHandle ChapterJumpFadeTimer;

    /** Set when a jump resolves; cleared when the player passes the start screen. */
    bool bOpenedByChapterJump = false;

    /** The hidden-boot-chapter question is asked once per run, on the map the module actually booted into. */
    bool bCheckedBootChapter = false;

private:
    UPROPERTY()
    UChapterBundle* ActiveBundle;

    int32 CurrentIndex = -1;
    TSet<int32> CompletedChapterIndexes;
    TMap<int32, int32> ChapterStepProgress;
    bool bHasPassedStartScreen = false;

    /** 1-based authored step number of the page that last started the Game Manager. 0 before the first. */
    int32 CurrentAuthoredStepNumber = 0;
};