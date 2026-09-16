

#include "Azr_AnimationCustomization.h"

#include "Azr_Animation.h"
#include "Components/SceneComponent.h"
#include "DetailCategoryBuilder.h"
#include "DetailLayoutBuilder.h"
#include "DetailWidgetRow.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SCS_Node.h"
#include "Engine/SimpleConstructionScript.h"
#include "Framework/Notifications/NotificationManager.h"
#include "GameFramework/Actor.h"
#include "ScopedTransaction.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Notifications/SNotificationList.h"
#include "Widgets/SBoxPanel.h"

#define LOCTEXT_NAMESPACE "AzurealXREditor"

TSharedRef<IDetailCustomization> FAzr_AnimationCustomization::MakeInstance()
{
	return MakeShareable(new FAzr_AnimationCustomization);
}

void FAzr_AnimationCustomization::CustomizeDetails(IDetailLayoutBuilder& DetailBuilder)
{
	TArray<TWeakObjectPtr<UObject>> Objects;
	DetailBuilder.GetObjectsBeingCustomized(Objects);

	Selected.Reset();
	bool bAnyArchetype = false;

	for (const TWeakObjectPtr<UObject>& Obj : Objects)
	{
		if (UAzr_Animation* Anim = Cast<UAzr_Animation>(Obj.Get()))
		{
			Selected.Add(Anim);

			// The same test the engine uses to decide a CallInEditor button has nowhere to run
			// (FObjectDetails::AddCallInEditorMethods). When it is true the component's own buttons
			// are absent and these have to stand in; when it is false they are already there and a
			// second set would only be confusing.
			bAnyArchetype |= Anim->HasAnyFlags(RF_ArchetypeObject | RF_ClassDefaultObject);
		}
	}

	if (Selected.Num() == 0 || !bAnyArchetype)
	{
		return;
	}

	IDetailCategoryBuilder& Category = DetailBuilder.EditCategory(
		TEXT("Azureal"), LOCTEXT("AuthoringCategory", "Azureal|Authoring"), ECategoryPriority::Important);

	Category.AddCustomRow(LOCTEXT("AuthoringFilter", "Record Animation"))
		.WholeRowContent()
		[
			SNew(SHorizontalBox)
			+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(0.f, 2.f, 4.f, 2.f)
			[
				SNew(SButton)
				.Text(LOCTEXT("RecordStart", "1. Record Start Position"))
				.ToolTipText(LOCTEXT("RecordStartTip",
					"Save where the target component sits right now as the animation's start.\n\nPress this before dragging anything. Everything else is measured from here."))
				.OnClicked(this, &FAzr_AnimationCustomization::OnSetRestPoseClicked)
			]
			+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(0.f, 2.f, 4.f, 2.f)
			[
				SNew(SButton)
				.Text(LOCTEXT("SaveStep", "2. Save Step"))
				.ToolTipText(LOCTEXT("SaveStepTip",
					"Drag the target component to where it should end up, then press this.\n\nPress it again after dragging further to add another step, so a sequence is built by carrying on from the pose you just saved."))
				.OnClicked(this, &FAzr_AnimationCustomization::OnAddStepClicked)
			]
			+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(0.f, 2.f, 4.f, 2.f)
			[
				SNew(SButton)
				.Text(LOCTEXT("ReRecord", "Re-record Step"))
				.ToolTipText(LOCTEXT("ReRecordTip",
					"Overwrite the step at Edit Step Index with the component's current pose."))
				.OnClicked(this, &FAzr_AnimationCustomization::OnUpdateStepClicked)
			]
			+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(0.f, 2.f, 0.f, 2.f)
			[
				SNew(SButton)
				.Text(LOCTEXT("GoToStart", "Go To Start Position"))
				.ToolTipText(LOCTEXT("GoToStartTip",
					"Put the component back where the start was recorded. Do this before saving the asset, so it is stored at rest."))
				.OnClicked(this, &FAzr_AnimationCustomization::OnResetToRestClicked)
			]
		];
}

USceneComponent* FAzr_AnimationCustomization::ResolveTarget(UAzr_Animation* Anim)
{
	if (!Anim) return nullptr;

	USceneComponent* Found = Anim->GetAnimatedComponent();
	if (!Found)
	{
		Toast(LOCTEXT("NoTarget", "Set Target Component first -- that is the component being animated."), false);
	}
	return Found;
}

void FAzr_AnimationCustomization::PropagateToInstances(UAzr_Animation* Archetype)
{
	if (!Archetype) return;

	TArray<UObject*> Instances;
	Archetype->GetArchetypeInstances(Instances);

	int32 Updated = 0;
	for (UObject* Obj : Instances)
	{
		UAzr_Animation* Inst = Cast<UAzr_Animation>(Obj);
		if (!Inst || Inst == Archetype) continue;

		Inst->Modify();
		Inst->Steps          = Archetype->Steps;
		Inst->RestTransform  = Archetype->RestTransform;
		Inst->bStartRecorded = Archetype->bStartRecorded;
		++Updated;
	}

	if (Updated > 0)
	{
		UE_LOG(LogTemp, Log, TEXT("Azr Animation: pushed %d step(s) out to %d placed instance(s)."),
			Archetype->Steps.Num(), Updated);
	}
}

void FAzr_AnimationCustomization::ForEachSelected(const FText& TransactionLabel, FName PropertyName, TFunctionRef<void(UAzr_Animation*, USceneComponent*)> Work)
{
	FScopedTransaction Transaction(TransactionLabel);

	FProperty* Property = FindFProperty<FProperty>(UAzr_Animation::StaticClass(), PropertyName);

	for (const TWeakObjectPtr<UAzr_Animation>& Weak : Selected)
	{
		UAzr_Animation* Anim = Weak.Get();
		if (!Anim) continue;

		USceneComponent* Target = ResolveTarget(Anim);
		if (!Target) continue;

		// Read before anything is written. Notifying a property change on a component can rerun the
		// owning actor's construction script, which rebuilds sibling components from their templates
		// and throws away exactly the drag being recorded here.
		const FTransform Dragged = Target->GetRelativeTransform();

		// Routed through the property-change pipeline rather than just mutating the archetype: that is
		// what pushes the new value out to instances already placed in levels, and what makes the
		// transaction above undoable.
		Anim->PreEditChange(Property);
		Work(Anim, Target);

		FPropertyChangedEvent Event(Property, EPropertyChangeType::ValueSet);
		Anim->PostEditChangeProperty(Event);
		Anim->MarkPackageDirty();

		// PostEditChangeProperty on an archetype does not push anything to instances -- the details
		// panel normally does that itself, having tracked the old value, and there is no panel here.
		// So an actor already standing in a level kept an empty Steps array and a false
		// bStartRecorded while the Blueprint held a finished animation, and nothing on either side
		// said they disagreed. Recording produces authoring data, not something worth overriding per
		// placement, so every instance simply takes what was just recorded.
		PropagateToInstances(Anim);

		// Put the drag back. Re-resolved rather than reusing Target, because a construction rerun
		// destroys the old component and builds a new one, leaving that pointer stale. A no-op when
		// nothing reset it.
		if (USceneComponent* Fresh = ResolveTarget(Anim))
		{
			if (!Fresh->GetRelativeTransform().Equals(Dragged))
			{
				Fresh->SetRelativeTransform(Dragged);

				UE_LOG(LogTemp, Log, TEXT("Azr Animation: the component was reset by a construction rerun after recording; put it back at %s."),
					*Dragged.GetLocation().ToCompactString());
			}
		}
	}
}

FReply FAzr_AnimationCustomization::OnSetRestPoseClicked()
{
	ForEachSelected(LOCTEXT("TxRecordStart", "Record Start Position"),
		GET_MEMBER_NAME_CHECKED(UAzr_Animation, RestTransform),
		[](UAzr_Animation* Anim, USceneComponent* Target)
		{
			Anim->SetRestPoseFromCurrent();
		});

	Toast(LOCTEXT("StartRecorded", "Start position recorded. Now drag the component and press Save Step."), true);
	return FReply::Handled();
}

FReply FAzr_AnimationCustomization::OnAddStepClicked()
{
	int32 Before = 0;
	int32 After = 0;

	ForEachSelected(LOCTEXT("TxSaveStep", "Save Step"),
		GET_MEMBER_NAME_CHECKED(UAzr_Animation, Steps),
		[&Before, &After](UAzr_Animation* Anim, USceneComponent* Target)
		{
			Before += Anim->Steps.Num();
			Anim->AddStepFromCurrentPose();
			After += Anim->Steps.Num();
		});

	// AddStepFromTransform refuses when no start has been recorded, and says so in the log. Nothing
	// having been added is the only evidence available out here, so it is what the toast reads.
	if (After > Before)
	{
		Toast(LOCTEXT("StepSaved", "Step saved. Drag further and press again for the next one."), true);
	}
	else
	{
		Toast(LOCTEXT("StepRefused", "Press Record Start Position first -- a step needs somewhere to move from."), false);
	}

	return FReply::Handled();
}

FReply FAzr_AnimationCustomization::OnUpdateStepClicked()
{
	ForEachSelected(LOCTEXT("TxReRecord", "Re-record Step"),
		GET_MEMBER_NAME_CHECKED(UAzr_Animation, Steps),
		[](UAzr_Animation* Anim, USceneComponent* Target)
		{
			Anim->UpdateStepFromCurrentPose();
		});

	Toast(LOCTEXT("StepUpdated", "Step re-recorded."), true);
	return FReply::Handled();
}

FReply FAzr_AnimationCustomization::OnResetToRestClicked()
{
	ForEachSelected(LOCTEXT("TxGoToStart", "Go To Start Position"),
		GET_MEMBER_NAME_CHECKED(UAzr_Animation, RestTransform),
		[](UAzr_Animation* Anim, USceneComponent* Target)
		{
			Target->Modify();
			Target->SetRelativeTransform(Anim->RestTransform);
		});

	return FReply::Handled();
}

void FAzr_AnimationCustomization::Toast(const FText& Message, bool bSuccess)
{
	FNotificationInfo Info(Message);
	Info.ExpireDuration = bSuccess ? 3.0f : 6.0f;
	Info.bUseSuccessFailIcons = true;

	TSharedPtr<SNotificationItem> Item = FSlateNotificationManager::Get().AddNotification(Info);
	if (Item.IsValid())
	{
		Item->SetCompletionState(bSuccess ? SNotificationItem::CS_Success : SNotificationItem::CS_Fail);
	}
}

#undef LOCTEXT_NAMESPACE
