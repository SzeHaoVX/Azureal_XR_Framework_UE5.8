

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
#include "UObject/UnrealType.h"

// --- CHAPTER JUMP TRANSITION ---

void UChapterSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // The platform's AZUREAL_IS_EXPLAINED is read by the session subsystem, so that has to be up first.
    // Initialisation order between GameInstance subsystems is otherwise unspecified.
    Collection.InitializeDependency<UAzr_SessionSubsystem>();

    // Before any world exists, therefore before any level's BeginPlay and before anything can read the
    // flag. That ordering is the point: the flag is a process-wide static that outlives the
    // GameInstance, so without this the first reader in a new PIE session reads whatever the previous
    // session left behind.
    LatchExplanationFlag();

    PostLoadMapHandle = FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UChapterSubsystem::HandlePostLoadMap);
}

void UChapterSubsystem::LatchExplanationFlag()
{
    UGameInstance* GI = GetGameInstance();
    UAzr_SessionSubsystem* Session = GI ? GI->GetSubsystem<UAzr_SessionSubsystem>() : nullptr;

    // Found by name rather than by cast: the bool lives on a Blueprint GameInstance
    // (/AzurealXR/Core/Azr_GameInstance) whose type no C++ module can see.
    FBoolProperty* Prop = GI ? FindFProperty<FBoolProperty>(GI->GetClass(), TEXT("Explanation Mode")) : nullptr;

    bool bEnabled = true;
    const TCHAR* Source = nullptr;

    if (Session && Session->HasExplainedSetting())
    {
        // The platform decides whenever it says anything.
        bEnabled = Session->IsExplainedMode();
        Source = TEXT("the platform (AZUREAL_IS_EXPLAINED)");
    }
    else if (Prop)
    {
        // No platform setting: a PIE run, a desktop launch, or a launcher that left it out. The project's
        // own default applies.
        bEnabled = Prop->GetPropertyValue_InContainer(GI);
        Source = TEXT("the GameInstance's Explanation Mode default");

        if (Session && Session->IsOnlineMode())
        {
            UE_LOG(LogTemp, Warning,
                TEXT("Azureal_CSM: online session without AZUREAL_IS_EXPLAINED. Using the GameInstance default (%s) and reporting that."),
                bEnabled ? TEXT("ON") : TEXT("OFF"));
        }
    }
    else
    {
        // A project with a GameInstance of its own. Its Event Init has already run by now (UGameInstance::Init
        // calls it before initialising subsystems), so whatever it set is left alone.
        bEnabled = UExplanationFlowLibrary::IsExplanationEnabled();
        if (Session) Session->SetExplainedModeInForce(bEnabled);

        UE_LOG(LogTemp, Log,
            TEXT("Azureal_CSM: no AZUREAL_IS_EXPLAINED and no 'Explanation Mode' bool on %s. Explanation mode left %s."),
            GI ? *GI->GetClass()->GetName() : TEXT("the GameInstance"),
            bEnabled ? TEXT("ON") : TEXT("OFF"));
        return;
    }

    UExplanationFlowLibrary::SetExplanationBoolean(bEnabled);

    // Written back so the GameInstance bool always holds the value actually in force. The shipped
    // WBP_MainMenu re-applies that bool on every Construct, and without this it would put the project
    // default back over the platform's choice the first time the menu opened.
    if (Prop) Prop->SetPropertyValue_InContainer(GI, bEnabled);

    // And told to the session subsystem, which files isExplained with the session. Without this a launch
    // that leaves the variable out would be filed as not explained while every explanation was shown.
    if (Session) Session->SetExplainedModeInForce(bEnabled);

    UE_LOG(LogTemp, Log, TEXT("Azureal_CSM: explanation mode %s, from %s."),
        bEnabled ? TEXT("ON") : TEXT("OFF"), Source);
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

    // A platform request still pending means this is a map being passed through on the way to it,
    // whatever it happens to be -- the boot map, a splash, a menu map. Black it out before its first
    // frame is drawn. Checked before the arrival below, which would otherwise lift a fade held from an
    // earlier map in the middle of the journey.
    if (Session && Session->HasStartChapter())
    {
        HoldBlackWithTimeout(LoadedWorld);
        return;
    }

    // Arrived somewhere with the fade still up. BOTH jumps end here -- the platform's chapter jump and
    // leaving a hidden boot chapter. The fade does not survive a map change (new world, new camera
    // manager), so the destination raises its own and lowers it.
    //
    // Only a DIFFERENT world counts as arriving. LoadMap runs BeginPlay before it broadcasts, so a menu
    // built during BeginPlay can raise the fade for its own jump before its own map's broadcast comes
    // through -- and treating that broadcast as the arrival would fade the map being left back in and
    // cut hard into the destination. PIE never shows this, because the PIE start world is not
    // broadcast at all.
    if (bHoldingChapterJumpFade && LoadedWorld != FadeRaisedInWorld.Get())
    {
        HoldBlack(LoadedWorld);
        LiftHeldFade(LoadedWorld);
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

void UChapterSubsystem::HoldBlackWithTimeout(UWorld* World)
{
    if (!World) return;

    HoldBlack(World);
    bHoldingChapterJumpFade = true;
    FadeRaisedInWorld = World;

    UGameInstance* GI = GetGameInstance();
    if (!GI || ChapterJumpFadeTimeoutSeconds <= 0.0f) return;

    // The safety net for a jump that never happens. It lives on the GameInstance's timer manager, which
    // is where a world's timers go whenever it has a GameInstance, so it survives the travel. One timer
    // per hold: re-raising restarts it, and lifting the fade clears it.
    TWeakObjectPtr<UChapterSubsystem> WeakThis(this);

    GI->GetTimerManager().SetTimer(ChapterJumpFadeTimer, FTimerDelegate::CreateLambda([WeakThis]()
    {
        if (!WeakThis.IsValid() || !WeakThis->bHoldingChapterJumpFade) return;

        UGameInstance* TimerGI = WeakThis->GetGameInstance();
        UE_LOG(LogTemp, Warning, TEXT("CSM: chapter jump never happened; lifting the transition fade."));
        WeakThis->LiftHeldFade(TimerGI ? TimerGI->GetWorld() : nullptr);
    }), ChapterJumpFadeTimeoutSeconds, false);
}

void UChapterSubsystem::LiftHeldFade(UWorld* World)
{
    if (World) FadeIn(World, ChapterJumpFadeInSeconds);
    bHoldingChapterJumpFade = false;
    FadeRaisedInWorld.Reset();

    if (UGameInstance* GI = GetGameInstance())
    {
        GI->GetTimerManager().ClearTimer(ChapterJumpFadeTimer);
    }
}

// --- SETUP & NAVIGATION ---

void UChapterSubsystem::InitializeChapters(UChapterBundle* MasterList, bool bAutoOpenRequestedChapter)
{
    if (MasterList)
    {
        ActiveBundle = MasterList;

        // The first VISIBLE chapter, which is not always index 0: with explanations off an
        // all-explanation opening chapter is gone, and starting on it would leave the subsystem
        // pointing at a chapter that is not in the menu's own list.
        if (CurrentIndex == -1)
        {
            const TArray<int32> Visible = GetVisibleChapterIndices();
            CurrentIndex = (Visible.Num() > 0) ? Visible[0] : 0;

            // Said once, on the first initialisation. A chapter is hidden only when explanations are off
            // and it holds nothing else, so this is a module made entirely of explanations being run
            // without them. There is nothing to play, and the empty menu is what that looks like.
            if (Visible.Num() == 0 && MasterList->AllChapters.Num() > 0)
            {
                UE_LOG(LogTemp, Error,
                    TEXT("CSM: every chapter in %s is explanation-only, and explanations are off. The menu has nothing to offer."),
                    *MasterList->GetName());
            }
        }
    }

    // Deliberately last: the jump needs the bundle that was just assigned, since resolving a chapter
    // number to a level is the whole job. Safe to call more than once -- the request is consumed, so
    // a menu that initialises again on a later visit finds nothing left to act on and stays put.
    if (bAutoOpenRequestedChapter)
    {
        UGameInstance* GI = GetGameInstance();
        const UAzr_SessionSubsystem* Session = GI ? GI->GetSubsystem<UAzr_SessionSubsystem>() : nullptr;
        const bool bHadRequest = Session && Session->HasStartChapter();

        if (!TryOpenRequestedChapter() && !TryLeaveHiddenBootChapter() && bHadRequest && bHoldingChapterJumpFade)
        {
            // The platform asked for a chapter that could not be opened, and the boot map was blacked
            // out for a jump that is now not coming. Lift it rather than leave the learner looking at
            // black until the timeout.
            LiftHeldFade(GI->GetWorld());
        }
    }
}

int32 UChapterSubsystem::FindNearestVisibleChapter(int32 Index) const
{
    if (!ActiveBundle) return INDEX_NONE;

    // Later chapters first: from a chapter that has nothing to play, carrying on is what the learner
    // would have done next anyway. Earlier ones only when nothing comes after it.
    for (int32 i = Index + 1; i < ActiveBundle->AllChapters.Num(); i++)
    {
        if (IsChapterVisible(i)) return i;
    }
    for (int32 i = FMath::Min(Index, ActiveBundle->AllChapters.Num()) - 1; i >= 0; i--)
    {
        if (IsChapterVisible(i)) return i;
    }
    return INDEX_NONE;
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
    int32 Index = Requested - 1;
    if (!ActiveBundle->AllChapters.IsValidIndex(Index))
    {
        UE_LOG(LogTemp, Warning, TEXT("CSM: chapter %d was requested but this module has %d. Opening the menu."),
            Requested, ActiveBundle->AllChapters.Num());
        return NAME_None;
    }

    // A chapter with nothing left to play once explanations are off is not opened as it is. The learner
    // would land straight on its result page, unable to complete it, while its Game Manager waited for a
    // step that never comes. The nearest chapter that does have something is opened instead.
    if (!IsChapterVisible(Index))
    {
        const int32 Nearest = FindNearestVisibleChapter(Index);
        if (Nearest != INDEX_NONE)
        {
            UE_LOG(LogTemp, Warning,
                TEXT("CSM: chapter %d was requested but has nothing left to play with explanations off. Opening chapter %d instead."),
                Requested, Nearest + 1);
            Index = Nearest;
        }
        else
        {
            UE_LOG(LogTemp, Warning,
                TEXT("CSM: chapter %d was requested but has nothing left to play with explanations off, and neither has any other chapter. Opening it anyway."),
                Requested);
        }
    }

    // SelectChapter does the rest: it sets CurrentIndex and resolves the level, and returns NAME_None
    // of its own accord if that chapter has no level assigned.
    const FName LevelName = SelectChapter(Index);
    if (LevelName.IsNone())
    {
        UE_LOG(LogTemp, Warning, TEXT("CSM: chapter %d has no ChapterLevel assigned. Opening the menu."), Index + 1);
        return NAME_None;
    }

    // Recorded before the travel, and read on the other side: the player is about to land inside a
    // chapter without having chosen it, so the menu needs to know not to treat a current chapter as
    // proof they already went through it.
    bOpenedByChapterJump = true;

    // The boot map is being left for a chapter picked on purpose, so neither it nor the destination is
    // to be questioned by TryLeaveHiddenBootChapter -- however the module drives the jump.
    bCheckedBootChapter = true;

    UE_LOG(LogTemp, Log, TEXT("CSM: opening chapter %d ('%s') at the platform's request."), Index + 1, *LevelName.ToString());
    return LevelName;
}

bool UChapterSubsystem::TryOpenRequestedChapter()
{
    const FName LevelName = ConsumeRequestedChapter();
    if (LevelName.IsNone()) return false;

    UGameInstance* GI = GetGameInstance();
    if (!GI) return false;

    // Black before travelling, the same as leaving a hidden boot chapter. HandlePostLoadMap only holds
    // the fade while the request is still pending, and a menu built during BeginPlay takes it before
    // its own map's broadcast, so without this that jump would cut straight in with no fade at all.
    HoldBlackWithTimeout(GI->GetWorld());

    // The GameInstance serves as the world context: it resolves to whichever world is current, which
    // is the right one whether this is called from the boot map or from a menu inside a chapter.
    UGameplayStatics::OpenLevel(GI, LevelName);
    return true;
}

bool UChapterSubsystem::TryLeaveHiddenBootChapter()
{
    if (bCheckedBootChapter || !ActiveBundle) return false;

    UGameInstance* GI = GetGameInstance();
    UWorld* World = GI ? GI->GetWorld() : nullptr;
    if (!World) return false;

    // Once per run, counted from the first call that had a bundle and a world to answer with. The menu
    // initialises again every time the player opens it, and this must not become something that keeps
    // moving them: the question is where the module BOOTED, not where they are now.
    bCheckedBootChapter = true;

    FString MapName = World->GetMapName();
    MapName.RemoveFromStart(World->StreamingLevelsPrefix);   // strips the UEDPIE_N_ that PIE prepends

    // Which chapter, if any, this map belongs to. A boot map that names no chapter -- which is what a
    // dedicated menu map is -- matches nothing here and is left exactly as it is. It has no chapter
    // content to be standing in, so there is nothing to correct.
    int32 BootIndex = INDEX_NONE;
    for (int32 i = 0; i < ActiveBundle->AllChapters.Num(); i++)
    {
        const TSoftObjectPtr<UWorld>& Level = ActiveBundle->AllChapters[i].ChapterLevel;
        if (!Level.IsNull() && Level.GetAssetName() == MapName)
        {
            BootIndex = i;
            break;
        }
    }

    if (BootIndex == INDEX_NONE) return false;
    if (IsChapterVisible(BootIndex)) return false;   // nothing wrong with being here

    const int32 Target = FindNearestVisibleChapter(BootIndex);
    const TSoftObjectPtr<UWorld> TargetLevel = (Target != INDEX_NONE) ? ActiveBundle->AllChapters[Target].ChapterLevel : TSoftObjectPtr<UWorld>();

    if (TargetLevel.IsNull())
    {
        // Nowhere to go: no chapter is visible (InitializeChapters has already said so), or the nearest
        // one has no level. Staying put means pointing the subsystem at the chapter the player is
        // actually standing in. Anything else would load another chapter's steps into this map, whose
        // Game Manager is not here to run them.
        if (Target != INDEX_NONE)
        {
            UE_LOG(LogTemp, Warning,
                TEXT("CSM: chapter %d has no ChapterLevel assigned, so there is nowhere to go from hidden boot chapter %d."),
                Target + 1, BootIndex + 1);
        }
        CurrentIndex = BootIndex;
        return false;
    }

    const FString TargetMap = TargetLevel.GetAssetName();
    SelectChapter(Target);

    // Chosen on the learner's behalf, exactly like a platform jump, so the menu shows its start screen
    // once instead of reading a current chapter past the first as proof they have been through it.
    bOpenedByChapterJump = true;

    // Two chapters sharing one map: the right map is already loaded, so pointing the subsystem at the
    // visible chapter is the whole correction. Reloading it would only flash.
    if (TargetMap == MapName) return false;

    UE_LOG(LogTemp, Log,
        TEXT("CSM: booted into chapter %d, which the explanation filter hides. Opening chapter %d ('%s') instead."),
        BootIndex + 1, Target + 1, *TargetMap);

    // Black first, travel second. The boot map is already on screen by the time any of this runs, so
    // the fade is covering the handful of frames between noticing and leaving rather than preventing
    // them -- but in a headset those frames are the difference between a transition and a glitch.
    HoldBlackWithTimeout(World);
    UGameplayStatics::OpenLevel(GI, FName(*TargetMap));
    return true;
}

FName UChapterSubsystem::SelectChapter(int32 Index)
{
    if (ActiveBundle && ActiveBundle->AllChapters.IsValidIndex(Index))
    {
        CurrentIndex = Index;

        // Belongs to the chapter being left. Its Game Manager is gone once the level changes, and the
        // step page publishes a fresh number before it starts the next one.
        CurrentAuthoredStepNumber = 0;

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
        // A hidden chapter is never "next". Advancing into one would land the player on a chapter with
        // no steps left to run and no way on but back to the menu.
        if (!IsChapterDefVisible(ActiveBundle->AllChapters[i])) continue;

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

    // Only chapters the learner can reach can be required of them. Counting the hidden ones would hold
    // the module permanently one chapter short of complete, with nothing on screen left to play.
    int32 Visible = 0;
    int32 Done = 0;
    for (int32 i = 0; i < ActiveBundle->AllChapters.Num(); i++)
    {
        if (!IsChapterDefVisible(ActiveBundle->AllChapters[i])) continue;

        Visible++;
        if (CompletedChapterIndexes.Contains(i)) Done++;
    }

    return (Visible > 0 && Done >= Visible);
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

// --- CHAPTER VISIBILITY (EXPLANATION FILTERING) ---

bool UChapterSubsystem::IsChapterDefVisible(const FChapterDef& Chapter)
{
    // Hidden only when the explanation filter is what emptied it. With explanations on nothing is
    // hidden, which is exactly how the menu behaved before chapters could be. A chapter with no
    // curriculum, or with one that is empty either way, stays in the list too: that is an authoring
    // mistake, and hiding it would hide the mistake with it.
    if (!Chapter.StepData || UExplanationFlowLibrary::IsExplanationEnabled()) return true;

    return Chapter.StepData->CountFilteredSteps(false) > 0 || Chapter.StepData->CountFilteredSteps(true) == 0;
}

bool UChapterSubsystem::IsChapterVisible(int32 Index) const
{
    if (!ActiveBundle || !ActiveBundle->AllChapters.IsValidIndex(Index)) return false;

    return IsChapterDefVisible(ActiveBundle->AllChapters[Index]);
}

int32 UChapterSubsystem::GetChapterDisplayNumber(int32 Index) const
{
    if (!ActiveBundle || !ActiveBundle->AllChapters.IsValidIndex(Index)) return 0;

    // Counting up to and including Index would hand a hidden chapter the number of the visible one
    // before it, which is a real place in the list for a row that has none. Say 0 instead.
    if (!IsChapterDefVisible(ActiveBundle->AllChapters[Index])) return 0;

    int32 Number = 0;
    for (int32 i = 0; i <= Index; i++)
    {
        if (IsChapterDefVisible(ActiveBundle->AllChapters[i])) Number++;
    }
    return Number;
}

TArray<int32> UChapterSubsystem::GetVisibleChapterIndices() const
{
    TArray<int32> Result;
    if (!ActiveBundle) return Result;

    for (int32 i = 0; i < ActiveBundle->AllChapters.Num(); i++)
    {
        if (IsChapterDefVisible(ActiveBundle->AllChapters[i])) Result.Add(i);
    }
    return Result;
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

int32 UChapterSubsystem::GetAuthoredStepNumber(int32 FilteredStepIndex) const
{
    UTrainingCurriculum* Data = GetCurrentStepData();
    if (!Data) return 0;

    // The same call the page's own list was built from (WBP_MainMenu builds it with GetFilteredSteps on
    // this chapter's curriculum), so the index lands in the same list. One small array per page turn.
    const TArray<FRuntimeStep> Steps = Data->GetFilteredSteps(UExplanationFlowLibrary::IsExplanationEnabled());

    return Steps.IsValidIndex(FilteredStepIndex) ? Steps[FilteredStepIndex].AuthoredNumber : 0;
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

int32 UChapterSubsystem::GetCurrentChapterDisplayNumber() const
{
    const int32 SafeIndex = (CurrentIndex == -1) ? 0 : CurrentIndex;

    // A hidden current chapter has no place in the list. It is only ever current when nothing visible
    // could be opened instead, and then its authored number is the least misleading thing to show.
    const int32 Display = GetChapterDisplayNumber(SafeIndex);
    return (Display > 0) ? Display : SafeIndex + 1;
}

int32 UChapterSubsystem::GetTotalChapterCount() const
{
    return ActiveBundle ? ActiveBundle->AllChapters.Num() : 0;
}

int32 UChapterSubsystem::GetVisibleChapterCount() const
{
    return GetVisibleChapterIndices().Num();
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
    OutCompletedCount = 0;
    OutTotalCount = 0;
    if (!ActiveBundle) return;

    // Both halves counted over the visible chapters. Taking CompletedChapterIndexes.Num() whole would
    // include chapters that were played and have since been filtered out, and read "3 of 2".
    for (int32 i = 0; i < ActiveBundle->AllChapters.Num(); i++)
    {
        if (!IsChapterDefVisible(ActiveBundle->AllChapters[i])) continue;

        OutTotalCount++;
        if (CompletedChapterIndexes.Contains(i)) OutCompletedCount++;
    }
}