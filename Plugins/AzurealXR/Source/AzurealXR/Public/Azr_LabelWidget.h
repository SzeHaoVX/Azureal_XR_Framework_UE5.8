

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "Azr_Types.h" // For FAzr_MultiLangText
#include "Azr_LabelWidget.generated.h"

// Forward Declaration
class UTextBlock;


UCLASS(Abstract)
class AZUREALXR_API UAzr_LabelWidget : public UUserWidget {
	GENERATED_BODY()

public:
	// --- PUBLIC API FOR THE COMPONENT TO CALL ---
	UFUNCTION(BlueprintCallable, Category = "Azureal|Label API")
	void SetLabelText(const FAzr_MultiLangText& InText);

protected:
	// --- EXACT UMG BINDINGS ---
	UPROPERTY(BlueprintReadWrite, Category = "Azureal|UI", meta = (BindWidget))
	UTextBlock* LabelTextBlock;

private:
	// Resolves the 3-box struct to the session's active language (falls back to English).
	FText GetLocalizedText(const FAzr_MultiLangText& MultiLangText) const;
};