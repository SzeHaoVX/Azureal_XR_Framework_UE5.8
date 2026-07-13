

#include "Azr_ExplainWidget.h"
#include "Components/Button.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "GameFramework/PlayerController.h"
#include "Engine/GameInstance.h"
#include "Azr_SessionSubsystem.h"
#include "TimerManager.h"
#include "Engine/World.h"

void UAzr_ExplainWidget::NativeConstruct() {
    Super::NativeConstruct();

    if (InteractionButton) {
        InteractionButton->OnClicked.AddDynamic(this, &UAzr_ExplainWidget::OnInteractionButtonClicked);
        InteractionButton->OnHovered.AddDynamic(this, &UAzr_ExplainWidget::OnInteractionButtonHovered);
        InteractionButton->OnUnhovered.AddDynamic(this, &UAzr_ExplainWidget::OnInteractionButtonUnhovered);
    }

    // --- ASSIGN FALLBACK DEFAULTS IF BLANK ---
    if (Text_PlayAudio.English.IsEmpty()) {
        Text_PlayAudio.English = TEXT("PLAY AUDIO");
        Text_PlayAudio.Malay = TEXT("MAIN AUDIO");
        Text_PlayAudio.Tamil = TEXT("ஆடியோவை இயக்கு");
    }
    if (Text_PlayingAudio.English.IsEmpty()) {
        Text_PlayingAudio.English = TEXT("PLAYING AUDIO...");
        Text_PlayingAudio.Malay = TEXT("AUDIO SEDANG DIMAINKAN...");
        Text_PlayingAudio.Tamil = TEXT("ஆடியோ இயக்கப்படுகிறது...");
    }
    if (Text_Confirm.English.IsEmpty()) {
        Text_Confirm.English = TEXT("CONFIRM");
        Text_Confirm.Malay = TEXT("SAHKAN");
        Text_Confirm.Tamil = TEXT("உறுதிப்படுத்து");
    }
    if (Text_Continue.English.IsEmpty()) {
        Text_Continue.English = TEXT("CONTINUE");
        Text_Continue.Malay = TEXT("TERUSKAN");
        Text_Continue.Tamil = TEXT("தொடரவும்");
    }

    CurrentState = EAzr_ExplainWidgetState::Idle;
    bIsLeftHandHovering = false;
    bIsRightHandHovering = false;
}

void UAzr_ExplainWidget::InitializeStep(EAzr_ExplainStepType InStepType) {
    CurrentStepType = InStepType;
    CurrentState = EAzr_ExplainWidgetState::Idle;

    if (AudioProgressBar) {
        AudioProgressBar->SetPercent(0.0f);
    }

    UpdateButtonVisuals();
}

// --- INJECTS THE DEV TEXT INTO THE UI (resolved to the active language) ---
void UAzr_ExplainWidget::SetExplainText(const FAzr_MultiLangText& NewText) {
    if (ExplainTextBlock) {
        ExplainTextBlock->SetText(GetLocalizedText(NewText));
    }
}

void UAzr_ExplainWidget::OnInteractionButtonClicked() {
    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsLeftHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
        if (bIsRightHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);
    }

    if (CurrentState == EAzr_ExplainWidgetState::Idle) {
        CurrentState = EAzr_ExplainWidgetState::Playing;
        UpdateButtonVisuals();
        OnPlayAudioClicked.Broadcast();
    }
    else if (CurrentState == EAzr_ExplainWidgetState::Completed) {
        OnProceedClicked.Broadcast();
    }
}

// --- NATIVE HOVER EVENTS (HAPTICS ONLY) ---
void UAzr_ExplainWidget::OnInteractionButtonHovered() {
    if (CurrentState == EAzr_ExplainWidgetState::Playing) return;

    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsLeftHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
        if (bIsRightHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);
    }
}

void UAzr_ExplainWidget::OnInteractionButtonUnhovered() {
    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsLeftHandHovering) PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Left);
        if (bIsRightHandHovering) PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Right);
    }
}

void UAzr_ExplainWidget::SetHoveredByLeftHand(bool bIsHovering) {
    bIsLeftHandHovering = bIsHovering;

    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsHovering) {
            PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Left);
        }
        else {
            PC->SetHapticsByValue(0.0f, 0.0f, EControllerHand::Left);
        }
    }
}

void UAzr_ExplainWidget::SetHoveredByRightHand(bool bIsHovering) {
    bIsRightHandHovering = bIsHovering;

    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsHovering) {
            PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Right);
        }
        else {
            PC->SetHapticsByValue(0.0f, 0.0f, EControllerHand::Right);
        }
    }
}

void UAzr_ExplainWidget::SetAudioProgress(float Progress) {
    if (AudioProgressBar && CurrentState == EAzr_ExplainWidgetState::Playing) {
        float ClampedProgress = FMath::Clamp(Progress, 0.0f, 1.0f);

        if (ClampedProgress >= 1.0f) {
            SetPlaybackCompleted();
        }
        else {
            AudioProgressBar->SetPercent(ClampedProgress);
        }
    }
}

void UAzr_ExplainWidget::SetPlaybackCompleted() {
    if (CurrentState == EAzr_ExplainWidgetState::Playing) {
        CurrentState = EAzr_ExplainWidgetState::Completed;

        if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
            PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
            PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);

            if (UWorld* World = GetWorld()) {
                FTimerHandle HapticTimerHandle;
                World->GetTimerManager().SetTimer(HapticTimerHandle, FTimerDelegate::CreateWeakLambda(this, [this]() {
                    if (APlayerController* InnerPC = Cast<APlayerController>(GetOwningPlayer())) {
                        InnerPC->SetHapticsByValue(bIsLeftHandHovering ? 0.5f : 0.0f, bIsLeftHandHovering ? 0.5f : 0.0f, EControllerHand::Left);
                        InnerPC->SetHapticsByValue(bIsRightHandHovering ? 0.5f : 0.0f, bIsRightHandHovering ? 0.5f : 0.0f, EControllerHand::Right);
                    }
                    }), 0.5f, false);
            }
        }

        if (AudioProgressBar) {
            AudioProgressBar->SetPercent(0.0f);
        }

        UpdateButtonVisuals();
    }
}

void UAzr_ExplainWidget::UpdateButtonVisuals() {
    if (!InteractionButton || !ActionText) return;

    switch (CurrentState) {
    case EAzr_ExplainWidgetState::Idle:
        InteractionButton->SetIsEnabled(true);
        ActionText->SetText(GetLocalizedText(Text_PlayAudio));
        break;

    case EAzr_ExplainWidgetState::Playing:
        InteractionButton->SetIsEnabled(false);
        ActionText->SetText(GetLocalizedText(Text_PlayingAudio));
        break;

    case EAzr_ExplainWidgetState::Completed:
        InteractionButton->SetIsEnabled(true);

        if (CurrentStepType == EAzr_ExplainStepType::Single ||
            CurrentStepType == EAzr_ExplainStepType::End) {
            ActionText->SetText(GetLocalizedText(Text_Confirm));
        }
        else {
            ActionText->SetText(GetLocalizedText(Text_Continue));
        }
        break;
    }
}

// --- VISUAL TRANSLATOR ROUTING ---
FText UAzr_ExplainWidget::GetLocalizedText(const FAzr_MultiLangText& MultiLangText) const {
    FString ActiveLanguage = TEXT("English");

    if (UGameInstance* GI = GetGameInstance()) {
        if (UAzr_SessionSubsystem* SessionSubsystem = GI->GetSubsystem<UAzr_SessionSubsystem>()) {
            ActiveLanguage = SessionSubsystem->GetSessionLanguage();
        }
    }

    if (ActiveLanguage.Equals(TEXT("Malay"), ESearchCase::IgnoreCase) || ActiveLanguage.Equals(TEXT("ms"), ESearchCase::IgnoreCase)) {
        return FText::FromString(MultiLangText.Malay.IsEmpty() ? MultiLangText.English : MultiLangText.Malay);
    }
    else if (ActiveLanguage.Equals(TEXT("Tamil"), ESearchCase::IgnoreCase) || ActiveLanguage.Equals(TEXT("ta"), ESearchCase::IgnoreCase)) {
        return FText::FromString(MultiLangText.Tamil.IsEmpty() ? MultiLangText.English : MultiLangText.Tamil);
    }

    return FText::FromString(MultiLangText.English);
}