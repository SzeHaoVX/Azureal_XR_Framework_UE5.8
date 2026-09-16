

#include "Azr_Animation.h"

#include "Components/AudioComponent.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SceneComponent.h"
#include "Curves/CurveFloat.h"
#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "Kismet/GameplayStatics.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Materials/MaterialInterface.h"
#include "Sound/SoundBase.h"

#if WITH_EDITOR
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/SCS_Node.h"
#include "Engine/SimpleConstructionScript.h"
#endif

namespace
{
	/**
	 * How long the alpha may sit still before WhileMoving decides the motion has stopped.
	 *
	 * SetAlpha is push-driven, so nothing announces that a hand stopped turning -- the only evidence
	 * is an alpha that stops arriving. Two or three frames is long enough not to stutter on a slow
	 * hand and short enough that the loop does not trail past the motion.
	 */
	constexpr double MovementIdleSeconds = 0.08;

	/** How far the alpha must back out of a step before its sounds re-arm. */
	constexpr float RetriggerDeadzone = 0.02f;

	FString MaterialKey(int32 Slot, FName Parameter)
	{
		return FString::Printf(TEXT("%d:%s"), Slot, *Parameter.ToString());
	}
}

UAzr_Animation::UAzr_Animation()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	// AAzr_Interactable::OnConstruction disables ticking on every component that is not tagged, which
	// would leave this one silently never playing on the majority of props in a module. Tagging in the
	// constructor means the component fixes itself rather than relying on anyone remembering.
	ComponentTags.Add(FName("KeepTick"));
}

// --- LIFECYCLE ---

void UAzr_Animation::BeginPlay()
{
	Super::BeginPlay();

	RebuildTimeline();

	// Whatever pose the level was saved in, runtime starts at rest. Someone will eventually save a
	// level with a cover left halfway open, and this is what stops that reaching a trainee.
	//
	// Only when there is an animation to enforce, though. RestTransform defaults to identity, so
	// without a guard a component merely dropped on an actor -- no target, nothing authored --
	// slammed its mesh to the origin at scale 1 the instant PIE started, with no Play call anywhere
	// near it.
	//
	// Steps counts as well as the flag. Guarding on bStartRecorded alone was too strict: it was added
	// after the component shipped, so anything authored before it deserialises with the flag false
	// and a full set of steps, and those animations stopped returning to their start entirely --
	// leaving the mesh wherever the asset happened to store it, usually the last recorded pose.
	if (bStartRecorded || Steps.Num() > 0)
	{
		if (USceneComponent* Target = ResolveTarget())
		{
			Target->SetRelativeTransform(RestTransform);
		}
	}

	CurrentAlpha = 0.f;
	LastReportedStep = INDEX_NONE;
}

void UAzr_Animation::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	// A looping sound outlives its component unless it is stopped by hand, and an audio component
	// attached to a destroyed actor keeps playing at the last place it was.
	StopAllLoops();

	Super::EndPlay(EndPlayReason);
}

void UAzr_Animation::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bPlaying)
	{
		if (TotalDuration <= 0.f)
		{
			Stop();
			return;
		}

		Elapsed += DeltaTime * FMath::Max(0.01f, PlayRate) * PlayDirection;

		const float Alpha = FMath::Clamp(Elapsed / TotalDuration, 0.f, 1.f);
		EvaluateAtAlpha(Alpha);

		const bool bDone = (PlayDirection > 0.f) ? (Alpha >= 1.f) : (Alpha <= 0.f);
		if (bDone)
		{
			bPlaying = false;
			StopAllLoops();
			SetComponentTickEnabled(false);
			OnAnimationFinished.Broadcast();
		}
		return;
	}

	// Not playing, so the only reason to still be ticking is a WhileMoving loop waiting to find out
	// whether the alpha has gone quiet.
	const UWorld* World = GetWorld();
	const double Now = World ? World->GetTimeSeconds() : 0.0;
	if (Now - LastAlphaMoveTime >= MovementIdleSeconds)
	{
		StopAllLoops();
		SetComponentTickEnabled(false);
	}
}

// --- PLAYBACK ---

void UAzr_Animation::Play()
{
	RebuildTimeline();
	if (TotalDuration <= 0.f) return;

	bPlaying = true;
	PlayDirection = 1.f;
	Elapsed = CurrentAlpha * TotalDuration;

	// Only a pass that genuinely starts from the beginning re-arms. Re-arming a resume would fire
	// every already-passed step's sound at once on the next evaluation.
	if (CurrentAlpha <= KINDA_SMALL_NUMBER)
	{
		ArmTriggers();
		LastReportedStep = INDEX_NONE;
	}

	SetComponentTickEnabled(true);
	OnAnimationStarted.Broadcast();
}

void UAzr_Animation::PlayReverse()
{
	RebuildTimeline();
	if (TotalDuration <= 0.f) return;

	bPlaying = true;
	PlayDirection = -1.f;
	Elapsed = CurrentAlpha * TotalDuration;

	if (CurrentAlpha >= 1.f - KINDA_SMALL_NUMBER)
	{
		ArmTriggers();
		LastReportedStep = INDEX_NONE;
	}

	SetComponentTickEnabled(true);
	OnAnimationStarted.Broadcast();
}

void UAzr_Animation::Stop()
{
	if (!bPlaying) return;

	bPlaying = false;
	StopAllLoops();
	SetComponentTickEnabled(false);
	OnAnimationFinished.Broadcast();
}

void UAzr_Animation::ResetToRest()
{
	bPlaying = false;
	StopAllLoops();
	SetComponentTickEnabled(false);

	ArmTriggers();
	LastReportedStep = INDEX_NONE;

#if WITH_EDITORONLY_DATA
	// The slider has to agree with the viewport. Left reading 0.7 over a mesh sitting at rest, it is
	// one more thing showing a different position from the thing next to it.
	PreviewAlpha = 0.f;
#endif

	EvaluateAtAlpha(0.f);
}

void UAzr_Animation::SetAlpha(float Alpha)
{
	// Whoever spoke last wins. Letting a timer and a hand both write the same transform produces
	// motion that answers to neither.
	bPlaying = false;

	EvaluateAtAlpha(Alpha);
}

// --- EVALUATION ---

void UAzr_Animation::EvaluateAtAlpha(float Alpha)
{
	Alpha = FMath::Clamp(Alpha, 0.f, 1.f);

	if (StepWindows.Num() != Steps.Num() || TotalDuration <= 0.f)
	{
		RebuildTimeline();
	}

	USceneComponent* Target = ResolveTarget();
	if (!Target || Steps.Num() == 0)
	{
		CurrentAlpha = Alpha;
		return;
	}

	const bool bMoved = !FMath::IsNearlyEqual(Alpha, CurrentAlpha, KINDA_SMALL_NUMBER);
	if (bMoved)
	{
		const UWorld* World = GetWorld();
		LastAlphaMoveTime = World ? World->GetTimeSeconds() : 0.0;
	}
	CurrentAlpha = Alpha;

	if (!bRestVisibleCaptured)
	{
		bRestVisible = Target->IsVisible();
		bRestVisibleCaptured = true;
	}

	// Visibility folds in exactly like the transform: start from rest, let steps override. Without the
	// reset a step that hides something would leave it hidden after scrubbing back to zero.
	Target->SetVisibility(bRestVisible, true);

	const float Time = Alpha * TotalDuration;

	// Steps are folded in sequentially: by the time step N is reached, Pose already holds the result
	// of every earlier step, so lerping from Pose to this step's target is correct both while it is
	// running and after it has finished. A step that has not started yet lerps by zero and is a no-op.
	FTransform Pose = RestTransform;
	int32 HighestComplete = INDEX_NONE;

	for (int32 i = 0; i < Steps.Num(); ++i)
	{
		const FAzr_AnimStep& Step = Steps[i];
		const FVector2D& Window = StepWindows[i];

		const float Span = FMath::Max(KINDA_SMALL_NUMBER, Window.Y - Window.X);
		const float Raw = FMath::Clamp((Time - Window.X) / Span, 0.f, 1.f);
		const float T = ApplyEase(Raw, Step);

		if (Step.bMoveLocation)
		{
			Pose.SetLocation(FMath::Lerp(Pose.GetLocation(), Step.Target.GetLocation(), T));
		}
		if (Step.bMoveRotation)
		{
			// Slerp rather than lerping a rotator: rotators interpolate each axis independently and
			// take the long way round anything crossing 180 degrees.
			Pose.SetRotation(FQuat::Slerp(Pose.GetRotation(), Step.Target.GetRotation(), T).GetNormalized());
		}
		if (Step.bMoveScale)
		{
			Pose.SetScale3D(FMath::Lerp(Pose.GetScale3D(), Step.Target.GetScale3D(), T));
		}

		ApplyMaterialTargets(i, T);

		if (Raw > 0.f && Step.Visibility != EAzr_AnimVisibility::NoChange)
		{
			Target->SetVisibility(Step.Visibility == EAzr_AnimVisibility::Show, true);
		}

		HandleStepSound(i, Raw, bMoved);

		if (Raw >= 1.f) HighestComplete = i;
	}

	Target->SetRelativeTransform(Pose);

	if (bMoved)
	{
		OnAlphaChanged.Broadcast(Alpha);
	}

	// Only ever forward, and only once per step, so scrubbing back and forth across a boundary does
	// not re-fire whatever the Game Manager hung off it.
	if (HighestComplete > LastReportedStep)
	{
		for (int32 i = LastReportedStep + 1; i <= HighestComplete; ++i)
		{
			OnStepReached.Broadcast(i);
		}
		LastReportedStep = HighestComplete;
	}
	else if (HighestComplete < LastReportedStep)
	{
		LastReportedStep = HighestComplete;
	}
}

void UAzr_Animation::RebuildTimeline()
{
	StepWindows.SetNum(Steps.Num());

	float Cursor = 0.f;
	float PreviousStart = 0.f;

	for (int32 i = 0; i < Steps.Num(); ++i)
	{
		const float Start = (i > 0 && Steps[i].bStartWithPrevious) ? PreviousStart : Cursor;
		const float End = Start + FMath::Max(0.01f, Steps[i].Duration);

		StepWindows[i] = FVector2D(Start, End);
		PreviousStart = Start;

		// Max rather than assignment: a short parallel step must not pull the next sequential step
		// forward over a longer one running beside it.
		Cursor = FMath::Max(Cursor, End);
	}

	TotalDuration = Cursor;

	StepLoops.SetNum(Steps.Num());

	// Only when the count actually moved. SetNumZeroed would leave existing flags alone anyway, and
	// re-arming here would wipe them on every timeline rebuild -- which happens mid-scrub.
	if (StartFired.Num() != Steps.Num())
	{
		ArmTriggers();
	}
}

void UAzr_Animation::ArmTriggers()
{
	// Init, not SetNumZeroed: SetNumZeroed only zeroes elements it adds, so an array already the right
	// length keeps every flag it had and nothing ever sounds a second time.
	StartFired.Init(0, Steps.Num());
	EndFired.Init(0, Steps.Num());
}

float UAzr_Animation::ApplyEase(float T, const FAzr_AnimStep& Step)
{
	if (Step.CustomEase)
	{
		return Step.CustomEase->GetFloatValue(T);
	}

	switch (Step.Ease)
	{
	case EAzr_AnimEase::EaseIn:    return T * T;
	case EAzr_AnimEase::EaseOut:   return 1.f - (1.f - T) * (1.f - T);
	case EAzr_AnimEase::EaseInOut: return FMath::SmoothStep(0.f, 1.f, T);
	case EAzr_AnimEase::Hold:      return T >= 1.f ? 1.f : 0.f;
	default:                       return T;
	}
}

USceneComponent* UAzr_Animation::GetAnimatedComponent() const
{
	return ResolveTarget();
}

USceneComponent* UAzr_Animation::ResolveTarget() const
{
	AActor* Owner = GetOwner();

	// No owner means a Blueprint template rather than a placed actor.
	if (!Owner) return ResolveTargetTemplate();

	// No fallback to the root, deliberately. A root component has no attach parent, so its "relative"
	// transform IS its world transform -- recording one would bake the actor's position into the step
	// and break the moment anyone moved the actor. It also cannot be dragged on its own, since the
	// gizmo moves the whole actor. Silently animating the root looks like it works right up until it
	// does not, so an unset target is an error rather than a guess.
	if (UActorComponent* Found = TargetComponent.GetComponent(Owner))
	{
		return Cast<USceneComponent>(Found);
	}

	return nullptr;
}

USceneComponent* UAzr_Animation::ResolveTargetTemplate() const
{
#if WITH_EDITOR
	// Reached only when there is no owning actor, which means this is a component sitting in a
	// Blueprint rather than in a level. Its target is an SCS node template outered to the generated
	// class, so FComponentReference has nothing to search and the construction script has to be
	// walked by name -- up the super chain too, or a component inherited from a parent Blueprint is
	// invisible from here.
	//
	// Without this the Blueprint editor could not evaluate at all: the preview slider moved nothing,
	// which looked exactly like the animation being stuck at whatever pose was last recorded.
	const FName Wanted = TargetComponent.ComponentProperty;
	if (Wanted.IsNone()) return nullptr;

	for (UClass* Cls = GetTypedOuter<UBlueprintGeneratedClass>(); Cls; Cls = Cls->GetSuperClass())
	{
		UBlueprintGeneratedClass* Gen = Cast<UBlueprintGeneratedClass>(Cls);
		if (!Gen || !Gen->SimpleConstructionScript) continue;

		for (USCS_Node* Node : Gen->SimpleConstructionScript->GetAllNodes())
		{
			if (Node && Node->GetVariableName() == Wanted)
			{
				return Cast<USceneComponent>(Node->ComponentTemplate);
			}
		}
	}
#endif
	return nullptr;
}

bool UAzr_Animation::ValidateTargetForAuthoring(const TCHAR* Action) const
{
	const AActor* Owner = GetOwner();
	const USceneComponent* Target = ResolveTarget();

	if (!Target)
	{
		UE_LOG(LogTemp, Warning, TEXT("Azr Animation on %s: %s needs Target Component set to the component you want to move."),
			*GetNameSafe(Owner), Action);
		return false;
	}

	if (Owner && Target == Owner->GetRootComponent())
	{
		UE_LOG(LogTemp, Warning, TEXT("Azr Animation on %s: %s cannot use the actor's root -- its relative transform is its world transform, so the step would break when the actor is moved. Put the mesh under a scene root and target the mesh."),
			*GetNameSafe(Owner), Action);
		return false;
	}

	return true;
}

// --- SOUND ---

void UAzr_Animation::HandleStepSound(int32 Index, float StepAlpha, bool bMoving)
{
	if (!Steps.IsValidIndex(Index)) return;

	const FAzr_AnimSound& Cfg = Steps[Index].Sound;
	if (!Cfg.Sound) return;

	// Dragging the preview slider should not blast audio across the editor, and a component does not
	// tick outside a game world, so a WhileMoving loop started here would never be told to stop.
	const UWorld* World = GetWorld();
	if (!World || !World->IsGameWorld()) return;

	USceneComponent* Target = ResolveTarget();
	if (!Target) return;

	if (Cfg.Trigger == EAzr_AnimSoundTrigger::WhileMoving)
	{
		const bool bActive = StepAlpha > 0.f && StepAlpha < 1.f && bMoving;

		if (bActive && !StepLoops[Index])
		{
			StepLoops[Index] = UGameplayStatics::SpawnSoundAttached(Cfg.Sound, Target);

			// The alpha is pushed in, so nothing will tell us when it stops arriving -- ticking is the
			// only way to notice the hand went still.
			SetComponentTickEnabled(true);
		}
		else if (!bActive && StepLoops[Index])
		{
			StepLoops[Index]->Stop();
			StepLoops[Index] = nullptr;
		}
		return;
	}

	const bool bAtTrigger = (Cfg.Trigger == EAzr_AnimSoundTrigger::OnStepStart)
		? StepAlpha > 0.f
		: StepAlpha >= 1.f;

	TArray<uint8>& Fired = (Cfg.Trigger == EAzr_AnimSoundTrigger::OnStepStart) ? StartFired : EndFired;
	if (!Fired.IsValidIndex(Index)) return;

	if (bAtTrigger && !Fired[Index])
	{
		Fired[Index] = 1;

		if (Cfg.bLoop)
		{
			StepLoops[Index] = UGameplayStatics::SpawnSoundAttached(Cfg.Sound, Target);
		}
		else
		{
			UGameplayStatics::SpawnSoundAttached(Cfg.Sound, Target);
		}
		return;
	}

	// Re-arming is opt-in because a latch can rock the alpha over a boundary several times a second,
	// and a clunk that re-fires every time reads as a fault rather than a detail.
	if (!bAtTrigger && Fired[Index] && Cfg.bRetrigger)
	{
		const float Backed = (Cfg.Trigger == EAzr_AnimSoundTrigger::OnStepStart) ? StepAlpha : 1.f - StepAlpha;
		if (Backed <= -RetriggerDeadzone || Backed >= RetriggerDeadzone)
		{
			Fired[Index] = 0;

			if (StepLoops[Index])
			{
				StepLoops[Index]->Stop();
				StepLoops[Index] = nullptr;
			}
		}
	}
}

void UAzr_Animation::StopAllLoops()
{
	for (TObjectPtr<UAudioComponent>& Loop : StepLoops)
	{
		if (Loop)
		{
			Loop->Stop();
			Loop = nullptr;
		}
	}
}

// --- MATERIAL ---

UMaterialInstanceDynamic* UAzr_Animation::GetMID(int32 Slot)
{
	if (TObjectPtr<UMaterialInstanceDynamic>* Existing = SlotMIDs.Find(Slot))
	{
		if (*Existing) return *Existing;
	}

	UPrimitiveComponent* Prim = Cast<UPrimitiveComponent>(ResolveTarget());
	if (!Prim) return nullptr;

	UMaterialInterface* Current = Prim->GetMaterial(Slot);
	if (!Current)
	{
		UE_LOG(LogTemp, Warning, TEXT("Azr Animation on %s: material slot %d is empty, so no parameter on it can be driven."),
			*GetNameSafe(GetOwner()), Slot);
		return nullptr;
	}

	// An empty slot resolves to WorldGridMaterial, which carries none of the authored parameters -- so
	// the MID is built successfully, every SetParameterValue succeeds, and nothing ever changes. The
	// parent's name is the only thing that gives it away, so say so once rather than let it be hunted.
	if (GetNameSafe(Current).Contains(TEXT("WorldGridMaterial")))
	{
		UE_LOG(LogTemp, Warning, TEXT("Azr Animation on %s: slot %d falls back to WorldGridMaterial. Assign a real material or the parameter writes will do nothing."),
			*GetNameSafe(GetOwner()), Slot);
	}

	UMaterialInstanceDynamic* MID = Prim->CreateDynamicMaterialInstance(Slot, Current);
	SlotMIDs.Add(Slot, MID);
	return MID;
}

void UAzr_Animation::ApplyMaterialTargets(int32 Index, float EasedAlpha)
{
	if (!Steps.IsValidIndex(Index)) return;

	for (const FAzr_AnimMaterialTarget& MatTarget : Steps[Index].MaterialTargets)
	{
		if (MatTarget.ParameterName.IsNone()) continue;

		UMaterialInstanceDynamic* MID = GetMID(MatTarget.MaterialSlot);
		if (!MID) continue;

		const FString Key = MaterialKey(MatTarget.MaterialSlot, MatTarget.ParameterName);

		if (MatTarget.bIsColor)
		{
			// Captured on first touch rather than at BeginPlay: the rest value is whatever the material
			// shipped with, and reading it lazily means a parameter added later still gets a sane base.
			if (!RestColors.Contains(Key))
			{
				FLinearColor Existing = FLinearColor::White;
				MID->GetVectorParameterValue(MatTarget.ParameterName, Existing);
				RestColors.Add(Key, Existing);
			}

			MID->SetVectorParameterValue(MatTarget.ParameterName,
				FMath::Lerp(RestColors[Key], MatTarget.Color, EasedAlpha));
		}
		else
		{
			if (!RestScalars.Contains(Key))
			{
				float Existing = 0.f;
				MID->GetScalarParameterValue(MatTarget.ParameterName, Existing);
				RestScalars.Add(Key, Existing);
			}

			MID->SetScalarParameterValue(MatTarget.ParameterName,
				FMath::Lerp(RestScalars[Key], MatTarget.Scalar, EasedAlpha));
		}
	}
}

// --- AUTHORING ---

#if WITH_EDITOR

void UAzr_Animation::AddStepFromCurrentPose()
{
	if (!ValidateTargetForAuthoring(TEXT("Add Step From Current Pose"))) return;
	AddStepFromTransform(ResolveTarget()->GetRelativeTransform());
}

void UAzr_Animation::UpdateStepFromCurrentPose()
{
	if (!ValidateTargetForAuthoring(TEXT("Update Step From Current Pose"))) return;
	UpdateStepFromTransform(ResolveTarget()->GetRelativeTransform());
}

void UAzr_Animation::SetRestPoseFromCurrent()
{
	if (!ValidateTargetForAuthoring(TEXT("Set Rest Pose From Current"))) return;
	SetRestPoseFromTransform(ResolveTarget()->GetRelativeTransform());
}

// The pose arrives as an argument rather than being read here, because the Blueprint-editor panel
// cannot use ResolveTarget at all: a component added in the Blueprint editor is an SCS template whose
// outer chain holds no actor, so there is nothing to look the target up on. That panel walks the
// construction script instead and hands the result in.

void UAzr_Animation::AddStepFromTransform(const FTransform& Pose)
{
	// Adopting the current pose as the start when none was recorded is what made the first press
	// useless: drag the cube somewhere, press once, and A and B were both the dragged pose, so the
	// animation had no distance to cover and nothing said so. Two presses, in order, or nothing.
	if (!bStartRecorded)
	{
		UE_LOG(LogTemp, Warning, TEXT("Azr Animation on %s: press Record Start Position before saving a step, or there is nothing to move away from."),
			*GetNameSafe(GetOwner()));
		return;
	}

	Modify();
	if (AActor* Owner = GetOwner()) Owner->Modify();

	FAzr_AnimStep NewStep;
	NewStep.Target = Pose;
	NewStep.Label = FString::Printf(TEXT("Step %d"), Steps.Num() + 1);
	Steps.Add(NewStep);

	EditStepIndex = Steps.Num() - 1;
	RebuildTimeline();

#if WITH_EDITORONLY_DATA
	// Park the preview at the end, which is the pose that was just saved. Leaving it at zero is what
	// made recording look broken: the next thing to evaluate would put the mesh back at the start,
	// the drag appeared to be thrown away, and the step it had actually just recorded was invisible.
	PreviewAlpha = 1.f;
#endif

	UE_LOG(LogTemp, Log, TEXT("Azr Animation on %s: saved step %d. Start is %s, this step is %s."),
		*GetNameSafe(GetOwner()), Steps.Num(),
		*RestTransform.GetLocation().ToCompactString(), *Pose.GetLocation().ToCompactString());

	// The component is left where it was dragged on purpose, so the next step is authored by carrying
	// on from this pose rather than starting over from rest every time.
}

void UAzr_Animation::UpdateStepFromTransform(const FTransform& Pose)
{
	if (!Steps.IsValidIndex(EditStepIndex)) return;

	Modify();
	if (AActor* Owner = GetOwner()) Owner->Modify();

	Steps[EditStepIndex].Target = Pose;
	RebuildTimeline();
}

void UAzr_Animation::SetRestPoseFromTransform(const FTransform& Pose)
{
	Modify();
	if (AActor* Owner = GetOwner()) Owner->Modify();

	RestTransform = Pose;
	bStartRecorded = true;

#if WITH_EDITORONLY_DATA
	// The start is alpha zero, so show it.
	PreviewAlpha = 0.f;
#endif

	UE_LOG(LogTemp, Log, TEXT("Azr Animation on %s: start position recorded at %s."),
		*GetNameSafe(GetOwner()), *Pose.GetLocation().ToCompactString());
}

void UAzr_Animation::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
	Super::PostEditChangeProperty(PropertyChangedEvent);

	const FName Changed = PropertyChangedEvent.GetPropertyName();

	if (Changed == GET_MEMBER_NAME_CHECKED(UAzr_Animation, PreviewAlpha))
	{
		// Same evaluation the runtime uses, which is the whole value of the slider: what it shows in
		// the viewport is what will actually play.
		EvaluateAtAlpha(PreviewAlpha);
		return;
	}

	// Anything that can change the shape of the timeline invalidates the cached windows.
	RebuildTimeline();
}

#endif
