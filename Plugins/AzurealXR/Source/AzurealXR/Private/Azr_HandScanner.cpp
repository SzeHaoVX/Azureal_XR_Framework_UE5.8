

#include "Azr_HandScanner.h"
#include "Components/PrimitiveComponent.h"
#include "Azr_Interactable.h"
#include "Azr_LatchZone.h" // <-- NEW: Include our Smart Hub
#include "DrawDebugHelpers.h"

UAzr_HandScanner::UAzr_HandScanner()
{
	PrimaryComponentTick.bCanEverTick = true;
	PrimaryComponentTick.bStartWithTickEnabled = false;

	InteractProfile = FName("Azr_Collision");
	bIsRightHand = true;
	bShowDebugVisuals = false;

	// NOTE: the overlap capsules are intentionally NOT created here. See CreateScanCapsules() and
	// the header note — creating them as (nested) default subobjects tripped the UE 5.8
	// "Template Mismatch during attachment" ensure on Blueprint subclasses of the owning pawn.
}

void UAzr_HandScanner::CreateScanCapsules()
{
	// Build both overlap capsules at runtime instead of as default subobjects. RF_Transient so they
	// are never serialized into the map/Blueprint; guarded so re-entry never double-creates.
	//
	// Hand tags live on the CAPSULES (not the scanner): interactables/zones read the overlapping
	// component's tag to know a hand is present and which hand it is. InteractCapsule = normal hand
	// ("Left"/"Right"); DistanceGrabCapsule = distance hand ("DistanceLeft"/"DistanceRight"). These
	// used to be authored on the InteractCapsule sub-component inside BP_Azr_Pawn; now that the
	// capsules are code-created they MUST be tagged here or close-range detection (indicator expand,
	// Touch, Latch hand-filtering) silently stops working. Tag BEFORE RegisterComponent so the tag is
	// present the instant overlaps begin firing.
	const bool bRight = ComponentHasTag(FName("Right")) || bIsRightHand;

	if (!InteractCapsule)
	{
		InteractCapsule = NewObject<UCapsuleComponent>(this, TEXT("InteractCapsule"), RF_Transient);
		InteractCapsule->SetupAttachment(this);
		InteractCapsule->ComponentTags.Add(bRight ? FName("Right") : FName("Left"));
		InteractCapsule->RegisterComponent();
		InteractCapsule->SetCapsuleSize(InteractCapsuleRadius, InteractCapsuleHalfHeight);
		InteractCapsule->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		InteractCapsule->SetCollisionProfileName(InteractProfile);
		InteractCapsule->SetGenerateOverlapEvents(true);
	}

	if (!DistanceGrabCapsule)
	{
		DistanceGrabCapsule = NewObject<UCapsuleComponent>(this, TEXT("DistanceGrabCapsule"), RF_Transient);
		DistanceGrabCapsule->SetupAttachment(this);
		DistanceGrabCapsule->ComponentTags.Add(bRight ? FName("DistanceRight") : FName("DistanceLeft"));
		DistanceGrabCapsule->RegisterComponent();
		DistanceGrabCapsule->SetCapsuleSize(DistanceCapsuleRadius, DistanceCapsuleLength);
		DistanceGrabCapsule->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
		DistanceGrabCapsule->SetCollisionProfileName(InteractProfile);
		DistanceGrabCapsule->SetGenerateOverlapEvents(true);
	}
}

void UAzr_HandScanner::UpdateDistanceCapsuleShape()
{
	if (!DistanceGrabCapsule) return;

	// Keep whatever size is set on the capsule's Shape (Half Height / Radius); just aim it and push
	// it out so the capsule starts at the hand and extends along its aim.
	//
	// The aim is applied HERE, on the capsule itself, never by rotating the scanner: the scanner's
	// transform doubles as the frame Azr_Grab snaps held objects to (SnapActorToHand passes `this`),
	// so rotating the scanner to steer this beam also rotates every grabbed object off its authored
	// ghost-hand pose. DistanceCapsuleAim keeps the two independent.
	const float HalfLen = DistanceGrabCapsule->GetUnscaledCapsuleHalfHeight();

	// Default (+X, hand forward) rotated by the tunable aim.
	const FVector Dir = DistanceCapsuleAim.RotateVector(FVector::ForwardVector).GetSafeNormal();
	if (Dir.IsNearlyZero()) return;

	// A capsule's long axis is its local +Z, so build a rotation whose Z lies along Dir, then push
	// the capsule out by half its length so it starts at the hand instead of straddling it.
	DistanceGrabCapsule->SetRelativeRotation(FRotationMatrix::MakeFromZ(Dir).Rotator());
	DistanceGrabCapsule->SetRelativeLocation(Dir * HalfLen);
}

void UAzr_HandScanner::BeginPlay()
{
	Super::BeginPlay();

	CreateScanCapsules(); // build the overlap capsules now (runtime, not default subobjects)

	SetComponentTickEnabled(bShowDebugVisuals);

	if (InteractCapsule)
	{
		InteractCapsule->OnComponentBeginOverlap.AddDynamic(this, &UAzr_HandScanner::OnCapsuleOverlap);
		InteractCapsule->OnComponentEndOverlap.AddDynamic(this, &UAzr_HandScanner::OnCapsuleEndOverlap);
	}

	if (DistanceGrabCapsule)
	{
		UpdateDistanceCapsuleShape(); // aim forward + push out from the hand (tags set in CreateScanCapsules)

		DistanceGrabCapsule->OnComponentBeginOverlap.AddDynamic(this, &UAzr_HandScanner::OnDistanceCapsuleOverlap);
		DistanceGrabCapsule->OnComponentEndOverlap.AddDynamic(this, &UAzr_HandScanner::OnDistanceCapsuleEndOverlap);
	}
}

void UAzr_HandScanner::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (InteractCapsule && bShowDebugVisuals)
	{
		DrawDebugCapsule(GetWorld(), InteractCapsule->GetComponentLocation(),
			InteractCapsule->GetScaledCapsuleHalfHeight(),
			InteractCapsule->GetScaledCapsuleRadius(),
			InteractCapsule->GetComponentQuat(), FColor::Red, false, -1.0f, 0, 1.0f);

		if (DistanceGrabCapsule)
		{
			DrawDebugCapsule(GetWorld(), DistanceGrabCapsule->GetComponentLocation(),
				DistanceGrabCapsule->GetScaledCapsuleHalfHeight(),
				DistanceGrabCapsule->GetScaledCapsuleRadius(),
				DistanceGrabCapsule->GetComponentQuat(), FColor::Yellow, false, -1.0f, 0, 1.0f);
		}

		if (CurrentHoveredComponent.IsValid())
		{
			DrawDebugBox(GetWorld(), CurrentHoveredComponent.Get()->GetOwner()->GetActorLocation(), FVector(11, 11, 11), FColor::Green, false, -1.0f, 0, 2.0f);
		}

		if (CurrentHoveredLatch.IsValid())
		{
			DrawDebugBox(GetWorld(), CurrentHoveredLatch.Get()->GetComponentLocation(), FVector(8, 8, 8), FColor::Blue, false, -1.0f, 0, 2.0f);
		}
	}
}

void UAzr_HandScanner::OnCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == GetOwner() || !OtherComp) return;
	if (OtherComp->GetCollisionProfileName() != InteractProfile) return;

	// Check for Grabbables (Kept original logic)
	UAzr_Grab* FoundGrab = OtherActor->FindComponentByClass<UAzr_Grab>();
	if (FoundGrab)
	{
		OverlappedGrabbables.AddUnique(FoundGrab);
	}

	// --- THE SMART HUB BRIDGE ---
	// Instead of searching the whole Actor, we ask the exact collision box we touched
	UAzr_LatchZone* FoundZone = Cast<UAzr_LatchZone>(OtherComp);
	if (FoundZone && FoundZone->CurrentActiveLatch)
	{
		// Add the specific Active Brain to our array!
		OverlappedLatches.AddUnique(FoundZone->CurrentActiveLatch);
	}

	UpdateBestCandidate();
}

void UAzr_HandScanner::OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!OtherActor || !OtherComp) return;

	// Cleanup Grabbables (Kept original logic)
	for (int32 i = OverlappedGrabbables.Num() - 1; i >= 0; i--)
	{
		if (!OverlappedGrabbables[i].IsValid() || OverlappedGrabbables[i]->GetOwner() == OtherActor)
			OverlappedGrabbables.RemoveAt(i);
	}

	// --- THE SMART HUB CLEANUP ---
	UAzr_LatchZone* LeftZone = Cast<UAzr_LatchZone>(OtherComp);
	for (int32 i = OverlappedLatches.Num() - 1; i >= 0; i--)
	{
		if (!OverlappedLatches[i].IsValid())
		{
			OverlappedLatches.RemoveAt(i);
			continue;
		}

		// Only remove the latch if it belongs to the specific Zone we just left.
		// (We no longer wipe all latches on the OtherActor! This allows multiple components to thrive.)
		if (LeftZone && OverlappedLatches[i].Get() == LeftZone->CurrentActiveLatch)
		{
			OverlappedLatches.RemoveAt(i);
		}
	}

	UpdateBestCandidate();
}

void UAzr_HandScanner::OnDistanceCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (!OtherActor || OtherActor == GetOwner() || !OtherComp) return;
	if (OtherComp->GetCollisionProfileName() != InteractProfile) return;

	if (UAzr_Grab* FoundGrab = OtherActor->FindComponentByClass<UAzr_Grab>())
	{
		DistanceOverlappedGrabbables.AddUnique(FoundGrab);
	}

	UpdateBestCandidate();
}

void UAzr_HandScanner::OnDistanceCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (!OtherActor || !OtherComp) return;

	for (int32 i = DistanceOverlappedGrabbables.Num() - 1; i >= 0; i--)
	{
		if (!DistanceOverlappedGrabbables[i].IsValid() || DistanceOverlappedGrabbables[i]->GetOwner() == OtherActor)
			DistanceOverlappedGrabbables.RemoveAt(i);
	}

	UpdateBestCandidate();
}

void UAzr_HandScanner::UpdateBestCandidate()
{
	const FVector HandLocation = GetComponentLocation();

	// --- 1. Interact-capsule grabbables (close range) take priority; pick the nearest ---
	CurrentHoveredComponent = nullptr;
	float BestDistSq = TNumericLimits<float>::Max();
	for (int32 i = OverlappedGrabbables.Num() - 1; i >= 0; i--)
	{
		if (!OverlappedGrabbables[i].IsValid()) { OverlappedGrabbables.RemoveAt(i); continue; }

		UAzr_Grab* Grab = OverlappedGrabbables[i].Get();
		if (!Grab->IsComponentTickEnabled() || !Grab->GetOwner()) continue;

		const float DistSq = FVector::DistSquared(HandLocation, Grab->GetOwner()->GetActorLocation());
		if (DistSq < BestDistSq) { BestDistSq = DistSq; CurrentHoveredComponent = Grab; }
	}

	// --- 2. Distance-capsule grabbables: only objects that opted in; pick the nearest ---
	if (!CurrentHoveredComponent.IsValid())
	{
		float BestReachSq = TNumericLimits<float>::Max();
		for (int32 i = DistanceOverlappedGrabbables.Num() - 1; i >= 0; i--)
		{
			if (!DistanceOverlappedGrabbables[i].IsValid()) { DistanceOverlappedGrabbables.RemoveAt(i); continue; }

			UAzr_Grab* Grab = DistanceOverlappedGrabbables[i].Get();
			if (!Grab->IsComponentTickEnabled() || !Grab->GetOwner()) continue;
			if (!Grab->IsDistanceGrabActive()) continue; // object must opt in

			const float DistSq = FVector::DistSquared(HandLocation, Grab->GetOwner()->GetActorLocation());
			if (DistSq < BestReachSq) { BestReachSq = DistSq; CurrentHoveredComponent = Grab; }
		}
	}

	// --- 3. LATCHES (unchanged) ---
	CurrentHoveredLatch = nullptr;
	for (int32 i = OverlappedLatches.Num() - 1; i >= 0; i--)
	{
		if (OverlappedLatches[i].IsValid())
		{
			if (OverlappedLatches[i]->IsComponentTickEnabled())
			{
				CurrentHoveredLatch = OverlappedLatches[i];
				break;
			}
		}
		else { OverlappedLatches.RemoveAt(i); }
	}
}

void UAzr_HandScanner::ProcessGrabInput(bool bIsPressed)
{
	if (bIsPressed)
	{
		
		if (bIsGripPressed) return;
		bIsGripPressed = true;

		// Re-evaluate now so Distance Grab range is checked against the hand's current position.
		UpdateBestCandidate();

		if (CurrentHoveredLatch.IsValid() && CurrentHoveredLatch->IsComponentTickEnabled() && !CurrentHeldLatch.IsValid())
		{
			CurrentHeldLatch = CurrentHoveredLatch;
			CurrentHeldLatch->GrabLatch(this);
			return;
		}

		if (CurrentHoveredComponent.IsValid() && CurrentHoveredComponent->IsComponentTickEnabled() && !CurrentHeldComponent.IsValid() && !CurrentHoveredComponent->IsHeld())
		{
			CurrentHeldComponent = CurrentHoveredComponent;
			USceneComponent* TargetSnap = nullptr;
			if (AAzr_Interactable* BaseInteractable = Cast<AAzr_Interactable>(CurrentHeldComponent.Get()->GetOwner()))
			{
				TargetSnap = BaseInteractable->GetSnapPoint(bIsRightHand);
			}
			CurrentHeldComponent.Get()->SnapActorToHand(this, TargetSnap);
		}
	}
	else
	{
		
		bIsGripPressed = false;

		if (CurrentHeldLatch.IsValid())
		{
			CurrentHeldLatch->ReleaseSpecificHand(this);
			CurrentHeldLatch = nullptr;
		}

		if (CurrentHeldComponent.IsValid())
		{
			CurrentHeldComponent.Get()->ReleaseHand();
			CurrentHeldComponent = nullptr;
		}

		UpdateBestCandidate();
	}
}