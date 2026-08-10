// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "Azr_ExplainCustomization.h"

#include "Azr_Explain.h"
#include "Azr_NarrationGenerator.h"

#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "Framework/Notifications/NotificationManager.h"
#include "IDetailChildrenBuilder.h"
#include "Misc/ScopedSlowTask.h"
#include "PropertyHandle.h"
#include "ScopedTransaction.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Widgets/SBoxPanel.h"
#include "Widgets/Text/STextBlock.h"

#define LOCTEXT_NAMESPACE "AzurealXREditor"

namespace
{
	void ShowResultNotification(const FText& Message, bool bSuccess)
	{
		FNotificationInfo Info(Message);
		Info.ExpireDuration = bSuccess ? 5.0f : 12.0f;
		Info.bFireAndForget = true;

		// A failure that scrolls away in five seconds is a failure nobody reads. Successes can go.
		const TSharedPtr<SNotificationItem> Item = FSlateNotificationManager::Get().AddNotification(Info);
		if (Item.IsValid())
		{
			Item->SetCompletionState(bSuccess ? SNotificationItem::CS_Success : SNotificationItem::CS_Fail);
		}

		if (bSuccess)
		{
			UE_LOG(LogTemp, Log, TEXT("[Azr Narration] %s"), *Message.ToString());
		}
		else
		{
			UE_LOG(LogTemp, Warning, TEXT("[Azr Narration] %s"), *Message.ToString());
		}
	}
}

// --------------------------------------------------------------------------------------------------
// Per-step button
// --------------------------------------------------------------------------------------------------

TSharedRef<IPropertyTypeCustomization> FAzr_ExplainStepCustomization::MakeInstance()
{
	return MakeShareable(new FAzr_ExplainStepCustomization());
}

void FAzr_ExplainStepCustomization::CustomizeHeader(TSharedRef<IPropertyHandle> PropertyHandle, FDetailWidgetRow& HeaderRow, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	StepHandle = PropertyHandle;

	HeaderRow
		.NameContent()
		[
			PropertyHandle->CreatePropertyNameWidget()
		]
		.ValueContent()
		.MinDesiredWidth(180.0f)
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.Text(LOCTEXT("GenerateStep", "Generate Narration"))
				.ToolTipText(LOCTEXT("GenerateStepTooltip",
					"Read this step's English text to ElevenLabs, import the audio, and fill in the word timings the text reveal follows.\n\nThis always regenerates, even if the text has not changed. Because generation is not deterministic, the new recording will differ slightly from the old one."))
				.OnClicked(this, &FAzr_ExplainStepCustomization::OnGenerateClicked)
			]
		];
}

void FAzr_ExplainStepCustomization::CustomizeChildren(TSharedRef<IPropertyHandle> PropertyHandle, IDetailChildrenBuilder& ChildBuilder, IPropertyTypeCustomizationUtils& CustomizationUtils)
{
	// Everything inside the step is left exactly as the property system would have drawn it; only the
	// header row gained a button.
	uint32 NumChildren = 0;
	PropertyHandle->GetNumChildren(NumChildren);

	for (uint32 Index = 0; Index < NumChildren; ++Index)
	{
		const TSharedPtr<IPropertyHandle> ChildHandle = PropertyHandle->GetChildHandle(Index);
		if (ChildHandle.IsValid())
		{
			ChildBuilder.AddProperty(ChildHandle.ToSharedRef());
		}
	}
}

FReply FAzr_ExplainStepCustomization::OnGenerateClicked()
{
	FScopedSlowTask SlowTask(1.0f, LOCTEXT("GeneratingOne", "Generating narration..."));
	SlowTask.MakeDialog();

	const FScopedTransaction Transaction(LOCTEXT("GenerateStepTransaction", "Generate Narration"));

	const FAzr_NarrationResult Result = FAzr_NarrationGenerator::GenerateForStepHandle(StepHandle, /*bForce*/ true);
	ShowResultNotification(Result.Message, Result.bSuccess);

	return FReply::Handled();
}

// --------------------------------------------------------------------------------------------------
// Component-wide button
// --------------------------------------------------------------------------------------------------

TSharedRef<IDetailCustomization> FAzr_ExplainCustomization::MakeInstance()
{
	return MakeShareable(new FAzr_ExplainCustomization());
}

void FAzr_ExplainCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	StepHandles.Reset();
	StepHandles.Add(DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UAzr_Explain, SingleExplainStep)));
	StepHandles.Add(DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UAzr_Explain, StartStep)));
	StepHandles.Add(DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UAzr_Explain, EndStep)));

	MiddleStepsArrayHandle = DetailBuilder.GetProperty(GET_MEMBER_NAME_CHECKED(UAzr_Explain, MiddleSteps));

	// Its own section rather than a row appended to the bottom of Explain Settings, where a custom row
	// lands after every step property and nobody would find it.
	IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(
		TEXT("Narration"), LOCTEXT("NarrationCategory", "Narration"), ECategoryPriority::Important);

	Category.AddCustomRow(LOCTEXT("GenerateAllFilter", "Generate Narration"))
		.WholeRowContent()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			[
				SNew(SButton)
				.Text(LOCTEXT("GenerateAll", "Generate Narration"))
				.ToolTipText(LOCTEXT("GenerateAllTooltip",
					"Generate the audio and word timings for every step on this component that needs it.\n\nSteps whose English text has not changed since they were last generated are skipped, so this costs nothing to click again -- and it will not replace a recording the existing timings still fit."))
				.OnClicked(this, &FAzr_ExplainCustomization::OnGenerateAllClicked)
			]
			+ SHorizontalBox::Slot()
			.AutoWidth()
			.VAlign(VAlign_Center)
			.Padding(8.0f, 0.0f, 0.0f, 0.0f)
			[
				SNew(STextBlock)
				.Text(LOCTEXT("GenerateAllHint", "Fills in Audio Track and Word Timings from the English text."))
				.Font(IDetailLayoutBuilder::GetDetailFontItalic())
			]
		];
}

FReply FAzr_ExplainCustomization::OnGenerateAllClicked()
{
	// The array is read now rather than at customize time so steps added since the panel was drawn are
	// still covered.
	TArray<TSharedPtr<IPropertyHandle>> AllSteps = StepHandles;

	if (MiddleStepsArrayHandle.IsValid() && MiddleStepsArrayHandle->IsValidHandle())
	{
		const TSharedPtr<IPropertyHandleArray> AsArray = MiddleStepsArrayHandle->AsArray();
		if (AsArray.IsValid())
		{
			uint32 NumMiddle = 0;
			AsArray->GetNumElements(NumMiddle);

			for (uint32 Index = 0; Index < NumMiddle; ++Index)
			{
				AllSteps.Add(AsArray->GetElement(Index));
			}
		}
	}

	FScopedSlowTask SlowTask(static_cast<float>(AllSteps.Num()), LOCTEXT("GeneratingAll", "Generating narration..."));
	SlowTask.MakeDialog();

	const FScopedTransaction Transaction(LOCTEXT("GenerateAllTransaction", "Generate Narration"));

	int32 Generated = 0;
	int32 Skipped = 0;
	int32 Empty = 0;
	TArray<FText> Failures;

	for (const TSharedPtr<IPropertyHandle>& Step : AllSteps)
	{
		SlowTask.EnterProgressFrame(1.0f);

		const FAzr_NarrationResult Result = FAzr_NarrationGenerator::GenerateForStepHandle(Step, /*bForce*/ false);

		switch (Result.Outcome)
		{
		case EAzr_NarrationOutcome::Generated:
			++Generated;
			break;

		case EAzr_NarrationOutcome::AlreadyCurrent:
			++Skipped;
			break;

		case EAzr_NarrationOutcome::NoText:
			// A component that only uses some of its steps leaves the rest blank. That is the normal
			// state of an unused Single or Start step, not something to report as a failure -- but it
			// is counted, so that "nothing happened" can say why.
			++Empty;
			break;

		default:
			Failures.Add(Result.Message);
			break;
		}
	}

	// "0 generated, 0 up to date, 0 failed" is a report that something happened and says nothing about
	// what. The overwhelmingly common cause is simply that no step has any text yet, so say that.
	FText Summary;
	if (Generated == 0 && Skipped == 0 && Failures.Num() == 0)
	{
		Summary = (Empty > 0)
			? FText::Format(
				LOCTEXT("GenerateAllNoText",
					"Nothing to narrate: none of this component's {0} steps has any English text yet. Fill in Explain Text, then generate."),
				FText::AsNumber(Empty))
			: LOCTEXT("GenerateAllNoSteps", "This component has no Explain steps to narrate.");
	}
	else
	{
		Summary = FText::Format(
			LOCTEXT("GenerateAllSummary", "Narration: {0} generated, {1} already up to date, {2} failed."),
			FText::AsNumber(Generated), FText::AsNumber(Skipped), FText::AsNumber(Failures.Num()));
	}

	ShowResultNotification(Summary, Failures.Num() == 0);

	for (const FText& Failure : Failures)
	{
		UE_LOG(LogTemp, Warning, TEXT("[Azr Narration] %s"), *Failure.ToString());
	}

	return FReply::Handled();
}

#undef LOCTEXT_NAMESPACE
