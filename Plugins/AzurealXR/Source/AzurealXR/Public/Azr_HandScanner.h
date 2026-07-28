

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Components/CapsuleComponent.h"
#include "Azr_Grab.h"
#include "Azr_Latch.h"
#include "Azr_HandScanner.generated.h"

// Forward Declaration for our new Smart Hub
class UAzr_LatchZone;

UCLASS(ClassGroup = (AzurealXR), meta = (BlueprintSpawnableComponent))
class AZUREALXR_API UAzr_HandScanner : public USceneComponent
{
	GENERATED_BODY()

public:
	UAzr_HandScanner();

protected:
	virtual void BeginPlay() override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	// --- CONFIGURATION ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Config")
	FName InteractProfile;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Config")
	bool bIsRightHand;

	// --- CAPSULE SIZES ---
	// Both overlap capsules are built at runtime (see the note on the component pointers below),
	// so their dimensions are tuned here as numbers instead of by dragging a capsule in the viewport.

	// Close-range interact capsule: Radius = width, Half Height = length.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Config")
	float InteractCapsuleRadius = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Config")
	float InteractCapsuleHalfHeight = 8.0f;

	// Forward-facing distance-grab capsule: Radius = width, Length = half height (how far it reaches).
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Config")
	float DistanceCapsuleRadius = 8.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Config")
	float DistanceCapsuleLength = 100.0f;

	// Aim of the distance-grab capsule, as an offset from the hand's forward (+X) direction.
	// Zero = straight forward (the original behaviour); Pitch tilts it up/down, Yaw swings it
	// left/right. TUNE THE BEAM DIRECTION HERE — do NOT rotate the HandScanner component itself:
	// the scanner's transform is also the frame Azr_Grab snaps held objects to, so rotating the
	// scanner rotates every grabbed object away from its authored ghost-hand pose.
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Config")
	FRotator DistanceCapsuleAim = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Debug")
	bool bShowDebugVisuals;

	// --- COMPONENTS ---
	// IMPORTANT: these are NOT default subobjects. They are created at runtime in BeginPlay
	// (NewObject + RegisterComponent). Creating them as default subobjects in the constructor
	// caused a UE 5.8 "Template Mismatch during attachment" ensure on Blueprint subclasses
	// (e.g. BP_Azr_Pawn): the scanner is itself a subobject, and a nested subobject's AttachParent
	// fails to remap from the CDO scanner to the per-instance scanner. Runtime creation avoids that.
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Azureal|Components")
	UCapsuleComponent* InteractCapsule;

	// Forward-facing capsule used only for Distance Grab detection.
	UPROPERTY(Transient, BlueprintReadOnly, Category = "Azureal|Components")
	UCapsuleComponent* DistanceGrabCapsule;

	// --- INPUT API ---
	UFUNCTION(BlueprintCallable, Category = "Azureal|Input")
	void ProcessGrabInput(bool bIsPressed);

	// --- GETTERS ---
	// Allows the Pawn to pass trigger values directly to the held component
	FORCEINLINE UAzr_Latch* GetCurrentHeldLatch() const { return CurrentHeldLatch.Get(); }
	FORCEINLINE UAzr_Grab* GetCurrentHeldComponent() const { return CurrentHeldComponent.Get(); }

private:

	bool bIsGripPressed = false;

	// --- GRAB TRACKING (Physics Objects) ---
	TArray<TWeakObjectPtr<UAzr_Grab>> OverlappedGrabbables;

	// --- DISTANCE GRAB TRACKING (objects seen by the distance capsule) ---
	TArray<TWeakObjectPtr<UAzr_Grab>> DistanceOverlappedGrabbables;

	UPROPERTY()
	TWeakObjectPtr<UAzr_Grab> CurrentHoveredComponent;

	UPROPERTY()
	TWeakObjectPtr<UAzr_Grab> CurrentHeldComponent;

	// --- LATCH TRACKING (Mechanical Parts) ---
	TArray<TWeakObjectPtr<UAzr_Latch>> OverlappedLatches;

	UPROPERTY()
	TWeakObjectPtr<UAzr_Latch> CurrentHoveredLatch;

	UPROPERTY()
	TWeakObjectPtr<UAzr_Latch> CurrentHeldLatch;

	// --- INTERNAL LOGIC ---
	void UpdateBestCandidate();

	// Builds InteractCapsule + DistanceGrabCapsule at runtime (NewObject + RegisterComponent) from
	// the size properties above. Called once from BeginPlay; guarded so it never double-creates.
	void CreateScanCapsules();

	// Aims the distance capsule forward (+X) and pushes it out by its half-length so it starts at
	// the hand and extends forward. Runtime only (the capsule exists only during play).
	void UpdateDistanceCapsuleShape();

	UFUNCTION()
	void OnCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

	UFUNCTION()
	void OnDistanceCapsuleOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnDistanceCapsuleEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
};