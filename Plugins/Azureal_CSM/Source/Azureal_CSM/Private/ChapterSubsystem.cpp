

#include "ChapterSubsystem.h"
#include "ExplanationFlowLibrary.h"
#include "TrainingCurriculum.h"
#include "Azr_SessionSubsystem.h"
#include "Engine/GameInstance.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/PlayerCameraManager.h"
#include "Engine/World.h"
#include "TimerManager.h"
#include "UObject/UObjectGlobals.h"

// --- CHAPTER JUMP TRANSITION ---

void UChapterSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    PostLoadMapHandle = FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UChapterSubsystem::HandlePostLoadMap);
}

void UChapterSubsystem::Deinitialize()
{
    FCoreUObjectDelegates::PostLoadMapWithWorld.Remove(PostLoadMapHandle);
    PostLoadMapHandle.Reset();

    Super::Deinitialize();
}

void UChapterSubsystem::HandlePostLoadMap(UWorld* LoadedWorld)
{
    if (!LoadedWorld) return;

    UGameInstance* GI = GetGameInstance();
    UAzr_SessionSubsystem* Session = GI ? GI->GetSubsystem<UAzr_SessionSubsystem>() : nullptr;
    if (!Session || !Session->WasStartChapterRequested()) return;   // ordinary launch; nothing to hide

    // Still pending means this is the map being passed through, whatever it happens to be. Black it
    // out before its first frame is drawn.
    if (Session->HasStartChapter())
    {
        HoldBlack(LoadedWorld);
        bHoldingChapterJumpFade = true;

        // Lives in the world that is about to be left behind, which is exactly right: if the jump
        // happens the timer goes with the world and never fires, and if it does not, this is the
        // only thing left that can lift the fade.
        if (ChapterJumpFadeTimeoutSeconds > 0.0f)
        {
            FTimerHandle Unused;
            TWeakObjectPtr<UChapterSubsystem> WeakThis(this);
            TWeakObjectPtr<UWorld> WeakWorld(LoadedWorld);

            LoadedWorld->GetTimerManager().SetTimer(Unused, FTimerDelegate::CreateLambda([WeakThis, WeakWorld]()
            {
                if (!WeakThis.IsValid() || !WeakWorld.IsValid()) return;
                if (!WeakThis->bHoldingChapterJumpFade) return;

                UE_LOG(LogTemp, Warning, TEXT("CSM: chapter jump never happened; lifting the transition fade."));
                WeakThis->FadeIn(WeakWorld.Get(), WeakThis->ChapterJumpFadeInSeconds);
                WeakThis->bHoldingChapterJumpFade = false;
            }), ChapterJumpFadeTimeoutSeconds, false);
        }
        return;
    }

    // Taken and travelled: this is the chapter that was asked for. The fade does not survive a map
    // change -- new world, new camera manager -- so the destination raises its own and lowers it.
    if (bHoldingChapterJumpFade)
    {
        HoldBlack(LoadedWorld);
        FadeIn(LoadedWorld, ChapterJumpFadeInSeconds);
        bHoldingChapterJumpFade = false;
    }
}

void UChapterSubsystem::HoldBlack(UWorld* World)
{
    if (APlayerCameraManager* Cam = UGameplayStatics::GetPlayerCameraManager(World, 0))
    {
        // 1 to 1 rather than a zero-length 0 to 1: a same-value fade is the unambiguous way to say
        // "black, and stay there", with no zero-duration edge case to rely on.
        Cam->StartCameraFade(1.0f, 1.0f, 0.01f, FLinearColor::Black, true, true);
    }
}

void UChapterSubsystem::FadeIn(UWorld* World, float Duration)
{
    if (APlayerCameraManager* Cam = UGameplayStatics::GetPlayerCameraManager(World, 0))
    {
        Cam->StartCameraFade(1.0f, 0.0f, FMath::Max(0.01f, Duration), FLinearColor::Black, true, false);
    }
}

// --- SETUP & NAVIGATION ---

void UChapterSubsystem::InitializeChapters(UChapterBundle* MasterList, bool bAutoOpenRequestedChapter)
{
    if (MasterList)
    {
        ActiveBundle = MasterList;
        if (CurrentIndex == -1) CurrentIndex = 0;
    }

    // Deliberately last: the jump needs the bundle that was just assigned, since resolving a chapter
    // number to a level is the whole job. Safe to call more than once -- the request is consumed, so
    // a menu that initialises again on a later visit finds nothing left to act on and stays put.
    if (bAutoOpenRequestedChapter)
    {
        TryOpenRequestedChapter();
    }
}

FName UChapterSubsystem::ConsumeRequestedChapter()
{
    UGameInstance* GI = GetGameInstance();
    UAzr_SessionSubsystem* Session = GI ? GI->GetSubsystem<UAzr_SessionSubsystem>() : nullptr;
    if (!Session) return NAME_None;

    // Consumed rather than read. Both subsystems outlive OpenLevel, so a request left in place would
    // be found again by the menu every time the player returned to it and send them straight back
    // into the chapter -- with no way out of the module but to quit.
    const int32 Requested = Session->ConsumeStartChapter();
    if (Requested <= 0) return NAME_None;

    if (!ActiveBundle)
    {
        UE_LOG(LogTemp, Warning, TEXT("CSM: chapter %d was requested before InitializeChapters ran. Opening the menu."), Requested);
        return NAME_None;
    }

    // 1-based from the platform, 0-based in here.
    const int32 Index = Requested - 1;
    if (!ActiveBundle->AllChapters.IsValidIndex(Index))
    {
        UE_LOG(LogTemp, Warning, TEXT("CSM: chapter %d was requested but this module has %d. Opening the menu."),
            Requested, ActiveBundle->AllChapters.Num());
        return NAME_None;
    }

    // SelectChapter does the rest: it sets CurrentIndex and resolves the level, and returns NAME_None
    // of its own accord if that chapter has no level assigned.
    const FName LevelName = SelectChapter(Index);
    if (LevelName.IsNone())
    {
        UE_LOG(LogTemp, Warning, TEXT("CSM: chapter %d has no ChapterLevel assigned. Opening the menu."), Requested);
        return NAME_None;
    }

    // Recorded before the travel, and read on the other side: the player is about to land inside a
    // chapter without having chosen it, so the menu needs to know not to treat a current chapter as
    // proof they already went through it.
    bOpenedByChapterJump = true;

    UE_LOG(LogTemp, Log, TEXT("CSM: opening chapter %d ('%s') at the platform's request."), Requested, *LevelName.ToString());
    return LevelName;
}

bool UChapterSubsystem::TryOpenRequestedChapter()
{
    const FName LevelName = ConsumeRequestedChapter();
    if (LevelName.IsNone()) return false;

    UGameInstance* GI = GetGameInstance();
    if (!GI) return false;

    // The GameInstance serves as the world context: it resolves to whichever world is current, which
    // is the right one whether this is called from the boot map or from a menu inside a chapter.
    UGameplayStatics::OpenLevel(GI, LevelName);
    return true;
}

FName UChapterSubsystem::SelectChapter(int32 Index)
{
    if (ActiveBundle && ActiveBundle->AllChapters.IsValidIndex(Index))
    {
        CurrentIndex = Index;
        TSoftObjectPtr<UWorld> LevelPtr = ActiveBundle->AllChapters[Index].ChapterLevel;
        if (LevelPtr.IsNull()) return NAME_None;
        return FName(*LevelPtr.GetAssetName());
    }
    return NAME_None;
}

int32 UChapterSubsystem::GetCurrentChapterIndex() const
{
    return (CurrentIndex == -1) ? 0 : CurrentIndex;
}

int32 UChapterSubsystem::GetNextUnplayedChapterIndex()
{
    if (!ActiveBundle) return -1;
    for (int32 i = 0; i < ActiveBundle->AllChapters.Num(); i++)
    {
        if (!CompletedChapterIndexes.Contains(i)) return i;
    }
    return -1;
}

// --- COMPLETION & PROGRESS LOGIC ---

void UChapterSubsystem::MarkCurrentChapterComplete()
{
    int32 IndexToMark = (CurrentIndex == -1) ? 0 : CurrentIndex;
    CompletedChapterIndexes.Add(IndexToMark);

    if (OnChapterDataUpdated.IsBound()) OnChapterDataUpdated.Broadcast();
}

void UChapterSubsystem::UpdateChapterProgress(int32 StepIndex)
{
    int32 SafeIndex = (CurrentIndex == -1) ? 0 : CurrentIndex;
    bool bChanged = false;

    if (ChapterStepProgress.Contains(SafeIndex))
    {
        if (StepIndex > ChapterStepProgress[SafeIndex])
        {
            ChapterStepProgress[SafeIndex] = StepIndex;
            bChanged = true;
        }
    }
    else
    {
        ChapterStepProgress.Add(SafeIndex, StepIndex);
        bChanged = true;
    }

    if (bChanged && OnChapterDataUpdated.IsBound())
    {
        OnChapterDataUpdated.Broadcast();
    }
}

void UChapterSubsystem::ResetChapterProgress(int32 Index)
{
    bool bChanged = false;

    // 1. Remove from Completed List
    if (CompletedChapterIndexes.Contains(Index))
    {
        CompletedChapterIndexes.Remove(Index);
        bChanged = true;
    }

    // 2. Remove from Progress Map
    if (ChapterStepProgress.Contains(Index))
    {
        ChapterStepProgress.Remove(Index);
        bChanged = true;
    }

    if (bChanged && OnChapterDataUpdated.IsBound())
    {
        OnChapterDataUpdated.Broadcast();
    }
}

void UChapterSubsystem::ResetAllModuleProgress()
{
    CompletedChapterIndexes.Empty();
    ChapterStepProgress.Empty();
    bHasPassedStartScreen = false;

    if (OnChapterDataUpdated.IsBound())
    {
        OnChapterDataUpdated.Broadcast();
    }
}

bool UChapterSubsystem::IsChapterComplete(int32 Index) const
{
    return CompletedChapterIndexes.Contains(Index);
}

bool UChapterSubsystem::IsModuleFullyComplete() const
{
    if (!ActiveBundle) return false;
    int32 Total = ActiveBundle->AllChapters.Num();
    return (Total > 0 && CompletedChapterIndexes.Num() >= Total);
}

void UChapterSubsystem::GetChapterProgress(int32 Index, int32& OutCurrent, int32& OutMax) const
{
    OutCurrent = 0;
    OutMax = 0;
    if (!ActiveBundle || !ActiveBundle->AllChapters.IsValidIndex(Index)) return;

    if (ActiveBundle->AllChapters[Index].StepData)
    {
        bool bIncludeExplanations = UExplanationFlowLibrary::IsExplanationEnabled();
        OutMax = ActiveBundle->AllChapters[Index].StepData->CountFilteredSteps(bIncludeExplanations);
    }

    if (IsChapterComplete(Index)) OutCurrent = OutMax;
    else if (ChapterStepProgress.Contains(Index)) OutCurrent = ChapterStepProgress[Index];
}

// --- DATA HELPERS ---

UTrainingCurriculum* UChapterSubsystem::GetCurrentStepData() const
{
    int32 SafeIndex = (CurrentIndex == -1) ? 0 : CurrentIndex;
    if (ActiveBundle && ActiveBundle->AllChapters.IsValidIndex(SafeIndex))
        return ActiveBundle->AllChapters[SafeIndex].StepData;
    return nullptr;
}

UTrainingCurriculum* UChapterSubsystem::GetStepDataForIndex(int32 Index) const
{
    if (ActiveBundle && ActiveBundle->AllChapters.IsValidIndex(Index))
        return ActiveBundle->AllChapters[Index].StepData;
    return nullptr;
}

// --- NEW: MANAGER HELPER ---
TSubclassOf<AActor> UChapterSubsystem::GetCurrentChapterGameManagerClass() const
{
    int32 SafeIndex = (CurrentIndex == -1) ? 0 : CurrentIndex;
    if (ActiveBundle && ActiveBundle->AllChapters.IsValidIndex(SafeIndex))
    {
        return ActiveBundle->AllChapters[SafeIndex].ChapterGameManagerClass;
    }
    return nullptr;
}

// --- INFO & STATS ---

void UChapterSubsystem::GetCurrentChapterInfo(int32& OutChapterNumber, FAzr_MultiLangText& OutChapterTitle) const
{
    int32 SafeIndex = (CurrentIndex == -1) ? 0 : CurrentIndex;
    OutChapterNumber = SafeIndex + 1;

    FAzr_MultiLangText FallbackText;
    FallbackText.English = TEXT("Unknown Chapter");
    OutChapterTitle = FallbackText;

    // Pass the 3-box struct from the bundle (caller resolves it via GetActiveLanguageText)
    if (ActiveBundle && ActiveBundle->AllChapters.IsValidIndex(SafeIndex))
        OutChapterTitle = ActiveBundle->AllChapters[SafeIndex].ChapterTitle;
}

int32 UChapterSubsystem::GetTotalChapterCount() const
{
    return ActiveBundle ? ActiveBundle->AllChapters.Num() : 0;
}

int32 UChapterSubsystem::GetTotalMasterStepCount() const
{
    if (!ActiveBundle) return 0;
    int32 TotalSteps = 0;
    bool bIncludeExplanations = UExplanationFlowLibrary::IsExplanationEnabled();
    for (const FChapterDef& Chapter : ActiveBundle->AllChapters)
    {
        if (Chapter.StepData) TotalSteps += Chapter.StepData->CountFilteredSteps(bIncludeExplanations);
    }
    return TotalSteps;
}

void UChapterSubsystem::GetModuleCompletionStatus(int32& OutCompletedCount, int32& OutTotalCount) const
{
    OutCompletedCount = CompletedChapterIndexes.Num();
    OutTotalCount = (ActiveBundle != nullptr) ? ActiveBundle->AllChapters.Num() : 0;
}