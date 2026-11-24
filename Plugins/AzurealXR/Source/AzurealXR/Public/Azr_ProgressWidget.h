#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Azr_ProgressWidget.generated.h"

class UProgressBar;

/**
 * The progress bar a latch fills as the player works it (UAzr_Latch's Show Progress Bar and Required
 * Rounds).
 *
 * Usable as it is, as a widget component's Widget Class: with no designer layout it builds a plain
 * 400 x 40 light blue bar that fills left to right, so turn on Draw at Desired Size on that
 * component. To restyle it, make a Widget Blueprint from this class and give it a Progress Bar
 * named ProgressBar.
 */
UCLASS(Blueprintable)
class AZUREALXR_API UAzr_ProgressWidget : public UUserWidget
{
	GENERATED_BODY()

public:
	/** Fills the bar to Progress, 0 to 1. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Progress API")
	void SetProgress(float Progress);

protected:
	virtual TSharedRef<SWidget> RebuildWidget() override;

	UPROPERTY(BlueprintReadWrite, Category = "Azureal|UI", meta = (BindWidgetOptional))
	UProgressBar* ProgressBar;

private:
	// Kept so a SetProgress that arrives before the bar is built still shows once it is.
	float CurrentProgress = 0.0f;
};
