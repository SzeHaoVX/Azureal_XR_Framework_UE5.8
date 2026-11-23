#include "Azr_ProgressWidget.h"

#include "Blueprint/WidgetTree.h"
#include "Brushes/SlateColorBrush.h"
#include "Components/ProgressBar.h"
#include "Components/SizeBox.h"

void UAzr_ProgressWidget::SetProgress(float Progress)
{
	CurrentProgress = FMath::Clamp(Progress, 0.0f, 1.0f);
	if (ProgressBar) ProgressBar->SetPercent(CurrentProgress);
}

TSharedRef<SWidget> UAzr_ProgressWidget::RebuildWidget()
{
	// No designer layout -- the class used as it is, or a Widget Blueprint left empty -- so build a
	// plain bar and the widget works without any setup.
	if (WidgetTree && !WidgetTree->RootWidget)
	{
		USizeBox* Box = WidgetTree->ConstructWidget<USizeBox>(USizeBox::StaticClass(), TEXT("ProgressSize"));
		Box->SetWidthOverride(400.0f);
		Box->SetHeightOverride(40.0f);

		// Flat colours rather than the engine's default bar art: a light blue fill, left to right, over
		// a dark see-through track.
		ProgressBar = WidgetTree->ConstructWidget<UProgressBar>(UProgressBar::StaticClass(), TEXT("ProgressBar"));
		FProgressBarStyle Style = ProgressBar->GetWidgetStyle();
		Style.SetBackgroundImage(FSlateColorBrush(FLinearColor(0.01f, 0.015f, 0.025f, 0.75f)));
		Style.SetFillImage(FSlateColorBrush(FLinearColor::White));
		ProgressBar->SetWidgetStyle(Style);
		ProgressBar->SetFillColorAndOpacity(FLinearColor::FromSRGBColor(FColor(120, 205, 255)));
		ProgressBar->SetBarFillType(EProgressBarFillType::LeftToRight);
		Box->AddChild(ProgressBar);

		WidgetTree->RootWidget = Box;
	}

	TSharedRef<SWidget> Widget = Super::RebuildWidget();
	if (ProgressBar) ProgressBar->SetPercent(CurrentProgress);
	return Widget;
}
