

// What each framework component says about itself to the Azureal Debugger.
//
// Gathered in one file rather than spread across the components. These implementations exist for the
// debugger and nothing else, so keeping them together means the whole feature can be read -- or
// removed -- in one place, and none of the interaction files gain a tail of unrelated code.

#include "Azr_Debug.h"

#include "Azr_Action.h"
#include "Azr_Explain.h"
#include "Azr_Gaze.h"
#include "Azr_Grab.h"
#include "Azr_Latch.h"
#include "Azr_LatchZone.h"
#include "Azr_Touch.h"
#include "Azr_TouchZone.h"
#include "Components/SceneComponent.h"
#include "GameFramework/Actor.h"

namespace
{
	/** "Enabled" / "Disabled", with whatever is more interesting than that taking precedence. */
	FString StateWord(bool bEnabled, const TCHAR* Busy = nullptr)
	{
		if (Busy) return Busy;
		return bEnabled ? TEXT("Enabled") : TEXT("Disabled");
	}

	/**
	 * A zone links to its brain by matching InteractID among sibling components, and nothing warns
	 * when the two disagree -- the zone simply never wakes and the interaction never happens. It is
	 * one of the framework's quietest failures, so it is worth saying out loud.
	 */
	template <typename ZoneType>
	void CheckZonePairing(const UActorComponent* Brain, const ZoneType* LinkedZone, int32 InteractID,
		const TCHAR* ZoneLabel, TArray<FString>& OutProblems)
	{
		if (LinkedZone) return;
		if (!Brain || !Brain->GetOwner()) return;

		TArray<ZoneType*> Zones;
		Brain->GetOwner()->GetComponents<ZoneType>(Zones);

		if (Zones.Num() == 0)
		{
			OutProblems.Add(FString::Printf(
				TEXT("No %s on this actor. Add one, or this interaction can never be triggered."), ZoneLabel));
			return;
		}

		FString Ids;
		for (const ZoneType* Zone : Zones)
		{
			if (!Zone) continue;
			if (!Ids.IsEmpty()) Ids += TEXT(", ");
			Ids += FString::FromInt(Zone->InteractID);
		}

		OutProblems.Add(FString::Printf(
			TEXT("InteractID %d matches no %s on this actor (found: %s). The IDs must agree or the zone never links."),
			InteractID, ZoneLabel, *Ids));
	}

	/** The tether and the highlight both hang off a component found by name; a typo silently finds nothing. */
	void CheckNamedComponent(const UActorComponent* Owner, FName Name, const TCHAR* Label, TArray<FString>& OutProblems)
	{
		if (!Owner || !Owner->GetOwner() || Name.IsNone()) return;

		TArray<UActorComponent*> All;
		Owner->GetOwner()->GetComponents(All);

		const FString Wanted = Name.ToString();
		for (const UActorComponent* Component : All)
		{
			if (Component && Component->GetName().Contains(Wanted))
			{
				return;
			}
		}

		OutProblems.Add(FString::Printf(
			TEXT("%s is set to \"%s\", which matches no component on this actor."), Label, *Wanted));
	}
}

// --- GRAB ---

void UAzr_Grab::GetAzrDebugInfo(FAzr_DebugComponentInfo& Out) const
{
	Out.bEnabled = bIsGrabEnabled;
	Out.State = StateWord(bIsGrabEnabled, IsHeld() ? TEXT("Held") : nullptr);

	const UEnum* ModeEnum = StaticEnum<EAzr_GrabMode>();
	Out.Detail = ModeEnum ? ModeEnum->GetNameStringByValue(static_cast<int64>(GrabMode)) : FString();
}

void UAzr_Grab::ValidateAzrSetup(TArray<FString>& OutProblems) const
{
	// Only the Normal config carries a mesh name; the other three modes resolve their mesh elsewhere.
	if (GrabMode == EAzr_GrabMode::Normal)
	{
		CheckNamedComponent(this, Grab.TargetMeshName, TEXT("Grab Settings > Target Mesh Name"), OutProblems);
	}
}

// --- LATCH ---

void UAzr_Latch::GetAzrDebugInfo(FAzr_DebugComponentInfo& Out) const
{
	Out.bEnabled = bIsGrabEnabled;
	Out.State = StateWord(bIsGrabEnabled, bIsGrabbed ? TEXT("Held") : nullptr);
	Out.InteractID = InteractID;

	const UEnum* TypeEnum = StaticEnum<EAzr_LatchType>();
	const FString TypeName = TypeEnum ? TypeEnum->GetNameStringByValue(static_cast<int64>(LatchType)) : FString();

	// The value against its limits, because "the lever will not move" is nearly always a lever already
	// sitting on a stop.
	Out.Detail = FString::Printf(TEXT("%s  %.1f  [%.0f..%.0f]"), *TypeName, CurrentRawValue, LimitMin, LimitMax);
}

void UAzr_Latch::ValidateAzrSetup(TArray<FString>& OutProblems) const
{
	CheckZonePairing<UAzr_LatchZone>(this, LinkedLatchZone, InteractID, TEXT("Azr Latch Zone"), OutProblems);
	CheckNamedComponent(this, HandleMeshName, TEXT("Handle Mesh Name"), OutProblems);

	if (FMath::IsNearlyEqual(LimitMin, LimitMax))
	{
		OutProblems.Add(TEXT("Limit Min and Limit Max are the same, so this latch has nowhere to travel."));
	}
}

// --- TOUCH ---

void UAzr_Touch::GetAzrDebugInfo(FAzr_DebugComponentInfo& Out) const
{
	Out.bEnabled = bIsTouchEnabled;
	Out.State = StateWord(bIsTouchEnabled, bIsTouched ? TEXT("Touched") : nullptr);
	Out.InteractID = InteractID;
}

void UAzr_Touch::ValidateAzrSetup(TArray<FString>& OutProblems) const
{
	CheckZonePairing<UAzr_TouchZone>(this, LinkedTouchZone, InteractID, TEXT("Azr Touch Zone"), OutProblems);
	CheckNamedComponent(this, TargetMeshName, TEXT("Target Mesh Name"), OutProblems);
}

// --- EXPLAIN ---

void UAzr_Explain::GetAzrDebugInfo(FAzr_DebugComponentInfo& Out) const
{
	Out.bEnabled = bIsActive;
	Out.InteractID = InteractID;

	if (!bIsActive)
	{
		Out.State = TEXT("Disabled");
	}
	else if (!bIsPlusMode)
	{
		Out.State = TEXT("Active");
	}
	else
	{
		// Where in the chain, counted the way the events report it: Start is 1, the End step is last.
		Out.State = FString::Printf(TEXT("Active  step %d of %d"), 2 + CurrentMiddleIndex, 2 + MiddleSteps.Num());
	}

	Out.Detail = bIsPlusMode ? TEXT("Explain+") : TEXT("Single");
}

void UAzr_Explain::ValidateAzrSetup(TArray<FString>& OutProblems) const
{
	// A step that reveals its text but has no audio to reveal it against simply shows the sentence, so
	// the tickbox reads as broken to whoever set it.
	auto CheckStep = [&OutProblems, this](const FAzr_ExplainStep& Step, const TCHAR* Label)
	{
		if (bRevealTextWithAudio && !Step.AudioTrack)
		{
			OutProblems.Add(FString::Printf(
				TEXT("%s has Reveal Text With Audio on but no Audio Track, so its text will simply appear."), Label));
		}
	};

	CheckStep(SingleExplainStep, TEXT("Single Explain Step"));

	if (!MiddleSteps.IsEmpty() || StartStep.AudioTrack || EndStep.AudioTrack)
	{
		CheckStep(StartStep, TEXT("Start Step"));
		for (int32 Index = 0; Index < MiddleSteps.Num(); ++Index)
		{
			CheckStep(MiddleSteps[Index], *FString::Printf(TEXT("Middle Step %d"), Index + 1));
		}
		CheckStep(EndStep, TEXT("End Step"));
	}
}

// --- ACTION ---

void UAzr_Action::GetAzrDebugInfo(FAzr_DebugComponentInfo& Out) const
{
	Out.bEnabled = bIsActive;
	Out.State = StateWord(bIsActive);
	Out.InteractID = InteractID;
}

void UAzr_Action::ValidateAzrSetup(TArray<FString>& OutProblems) const
{
}

// --- GAZE ---

void UAzr_Gaze::GetAzrDebugInfo(FAzr_DebugComponentInfo& Out) const
{
	Out.bEnabled = bIsGazeEnabled;
	Out.State = StateWord(bIsGazeEnabled);
	Out.InteractID = InteractID;
}

void UAzr_Gaze::ValidateAzrSetup(TArray<FString>& OutProblems) const
{
}
