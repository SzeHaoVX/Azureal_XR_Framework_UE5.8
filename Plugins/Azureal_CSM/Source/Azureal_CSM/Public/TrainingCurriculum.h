

// TrainingCurriculum.h
#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TrainingTypes.h" // Includes our Enums and Structs
#include "TrainingCurriculum.generated.h"

UCLASS(BlueprintType)
class AZUREAL_CSM_API UTrainingCurriculum : public UDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Training Content")
    TArray<FStepData> MasterSteps;

    // Heavy: Creates a new array (Use for actually running the steps)
    UFUNCTION(BlueprintCallable, Category = "Training Logic")
    TArray<FRuntimeStep> GetFilteredSteps(bool bShowExplanations);

    // Light: Just returns the number (Use for statistics/UI)
    UFUNCTION(BlueprintPure, Category = "Training Logic")
    int32 CountFilteredSteps(bool bShowExplanations) const;

    /**
     * Whether a master step is still there after the explanation filter. The one survivor rule:
     * GetFilteredSteps and CountFilteredSteps both ask this, so the page list and every count built
     * from it (row progress, chapter visibility) cannot disagree.
     *
     * A quiz survives when it has answers. A standard step survives when at least one sub-step does,
     * and an Explanation sub-step survives only while explanations are shown.
     */
    static bool DoesStepSurvive(const FStepData& Step, bool bShowExplanations);
};