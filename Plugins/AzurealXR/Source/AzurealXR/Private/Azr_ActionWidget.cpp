

#include "Azr_ActionWidget.h"
#include "Components/Button.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "GameFramework/PlayerController.h"
#include "Engine/GameInstance.h"
#include "Azr_SessionSubsystem.h"
#include "TimerManager.h"
#include "Engine/World.h" 

void UAzr_ActionWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (ActionButton)
	{
		ActionButton->OnClicked.AddDynamic(this, &UAzr_ActionWidget::OnActionButtonClicked);
		ActionButton->OnHovered.AddDynamic(this, &UAzr_ActionWidget::OnActionButtonHovered);
		ActionButton->OnUnhovered.AddDynamic(this, &UAzr_ActionWidget::OnActionButtonUnhovered);
	}

	// --- ASSIGN FALLBACK DEFAULTS IF LEFT BLANK IN INSPECTOR ---
	if (Text_Teleport.English.IsEmpty()) {
		Text_Teleport.English = TEXT("TELEPORT");
		Text_Teleport.Malay = TEXT("TELEPORT");
		Text_Teleport.Tamil = TEXT("டெலிபோர்ட்");
	}
	if (Text_StartAction.English.IsEmpty()) {
		Text_StartAction.English = TEXT("START ACTION");
		Text_StartAction.Malay = TEXT("MULAKAN TINDAKAN");
		Text_StartAction.Tamil = TEXT("செயலைத் தொடங்கு");
	}
	if (Text_Start.English.IsEmpty()) {
		Text_Start.English = TEXT("START");
		Text_Start.Malay = TEXT("MULA");
		Text_Start.Tamil = TEXT("தொடங்கு");
	}
	if (Text_Processing.English.IsEmpty()) {
		Text_Processing.English = TEXT("ACTION ON GOING...");
		Text_Processing.Malay = TEXT("TINDAKAN SEDANG BERJALAN...");
		Text_Processing.Tamil = TEXT("செயல்பாட்டில் உள்ளது...");
	}
	if (Text_Completed.English.IsEmpty()) {
		Text_Completed.English = TEXT("COMPLETED");
		Text_Completed.Malay = TEXT("SELESAI");
		Text_Completed.Tamil = TEXT("முடிந்தது");
	}

	CurrentState = EAzr_ActionWidgetState::Idle;
	bIsLeftHandHovering = false;
	bIsRightHandHovering = false;
}

void UAzr_ActionWidget::InitializeAction(EAzr_ActionMode InMode)
{
	CurrentMode = InMode;
	CurrentState = EAzr_ActionWidgetState::Idle;

	if (ActionProgressBar)
	{
		ActionProgressBar->SetPercent(0.0f);
	}

	UpdateButtonVisuals();
}

// --- UPDATED: Injects pre-translated text blocks directly into the UMG UI text field ---
void UAzr_ActionWidget::SetActionDescription(const FAzr_MultiLangText& NewText)
{
	if (ActionDescriptionBlock)
	{
		ActionDescriptionBlock->SetText(GetLocalizedText(NewText));
	}
}

void UAzr_ActionWidget::OnActionButtonClicked()
{
	// Provide a strong haptic "click" confirmation
	if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer()))
	{
		if (bIsLeftHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
		if (bIsRightHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);
	}

	if (CurrentState == EAzr_ActionWidgetState::Idle)
	{
		if (CurrentMode != EAzr_ActionMode::Teleport)
		{
			CurrentState = EAzr_ActionWidgetState::Processing;
			UpdateButtonVisuals();
		}

		// Tell the C++ Component to start the action
		OnExecuteClicked.Broadcast();
	}
	else if (CurrentState == EAzr_ActionWidgetState::Completed)
	{
		// Tell the C++ Component the player acknowledged the completion
		OnCompletedClicked.Broadcast();
	}
}

// --- NATIVE HOVER EVENTS (HAPTICS ONLY) ---

void UAzr_ActionWidget::OnActionButtonHovered()
{
	if (CurrentState == EAzr_ActionWidgetState::Processing) return;

	// Ramp up vibration when crossing into the button bounds
	if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer()))
	{
		if (bIsLeftHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
		if (bIsRightHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);
	}
}

void UAzr_ActionWidget::OnActionButtonUnhovered()
{
	// Drop back down to the "Widget Hover" vibration level
	if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer()))
	{
		if (bIsLeftHandHovering) PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Left);
		if (bIsRightHandHovering) PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Right);
	}
}

void UAzr_ActionWidget::SetHoveredByLeftHand(bool bIsHovering)
{
	bIsLeftHandHovering = bIsHovering;

	if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer()))
	{
		if (bIsHovering) {
			PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Left);
		}
		else {
			PC->SetHapticsByValue(0.0f, 0.0f, EControllerHand::Left);
		}
	}
}

void UAzr_ActionWidget::SetHoveredByRightHand(bool bIsHovering)
{
	bIsRightHandHovering = bIsHovering;

	if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer()))
	{
		if (bIsHovering) {
			PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Right);
		}
		else {
			PC->SetHapticsByValue(0.0f, 0.0f, EControllerHand::Right);
		}
	}
}

void UAzr_ActionWidget::SetActionProgress(float Progress)
{
	if (ActionProgressBar && CurrentState == EAzr_ActionWidgetState::Processing)
	{
		float ClampedProgress = FMath::Clamp(Progress, 0.0f, 1.0f);
		ActionProgressBar->SetPercent(ClampedProgress);
	}
}

void UAzr_ActionWidget::SetActionCompleted()
{
	if (CurrentState == EAzr_ActionWidgetState::Processing)
	{
		CurrentState = EAzr_ActionWidgetState::Completed;

		// Strong completion pulse
		if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer()))
		{
			PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
			PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);

			if (UWorld* World = GetWorld())
			{
				FTimerHandle HapticTimerHandle;
				World->GetTimerManager().SetTimer(HapticTimerHandle, FTimerDelegate::CreateWeakLambda(this, [this]() {
					if (APlayerController* InnerPC = Cast<APlayerController>(GetOwningPlayer())) {
						InnerPC->SetHapticsByValue(bIsLeftHandHovering ? 0.5f : 0.0f, bIsLeftHandHovering ? 0.5f : 0.0f, EControllerHand::Left);
						InnerPC->SetHapticsByValue(bIsRightHandHovering ? 0.5f : 0.0f, bIsRightHandHovering ? 0.5f : 0.0f, EControllerHand::Right);
					}
					}), 0.5f, false);
			}
		}

		if (ActionProgressBar)
		{
			ActionProgressBar->SetPercent(0.0f); // Instantly reset to empty
		}

		UpdateButtonVisuals();
	}
}

void UAzr_ActionWidget::UpdateButtonVisuals()
{
	if (!ActionButton || !ActionText) return;

	switch (CurrentState)
	{
	case EAzr_ActionWidgetState::Idle:
		ActionButton->SetIsEnabled(true);

		if (CurrentMode == EAzr_ActionMode::Teleport)
		{
			ActionText->SetText(GetLocalizedText(Text_Teleport));
		}
		else if (CurrentMode == EAzr_ActionMode::Animation)
		{
			ActionText->SetText(GetLocalizedText(Text_StartAction));
		}
		else
		{
			ActionText->SetText(GetLocalizedText(Text_Start));
		}
		break;

	case EAzr_ActionWidgetState::Processing:
		ActionButton->SetIsEnabled(false);
		ActionText->SetText(GetLocalizedText(Text_Processing));
		break;

	case EAzr_ActionWidgetState::Completed:
		// UNLOCK the button so the player can press it to dismiss the UI
		ActionButton->SetIsEnabled(true);
		ActionText->SetText(GetLocalizedText(Text_Completed));
		break;
	}
}

// --- TRANSLATION FILTER: resolves a 3-box struct to the session's active language ---
FText UAzr_ActionWidget::GetLocalizedText(const FAzr_MultiLangText& MultiLangText) const
{
	FString ActiveLanguage = TEXT("English");

	if (UGameInstance* GI = GetGameInstance())
	{
		if (UAzr_SessionSubsystem* SessionSubsystem = GI->GetSubsystem<UAzr_SessionSubsystem>())
		{
			ActiveLanguage = SessionSubsystem->GetSessionLanguage();
		}
	}

	if (ActiveLanguage.Equals(TEXT("Malay"), ESearchCase::IgnoreCase) || ActiveLanguage.Equals(TEXT("ms"), ESearchCase::IgnoreCase))
	{
		return FText::FromString(MultiLangText.Malay.IsEmpty() ? MultiLangText.English : MultiLangText.Malay);
	}
	else if (ActiveLanguage.Equals(TEXT("Tamil"), ESearchCase::IgnoreCase) || ActiveLanguage.Equals(TEXT("ta"), ESearchCase::IgnoreCase))
	{
		return FText::FromString(MultiLangText.Tamil.IsEmpty() ? MultiLangText.English : MultiLangText.Tamil);
	}

	return FText::FromString(MultiLangText.English);
}