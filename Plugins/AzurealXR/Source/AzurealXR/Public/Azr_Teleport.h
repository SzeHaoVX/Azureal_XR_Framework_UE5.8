

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Components/SplineComponent.h"
#include "Components/SplineMeshComponent.h"
#include "GameFramework/Actor.h" 
#include "Azr_Teleport.generated.h"

/** How a teleport destination is judged valid. */
UENUM(BlueprintType)
enum class EAzr_TeleportValidation : uint8
{
	// Use Azr_TeleportArea volumes if the level has any, otherwise fall back to the NavMesh.
	Auto           UMETA(DisplayName = "Auto (Areas if present, else NavMesh)"),
	// Only Azr_TeleportArea volumes count. No navmesh needed anywhere.
	TeleportAreas  UMETA(DisplayName = "Teleport Areas only"),
	// Classic NavMesh projection.
	NavMesh        UMETA(DisplayName = "NavMesh only")
};

UCLASS(ClassGroup = (AzurealXR), meta = (BlueprintSpawnableComponent))
class AZUREALXR_API UAzr_Teleport : public UActorComponent
{
	GENERATED_BODY()

public:
	UAzr_Teleport();
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Azureal|Teleport")
	void HandleTeleportInput(float InputValue, USceneComponent* ControllerSource);

	UFUNCTION(BlueprintCallable, Category = "Azureal|Teleport")
	void TeleportToLocation(FVector TargetLocation);

	// Does this spot satisfy the current ValidationMode (Teleport Areas / NavMesh)?
	// Lets the pawn's smooth-move and blink-step obey exactly the same rules as the teleport arc,
	// instead of keeping their own separate navmesh check.
	UFUNCTION(BlueprintCallable, Category = "Azureal|Teleport")
	bool IsDestinationValid(FVector Location) const;

	// --- STATE API ---
	UFUNCTION(BlueprintCallable, Category = "Azureal|Teleport")
	void EnableTeleport();

	UFUNCTION(BlueprintCallable, Category = "Azureal|Teleport")
	void DisableTeleport();

protected:
	virtual void BeginPlay() override;

	// How a destination is validated. Auto keeps existing NavMesh levels working: the moment a level
	// contains an Azr_TeleportArea, areas take over and the navmesh is ignored.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Settings")
	EAzr_TeleportValidation ValidationMode = EAzr_TeleportValidation::Auto;

	UPROPERTY(EditAnywhere, Category = "Azureal|Settings")
	float MaxTeleportDistance = 1000.0f;

	UPROPERTY(EditAnywhere, Category = "Azureal|Settings")
	float FadeDuration = 0.15f;

	// -- VISUALS (RETICLE) --
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Visuals")
	UStaticMesh* ReticleMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Visuals")
	FVector ReticleScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Visuals")
	UMaterialInterface* ValidReticleMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Visuals")
	UMaterialInterface* InvalidReticleMaterial;

	// -- VISUALS (BEAM) --
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Visuals")
	UStaticMesh* BeamMeshAsset;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Visuals")
	FVector BeamScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Visuals")
	UMaterialInterface* ValidBeamMaterial;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Visuals")
	UMaterialInterface* InvalidBeamMaterial;

private:
	// --- STATE TRACKERS ---
	bool bIsTeleportEnabled = true;
	bool bIsAiming;
	bool bHasValidLocation;
	FVector ValidTeleportLocation;

	FTimerHandle TeleportTimerHandle;

	UPROPERTY()
	UStaticMeshComponent* ReticleComponent;

	UPROPERTY()
	USceneComponent* CurrentController;

	UPROPERTY()
	USplineComponent* ArcSpline;

	UPROPERTY()
	TArray<USplineMeshComponent*> SplineMeshPool;

	void EnsureInitialized();

	// Judges the point the arc landed on. Returns true and fills OutLocation with where the pawn
	// should end up (the aimed point for areas; the projected point for navmesh). NavQueryExtent is
	// the navmesh search box — locomotion uses a taller one than the arc, for uneven ground.
	bool ValidateDestination(const FVector& HitPoint, FVector& OutLocation, const FVector& NavQueryExtent = FVector(50.0f, 50.0f, 50.0f)) const;

	void StartAiming();
	void StopAiming(bool bExecuteTeleport);
	void UpdateArc();
	void PerformTeleport();
	void DrawBeam(const TArray<FVector>& PathPoints);
	void UpdateVisualsColor();
};