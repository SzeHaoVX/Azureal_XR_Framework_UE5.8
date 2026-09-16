

#pragma once

#include "CoreMinimal.h"
#include "IDetailCustomization.h"

class FReply;
class UAzr_Animation;
class USceneComponent;

/**
 * Puts the recording buttons on UAzr_Animation inside the Blueprint editor.
 *
 * They cannot get there on their own. UE strips CallInEditor buttons from archetypes --
 * FObjectDetails::AddCallInEditorMethods drops every selected object carrying RF_ArchetypeObject and
 * bails when none are left, commented "no valid execution contexts (e.g. in Blueprint Editor)" -- and
 * a component inside a Blueprint is exactly that. So on a placed actor the CallInEditor buttons do the
 * work, and in the Blueprint editor these do.
 *
 * The harder half is that an SCS template has no owning actor, so the component's own
 * TargetComponent lookup returns nothing. Resolution there walks the construction script by name.
 */
class FAzr_AnimationCustomization : public IDetailCustomization
{
public:
	static TSharedRef<IDetailCustomization> MakeInstance();

	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	FReply OnAddStepClicked();
	FReply OnUpdateStepClicked();
	FReply OnSetRestPoseClicked();
	FReply OnResetToRestClicked();

	/**
	 * Finds the component named by TargetComponent, working for templates as well as instances.
	 *
	 * Returns null and explains itself on screen when the target is unset, missing, or the actor root
	 * -- a root's relative transform is its world transform, which is not a thing worth recording.
	 */
	static USceneComponent* ResolveTarget(UAzr_Animation* Anim);

	/** Mutates through PreEditChange/PostEditChangeProperty so placed instances pick the change up. */
	void ForEachSelected(const FText& TransactionLabel, FName PropertyName, TFunctionRef<void(UAzr_Animation*, USceneComponent*)> Work);

	static void Toast(const FText& Message, bool bSuccess);

	TArray<TWeakObjectPtr<UAzr_Animation>> Selected;
};
