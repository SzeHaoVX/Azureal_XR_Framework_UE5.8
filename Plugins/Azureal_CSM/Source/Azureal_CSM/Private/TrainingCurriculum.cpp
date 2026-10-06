

#include "TrainingCurriculum.h"

bool UTrainingCurriculum::DoesStepSurvive(const FStepData& Step, bool bShowExplanations)
{
    if (Step.StepType == EMasterStepType::Quiz) return Step.QuizAnswers.Num() > 0;

    for (const FSubStepData& Sub : Step.SubSteps)
    {
        if (Sub.Type == EStepType::Explanation && !bShowExplanations) continue;
        return true;
    }
    return false;
}

TArray<FRuntimeStep> UTrainingCurriculum::GetFilteredSteps(bool bShowExplanations)
{
    TArray<FRuntimeStep> Result;
    int32 CurrentStepIndex = 1;

    // Counts EVERY authored step, surviving or not, so a step that lives through the filter can still
    // say where it started.
    int32 AuthoredIndex = 0;

    for (const FStepData& RawStep : MasterSteps)
    {
        AuthoredIndex++; // 1-based, to match the numbering a Game Manager's Switch is authored against

        if (!DoesStepSurvive(RawStep, bShowExplanations)) continue;

        FRuntimeStep NewRuntimeStep;
        NewRuntimeStep.StepType = RawStep.StepType;

        // --- BRANCH A: Handle Quiz Compilation ---
        if (RawStep.StepType == EMasterStepType::Quiz)
        {
            NewRuntimeStep.StepTitle = RawStep.QuizTitle; // Map Question to StepTitle
            NewRuntimeStep.CorrectAnswerIndex = RawStep.CorrectAnswerIndex;

            // Convert our clean Quiz Answers into standard Runtime Substeps behind the scenes
            for (const FQuizAnswerData& Ans : RawStep.QuizAnswers)
            {
                FSubStepData DummySub;
                DummySub.Description = Ans.AnswerText;
                DummySub.Type = EStepType::Interaction; // Quizzes are always mandatory interaction
                NewRuntimeStep.ActiveSubSteps.Add(DummySub);
            }
        }
        // --- BRANCH B: Handle Standard Compilation ---
        else
        {
            NewRuntimeStep.StepTitle = RawStep.StepTitle;
            NewRuntimeStep.CorrectAnswerIndex = 0;

            for (const FSubStepData& Sub : RawStep.SubSteps)
            {
                if (Sub.Type == EStepType::Explanation && !bShowExplanations)
                {
                    continue; // Skip explanation if disabled
                }
                NewRuntimeStep.ActiveSubSteps.Add(Sub);
            }
        }

        NewRuntimeStep.DisplayNumber = CurrentStepIndex;
        NewRuntimeStep.AuthoredNumber = AuthoredIndex;
        Result.Add(NewRuntimeStep);
        CurrentStepIndex++;
    }
    return Result;
}

int32 UTrainingCurriculum::CountFilteredSteps(bool bShowExplanations) const
{
    int32 Count = 0;

    for (const FStepData& RawStep : MasterSteps)
    {
        if (DoesStepSurvive(RawStep, bShowExplanations)) Count++;
    }
    return Count;
}