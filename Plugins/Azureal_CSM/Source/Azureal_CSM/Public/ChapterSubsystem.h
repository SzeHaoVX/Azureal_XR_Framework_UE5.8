

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
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

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetCurrentChapterIndex() const;

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

    /** Returns TRUE if every single chapter in the bundle has been completed. */
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    bool IsModuleFullyComplete() const;

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    void GetChapterProgress(int32 Index, int32& OutCurrent, int32& OutMax) const;

    // --- DATA HELPERS ---
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    UTrainingCurriculum* GetCurrentStepData() const;

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    UTrainingCurriculum* GetStepDataForIndex(int32 Index) const;

    // --- NEW: MANAGER HELPER ---
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    TSubclassOf<AActor> GetCurrentChapterGameManagerClass() const;

    // --- INFO HELPERS ---
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    void GetCurrentChapterInfo(int32& OutChapterNumber, FAzr_MultiLangText& OutChapterTitle) const;

    // --- STATISTICS ---
    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetTotalChapterCount() const;

    UFUNCTION(BlueprintPure, Category = "Chapter System")
    int32 GetTotalMasterStepCount() const;

    /** Returns current progress for the whole module (e.g. 3 out of 5 chapters completed). */
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

    FDelegateHandle PostLoadMapHandle;

    /** True between raising the fade over the boot map and lowering it in the destination. */
    bool bHoldingChapterJumpFade = false;

    /** Set when a jump resolves; cleared when the player passes the start screen. */
    bool bOpenedByChapterJump = false;

private:
    UPROPERTY()
    UChapterBundle* ActiveBundle;

    int32 CurrentIndex = -1;
    TSet<int32> CompletedChapterIndexes;
    TMap<int32, int32> ChapterStepProgress;
    bool bHasPassedStartScreen = false;
};