

#include "MainMenuPage.h"
#include "ChapterSubsystem.h"
#include "MyBlueprintFunctionLibrary.h" // Language resolver
#include "Components/ScrollBox.h"
#include "Components/ScrollBoxSlot.h"
#include "Components/VerticalBoxSlot.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/GameInstance.h"

// --- BINDINGS ---

void UMainMenuPage::NativeConstruct()
{
    Super::NativeConstruct();

    // --- Seed English fallback templates if left blank (Malay/Tamil fall back to English) ---
    if (Text_ModuleCompletion.English.IsEmpty())
        Text_ModuleCompletion.English = TEXT("You have completed {0}/{1} chapters.\n\nAre you sure you want to restart the\nentire module?");
    if (Text_CurrentChapterRestart.English.IsEmpty())
        Text_CurrentChapterRestart.English = TEXT("You are currently at Chapter {0}.\n\nAre you sure you want to restart this\nchapter?");
    if (Text_SelectedChapterRestart.English.IsEmpty())
        Text_SelectedChapterRestart.English = TEXT("You have completed Chapter {0}.\n\nAre you sure you want to restart this chapter?");

    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        Subsystem->OnChapterDataUpdated.RemoveDynamic(this, &UMainMenuPage::RefreshChapterRows);
        Subsystem->OnChapterDataUpdated.AddDynamic(this, &UMainMenuPage::RefreshChapterRows);
    }

    if (Btn_ConfirmRestart)
    {
        Btn_ConfirmRestart->OnClicked.RemoveDynamic(this, &UMainMenuPage::OnRestartConfirmed);
        Btn_ConfirmRestart->OnClicked.AddDynamic(this, &UMainMenuPage::OnRestartConfirmed);
    }
    if (Btn_CancelRestart)
    {
        Btn_CancelRestart->OnClicked.RemoveDynamic(this, &UMainMenuPage::OnRestartCancelled);
        Btn_CancelRestart->OnClicked.AddDynamic(this, &UMainMenuPage::OnRestartCancelled);
    }

    if (RestartChapterCompletedPanel)
    {
        RestartChapterCompletedPanel->SetVisibility(ESlateVisibility::Collapsed);
    }
}

void UMainMenuPage::NativeDestruct()
{
    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        Subsystem->OnChapterDataUpdated.RemoveDynamic(this, &UMainMenuPage::RefreshChapterRows);
    }
    Super::NativeDestruct();
}

void UMainMenuPage::OnStartButtonClicked()
{
    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        Subsystem->SetHasPassedStartScreen(true);
    }
    UpdateVisibilityByChapter();
}

// --- MODULE RESET LOGIC ---

void UMainMenuPage::RestartWholeModule()
{
    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        Subsystem->ResetAllModuleProgress();

        // Auto-Select Chapter 1 (Index 0)
        FName HomeLevelName = Subsystem->SelectChapter(0);
        if (HomeLevelName != NAME_None)
        {
            UGameplayStatics::OpenLevel(this, HomeLevelName);
        }
        else
        {
            // Fallback
            UGameplayStatics::OpenLevel(this, FName(*GetWorld()->GetName()));
        }
    }
}

// --- LOAD CURRENT CHAPTER LOGIC ---

void UMainMenuPage::LoadCurrentChapter()
{
    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        int32 CurrentIndex = Subsystem->GetCurrentChapterIndex();
        Subsystem->ResetChapterProgress(CurrentIndex);
        Subsystem->SetHasPassedStartScreen(true);

        FName LevelToLoad = Subsystem->SelectChapter(CurrentIndex);
        if (LevelToLoad != NAME_None)
        {
            UGameplayStatics::OpenLevel(this, LevelToLoad);
        }
    }
}

// --- HELPERS (TEXT & BOOLEAN) ---

FText UMainMenuPage::GetModuleCompletionText() const
{
    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        int32 Completed = 0;
        int32 Total = 0;
        Subsystem->GetModuleCompletionStatus(Completed, Total);

        FText TranslatedBaseText = UMyBlueprintFunctionLibrary::GetActiveLanguageText(const_cast<UMainMenuPage*>(this), Text_ModuleCompletion);
        return FText::Format(TranslatedBaseText, Completed, Total);
    }
    // Fallback if subsystem is unavailable
    FText FallbackText = UMyBlueprintFunctionLibrary::GetActiveLanguageText(const_cast<UMainMenuPage*>(this), Text_ModuleCompletion);
    return FText::Format(FallbackText, 0, 0);
}

FText UMainMenuPage::GetCurrentChapterRestartText() const
{
    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        int32 CurrentNum = Subsystem->GetCurrentChapterIndex() + 1;
        FText TranslatedBaseText = UMyBlueprintFunctionLibrary::GetActiveLanguageText(const_cast<UMainMenuPage*>(this), Text_CurrentChapterRestart);
        return FText::Format(TranslatedBaseText, CurrentNum);
    }
    // Fallback if subsystem is unavailable
    FText FallbackText = UMyBlueprintFunctionLibrary::GetActiveLanguageText(const_cast<UMainMenuPage*>(this), Text_CurrentChapterRestart);
    return FText::Format(FallbackText, 0);
}

bool UMainMenuPage::IsAllChaptersCompleted() const
{
    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        return Subsystem->IsModuleFullyComplete();
    }
    return false;
}

// --- STATE & VISIBILITY ---

bool UMainMenuPage::IsStartScreenActive() const
{
    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        // Arriving by a platform jump means a chapter is already current without the player ever
        // having seen the menu, so the index below cannot be read as "they have started". Shown once;
        // passing the start screen clears the flag and the ordinary rule resumes.
        if (Subsystem->WasOpenedByChapterJump() && !Subsystem->HasPassedStartScreen()) return true;

        if (Subsystem->GetCurrentChapterIndex() > 0) return false;
        return !Subsystem->HasPassedStartScreen();
    }
    return true;
}

void UMainMenuPage::UpdateVisibilityByChapter()
{
    if (!StartPanel || !StepPageContainer) return;

    if (IsStartScreenActive())
    {
        StartPanel->SetVisibility(ESlateVisibility::Visible);
        StepPageContainer->SetVisibility(ESlateVisibility::Collapsed);
        if (RestartChapterCompletedPanel) RestartChapterCompletedPanel->SetVisibility(ESlateVisibility::Collapsed);
    }
    else
    {
        StartPanel->SetVisibility(ESlateVisibility::Collapsed);
        StepPageContainer->SetVisibility(ESlateVisibility::Visible);
        if (RestartChapterCompletedPanel) RestartChapterCompletedPanel->SetVisibility(ESlateVisibility::Collapsed);
        RefreshChapterRows();
    }
}

void UMainMenuPage::RefreshChapterRows()
{
    if (SavedDataAsset) GenerateChapterList(SavedDataAsset);
}

void UMainMenuPage::GenerateChapterList(UChapterBundle* DataAsset)
{
    SavedDataAsset = DataAsset;
    if (!DataAsset || !ChapterListContainer || !ChapterRowClass) return;

    ChapterListContainer->ClearChildren();
    SpawnedRows.Empty();

    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    CurrentProgressionIndex = (Subsystem) ? Subsystem->GetCurrentChapterIndex() : 0;

    for (int32 i = 0; i < DataAsset->AllChapters.Num(); i++)
    {
        UChapterSelectRow* NewRow = CreateWidget<UChapterSelectRow>(this, ChapterRowClass);
        if (NewRow)
        {
            bool bComplete = false;
            int32 CurStep = 0; int32 MaxStep = 0;
            if (Subsystem) {
                bComplete = Subsystem->IsChapterComplete(i);
                Subsystem->GetChapterProgress(i, CurStep, MaxStep);
            }
            bool bIsHere = (i == CurrentProgressionIndex);

            NewRow->SetupSpecificRow(i, DataAsset->AllChapters[i].ChapterTitle, CurStep, MaxStep, bComplete, bIsHere);
            NewRow->OnRowClicked.AddDynamic(this, &UMainMenuPage::HandleRowClicked);

            UPanelSlot* NewSlot = ChapterListContainer->AddChild(NewRow);
            if (UScrollBoxSlot* ScrollSlot = Cast<UScrollBoxSlot>(NewSlot)) {
                ScrollSlot->SetPadding(FMargin(0.f, 0.f, 0.f, 20.f));
                ScrollSlot->SetHorizontalAlignment(HAlign_Fill);
            }
            else if (UVerticalBoxSlot* VertSlot = Cast<UVerticalBoxSlot>(NewSlot)) {
                VertSlot->SetPadding(FMargin(0.f, 0.f, 0.f, 20.f));
                VertSlot->SetHorizontalAlignment(HAlign_Fill);
            }
            SpawnedRows.Add(NewRow);
        }
    }
}

void UMainMenuPage::HandleRowClicked(int32 Index)
{
    SelectedChapterIndex = Index;
    for (UChapterSelectRow* Row : SpawnedRows)
    {
        if (Row->AssignedIndex == CurrentProgressionIndex) continue;
        if (Row->AssignedIndex == SelectedChapterIndex) Row->SetRowState(EChapterState::Selected);
        else Row->SetRowState(EChapterState::Idle);
    }
}

void UMainMenuPage::ProceedToSelectedChapter()
{
    if (RestartChapterCompletedPanel && RestartChapterCompletedPanel->IsVisible())
    {
        OnRestartConfirmed();
        return;
    }
    if (SelectedChapterIndex == -1) return;

    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (!Subsystem) return;

    if (Subsystem->IsChapterComplete(SelectedChapterIndex))
    {
        if (SelectChapterPanel) SelectChapterPanel->SetVisibility(ESlateVisibility::Collapsed);
        if (RestartChapterCompletedPanel) RestartChapterCompletedPanel->SetVisibility(ESlateVisibility::Visible);
        if (RestartMessageText) {
            FText TranslatedBaseText = UMyBlueprintFunctionLibrary::GetActiveLanguageText(this, Text_SelectedChapterRestart);
            FText FormattedMsg = FText::Format(TranslatedBaseText, SelectedChapterIndex + 1);
            RestartMessageText->SetText(FormattedMsg);
        }
    }
    else
    {
        Subsystem->SetHasPassedStartScreen(true);
        FName LevelToLoad = Subsystem->SelectChapter(SelectedChapterIndex);
        if (LevelToLoad != NAME_None) UGameplayStatics::OpenLevel(this, LevelToLoad);
    }
}

void UMainMenuPage::OnRestartConfirmed()
{
    if (SelectedChapterIndex == -1) return;
    int32 IndexToLoad = SelectedChapterIndex;

    UGameInstance* GI = GetGameInstance();
    UChapterSubsystem* Subsystem = nullptr;
    if (GI)
    {
        Subsystem = GI->GetSubsystem<UChapterSubsystem>();
    }

    if (Subsystem)
    {
        Subsystem->ResetChapterProgress(IndexToLoad);
        Subsystem->SetHasPassedStartScreen(true);
        FName LevelToLoad = Subsystem->SelectChapter(IndexToLoad);
        if (LevelToLoad != NAME_None) UGameplayStatics::OpenLevel(this, LevelToLoad);
    }
}

void UMainMenuPage::OnRestartCancelled()
{
    if (RestartChapterCompletedPanel) RestartChapterCompletedPanel->SetVisibility(ESlateVisibility::Collapsed);
    if (SelectChapterPanel) SelectChapterPanel->SetVisibility(ESlateVisibility::Visible);
}

void UMainMenuPage::ResetSelection()
{
    SelectedChapterIndex = -1;
    for (UChapterSelectRow* Row : SpawnedRows)
    {
        if (Row->AssignedIndex == CurrentProgressionIndex) continue;
        Row->SetRowState(EChapterState::Idle);
    }
}

bool UMainMenuPage::IsProceedButtonEnabled() const
{
    return SelectedChapterIndex != -1;
}