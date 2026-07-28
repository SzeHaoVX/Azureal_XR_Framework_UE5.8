

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Azr_TeleportArea.generated.h"

class UBoxComponent;

/**
 * A hand-authored walkable volume: drop one in the level, resize it over the floor the player is
 * allowed to teleport onto. Teleport is valid only where the aim lands inside an enabled area.
 *
 * This replaces NavMeshBoundsVolume for locomotion. Validation is a pure point-in-box test, so the
 * box needs NO collision and nothing has to be baked/generated — which is what makes upper floors,
 * mezzanines and tight closets (where navmesh refuses to generate because of the agent radius)
 * just work: place a box there and it is walkable.
 *
 * Areas can be toggled at runtime (EnableArea/DisableArea) to gate off rooms per training step.
 */
UCLASS(ClassGroup = (AzurealXR))
class AZUREALXR_API AAzr_TeleportArea : public AActor
{
	GENERATED_BODY()

public:
	AAzr_TeleportArea();

	// The walkable box. Resize with Box Extent or the actor's scale; rotation is respected.
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
	UBoxComponent* Area;

	// Whether this area is active when play begins.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Settings")
	bool bStartEnabled = true;

	// Treat this volume as a standing surface in its own right: the teleport arc lands on the box's
	// TOP face instead of passing through to the floor below. Use it for platforms/scaffolds that
	// have no floor collision, or to define a standing plane in mid-air. Make the box thin (small Z
	// extent) so the top face sits exactly where you want the player to stand.
	// Leave OFF for normal floor areas — those want the arc to reach the real floor.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Settings")
	bool bUseAsLandingSurface = false;

	// Extra slack (world units) above/below the box, so a floor hit slightly outside it still counts.
	// Lets you drop the box roughly over the floor instead of aligning it exactly.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Settings", meta = (ClampMin = "0.0"))
	float VerticalTolerance = 25.0f;

	// Fill the volume with a semi-transparent green solid (like a NavMeshBounds volume) so the
	// walkable space is obvious while authoring. Draws in the editor viewport and in play; turns
	// grey while the area is disabled. Never shipped-visible — it is debug drawing only.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Debug")
	bool bShowDebug = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Debug", meta = (ClampMin = "0", ClampMax = "255"))
	int32 DebugFillOpacity = 60;

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void EnableArea();

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void DisableArea();

	UFUNCTION(BlueprintPure, Category = "Azureal|State")
	bool IsAreaEnabled() const { return bIsEnabled; }

	// Pure math containment test — no collision query, so the box needs no collision setup.
	bool ContainsPoint(const FVector& WorldPoint) const;

	// True if any enabled area in this world contains the point.
	static bool IsPointInAnyArea(const UWorld* World, const FVector& WorldPoint);

	// True if this world has at least one enabled area (drives the Auto validation mode).
	static bool HasAnyArea(const UWorld* World);

	// Segment vs this box (OBB). OutLanding is the crossing point snapped to the box's top face.
	bool IntersectSegment(const FVector& Start, const FVector& End, FVector& OutLanding) const;

	// Walks an arc polyline and returns the FIRST landing on any enabled landing-surface area.
	// OutSegmentIndex is the polyline segment it landed on, so the beam can be trimmed there.
	static bool FindArcLanding(const UWorld* World, const TArray<FVector>& PathPoints, FVector& OutLanding, int32& OutSegmentIndex);

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void Tick(float DeltaTime) override;

	// Lets the debug fill render in the editor viewport, not just in play.
	virtual bool ShouldTickIfViewportsOnly() const override { return bShowDebug; }

private:
	void DrawDebugVolume() const;

	bool bIsEnabled = true;

	// Live areas, so aiming never has to run GetAllActorsOfClass. Entries are per-world; the
	// statics filter by world so PIE and editor worlds never see each other's areas.
	static TArray<TWeakObjectPtr<AAzr_TeleportArea>> Registry;
};
