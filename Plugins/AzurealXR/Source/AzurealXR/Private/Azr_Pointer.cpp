

#include "Azr_Pointer.h"
#include "Azr_Debug.h"
#include "GameFramework/Actor.h"
#include "Kismet/KismetMathLibrary.h"

UAzr_Pointer::UAzr_Pointer()
{
	PrimaryComponentTick.bCanEverTick = true;
	// OPTIMIZATION: Start asleep. Only wake up when tracking something.
	PrimaryComponentTick.bStartWithTickEnabled = false;

	PointerMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PointerMesh"));
	PointerMesh->SetupAttachment(this);
	PointerMesh->SetVisibility(false);
	PointerMesh->SetCollisionEnabled(ECollisionEnabled::NoCollision);

	TrackingMode = 0;
}

void UAzr_Pointer::BeginPlay()
{
	Super::BeginPlay();
	// Ensure we start clean
	DisablePointer();
}

void UAzr_Pointer::EnablePointer_TargetComponent(USceneComponent* Target)
{
	if (!Target)
	{
		DisablePointer();
		return;
	}

	// Already pointing at exactly this, so there is nothing to do.
	//
	// Callers drive this from Tick -- Latch does, every frame it is enabled -- on the assumption that
	// the pointer needs re-aiming at a handle that moves. It does not: this component's own Tick reads
	// the tracked component's location afresh each frame, so once told, it follows. Re-assigning the
	// same target was costing a visibility change and a tick-enable per frame for no change at all.
	//
	// The trace sits after this guard on purpose. A call that changes nothing is not an event, and
	// logging it buried the debugger's own trail the first time it was opened.
	if (TrackingMode == 2 && TrackedComponent.Get() == Target)
	{
		return;
	}

	AZR_TRACE();

	// Smart Pointer Assignment (Safe)
	TrackedComponent = Target;
	TrackingMode = 2;

	PointerMesh->SetVisibility(true);

	// Wake up Tick
	SetComponentTickEnabled(true);
}

void UAzr_Pointer::EnablePointer_TargetLocation(FVector TargetLocation)
{
	// Same guard as the component version, for the same reason. A location has to compare loosely --
	// an aim recomputed each frame will not land on the identical float twice.
	if (TrackingMode == 1 && TrackedLocation.Equals(TargetLocation, 0.01f))
	{
		return;
	}

	AZR_TRACE();
	TrackedLocation = TargetLocation;
	TrackingMode = 1;

	PointerMesh->SetVisibility(true);

	// Wake up Tick
	SetComponentTickEnabled(true);
}

void UAzr_Pointer::DisablePointer()
{
	AZR_TRACE();
	TrackingMode = 0;
	TrackedComponent = nullptr;

	PointerMesh->SetVisibility(false);

	// Sleepy Principle: Stop ticking to save CPU
	SetComponentTickEnabled(false);
}

void UAzr_Pointer::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector TargetPos = FVector::ZeroVector;
	bool bHasValidTarget = false;

	// --- 1. GET TARGET POSITION ---
	if (TrackingMode == 2) // Component Mode
	{
		// SAFETY CHECK: IsValid() checks if the object is still alive in memory
		if (TrackedComponent.IsValid())
		{
			// Get() retrieves the raw pointer safely
			TargetPos = TrackedComponent.Get()->GetComponentLocation();
			bHasValidTarget = true;
		}
		else
		{
			// Object was destroyed (e.g., broke/died). 
			// Auto-shutdown immediately to prevent errors.
			DisablePointer();
			return;
		}
	}
	else if (TrackingMode == 1) // Location Mode
	{
		TargetPos = TrackedLocation;
		bHasValidTarget = true;
	}

	if (!bHasValidTarget) return;

	// --- 2. CALCULATE ROTATION ---
	FVector StartPos = GetComponentLocation();

	if (bFlattenZ)
	{
		StartPos.Z = 0.0f;
		TargetPos.Z = 0.0f;
	}

	FRotator TargetRot = UKismetMathLibrary::FindLookAtRotation(StartPos, TargetPos);

	// --- 3. APPLY ROTATION ---
	// RInterpTo gives a smooth turning effect
	FRotator NewRot = FMath::RInterpTo(GetComponentRotation(), TargetRot, DeltaTime, RotationSpeed);

	SetWorldRotation(NewRot);
}