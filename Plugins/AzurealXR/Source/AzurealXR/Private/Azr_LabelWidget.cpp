

#include "Azr_LabelWidget.h"
#include "Components/TextBlock.h"
#include "Engine/GameInstance.h"
#include "Azr_SessionSubsystem.h"

void UAzr_LabelWidget::SetLabelText(const FAzr_MultiLangText& InText)
{
	if (LabelTextBlock)
	{
		LabelTextBlock->SetText(GetLocalizedText(InText));
	}
}

FText UAzr_LabelWidget::GetLocalizedText(const FAzr_MultiLangText& MultiLangText) const
{
	FString ActiveLanguage = TEXT("English");

	if (UGameInstance* GI = GetGameInstance())
	{
		if (UAzr_SessionSubsystem* SessionSubsystem = GI->GetSubsystem<UAzr_SessionSubsystem>())
		{
			ActiveLanguage = SessionSubsystem->GetSessionLanguage();
		}
	}

	return FText::FromString(MultiLangText.Resolve(ActiveLanguage));
}