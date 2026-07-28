

#include "Azr_TeleportArea.h"
#include "Components/BoxComponent.h"
#include "DrawDebugHelpers.h"

TArray<TWeakObjectPtr<AAzr_TeleportArea>> AAzr_TeleportArea::Registry;

AAzr_TeleportArea::AAzr_TeleportArea()
{
	// Ticks only to render the debug fill (see ShouldTickIfViewportsOnly for the editor viewport);
	// BeginPlay switches ticking off entirely when the fill is disabled.
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;

	Area = CreateDefaultSubobject<UBoxComponent>(TEXT("Area"));
	SetRootComponent(Area);
	Area->SetBoxExtent(FVector(200.0f, 200.0f, 100.0f));

	// No collision at all: containment is a math test, so the volume never participates in traces
	// (and can't block the teleport arc or the hand scanners).
	Area->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	Area->SetGenerateOverlapEvents(false);

	// Visible while authoring, invisible in game.
	Area->ShapeColor = FColor(40, 200, 120);
	Area->SetHiddenInGame(true);
	Area->bDrawOnlyIfSelected = false;
}

void AAzr_TeleportArea::BeginPlay()
{
	Super::BeginPlay();

	bIsEnabled = bStartEnabled;
	Registry.AddUnique(this);

	SetActorTickEnabled(bShowDebug); // nothing to do per-frame unless the fill is being drawn
}

void AAzr_TeleportArea::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	DrawDebugVolume();
}

void AAzr_TeleportArea::DrawDebugVolume() const
{
#if ENABLE_DRAW_DEBUG
	if (!bShowDebug || !Area) return;

	const UWorld* World = GetWorld();
	if (!World) return;

	const FTransform& Xf = Area->GetComponentTransform();
	const FVector Center = Xf.GetLocation();
	const FVector Extent = Area->GetScaledBoxExtent();
	const FQuat Rotation = Xf.GetRotation();

	// Green while walkable, grey once disabled — so a gated-off room reads at a glance.
	const uint8 Alpha = static_cast<uint8>(FMath::Clamp(DebugFillOpacity, 0, 255));
	const FColor Fill = bIsEnabled ? FColor(35, 200, 90, Alpha) : FColor(130, 130, 130, Alpha / 2);
	const FColor Edge = bIsEnabled ? FColor(60, 255, 130, 255) : FColor(160, 160, 160, 255);

	// Lifetime -1 + non-persistent = one frame; redrawn every tick, so it stays stable.
	DrawDebugSolidBox(World, Center, Extent, Rotation, Fill, false, -1.0f, 0);
	DrawDebugBox(World, Center, Extent, Rotation, Edge, false, -1.0f, 0, 2.0f);
#endif
}

void AAzr_TeleportArea::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Registry.Remove(this);
	Super::EndPlay(EndPlayReason);
}

void AAzr_TeleportArea::EnableArea()
{
	bIsEnabled = true;
}

void AAzr_TeleportArea::DisableArea()
{
	bIsEnabled = false;
}

bool AAzr_TeleportArea::ContainsPoint(const FVector& WorldPoint) const
{
	if (!Area) return false;

	// Into the box's own space, so a rotated or scaled box works without any collision query.
	// InverseTransformPosition divides out the scale, so compare against the UNSCALED extent and
	// convert the tolerance into that same space.
	const FTransform& Xf = Area->GetComponentTransform();
	const FVector Local = Xf.InverseTransformPosition(WorldPoint);
	const FVector Extent = Area->GetUnscaledBoxExtent();
	const FVector Scale = Xf.GetScale3D();

	const float ScaleZ = FMath::Abs(Scale.Z);
	const float LocalTolZ = (ScaleZ > KINDA_SMALL_NUMBER) ? (VerticalTolerance / ScaleZ) : VerticalTolerance;

	return FMath::Abs(Local.X) <= Extent.X
		&& FMath::Abs(Local.Y) <= Extent.Y
		&& FMath::Abs(Local.Z) <= (Extent.Z + LocalTolZ);
}

bool AAzr_TeleportArea::IntersectSegment(const FVector& Start, const FVector& End, FVector& OutLanding) const
{
	if (!Area) return false;

	// Work in the box's own space so rotation/scale need no special handling.
	const FTransform& Xf = Area->GetComponentTransform();
	const FVector LocalStart = Xf.InverseTransformPosition(Start);
	const FVector LocalEnd = Xf.InverseTransformPosition(End);
	const FVector Extent = Area->GetUnscaledBoxExtent();
	const FBox LocalBox(-Extent, Extent);

	FVector HitLocation, HitNormal;
	float HitTime = 0.0f;
	if (!FMath::LineExtentBoxIntersection(LocalBox, LocalStart, LocalEnd, FVector::ZeroVector, HitLocation, HitNormal, HitTime))
	{
		return false;
	}

	// Stand on the top face at the crossing point, not wherever the arc happened to pierce the box.
	HitLocation.Z = Extent.Z;
	OutLanding = Xf.TransformPosition(HitLocation);
	return true;
}

bool AAzr_TeleportArea::FindArcLanding(const UWorld* World, const TArray<FVector>& PathPoints, FVector& OutLanding, int32& OutSegmentIndex)
{
	if (!World || PathPoints.Num() < 2) return false;

	// Walk the arc in order so the FIRST surface along the path wins.
	for (int32 Index = 0; Index < PathPoints.Num() - 1; ++Index)
	{
		for (const TWeakObjectPtr<AAzr_TeleportArea>& Ptr : Registry)
		{
			const AAzr_TeleportArea* AreaActor = Ptr.Get();
			if (!AreaActor || !AreaActor->bIsEnabled || !AreaActor->bUseAsLandingSurface) continue;
			if (AreaActor->GetWorld() != World) continue;

			FVector Landing;
			if (AreaActor->IntersectSegment(PathPoints[Index], PathPoints[Index + 1], Landing))
			{
				OutLanding = Landing;
				OutSegmentIndex = Index;
				return true;
			}
		}
	}
	return false;
}

bool AAzr_TeleportArea::HasAnyArea(const UWorld* World)
{
	if (!World) return false;

	for (const TWeakObjectPtr<AAzr_TeleportArea>& Ptr : Registry)
	{
		const AAzr_TeleportArea* AreaActor = Ptr.Get();
		if (AreaActor && AreaActor->bIsEnabled && AreaActor->GetWorld() == World)
		{
			return true;
		}
	}
	return false;
}

bool AAzr_TeleportArea::IsPointInAnyArea(const UWorld* World, const FVector& WorldPoint)
{
	if (!World) return false;

	for (const TWeakObjectPtr<AAzr_TeleportArea>& Ptr : Registry)
	{
		const AAzr_TeleportArea* AreaActor = Ptr.Get();
		if (AreaActor && AreaActor->bIsEnabled && AreaActor->GetWorld() == World && AreaActor->ContainsPoint(WorldPoint))
		{
			return true;
		}
	}
	return false;
}
