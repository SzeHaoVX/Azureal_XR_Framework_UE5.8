

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

	/**
	 * Change how far the distance-grab capsule reaches, after it has already been built.
	 *
	 * The capsule is sized once when it is created, so setting DistanceCapsuleLength on its own does
	 * nothing to a hand that is already in play. Desktop mode needs a far longer reach than VR -- a
	 * metre is arm's length, but pointing across a room is the whole interaction -- and it only knows
	 * that after BeginPlay, once the headset (or its absence) has been detected.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Config")
	void SetDistanceReach(float NewLength);

	/**
	 * True while this hand has hold of a latch.
	 *
	 * Desktop mode asks because a latch is worked by moving the hand, not by aiming it: something has
	 * to know when to stop the hand following the view and let the mouse drag it instead.
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal|Logic")
	bool IsHoldingLatch() const { return CurrentHeldLatch.IsValid(); }

	/** True while this hand is carrying a grabbed object. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Logic")
	bool IsHoldingObject() const { return CurrentHeldComponent.IsValid(); }

	/**
	 * Resize the close-range interact capsule after it has been built.
	 *
	 * Desktop mode shrinks it to the size of the aiming dot and parks it on the surface the dot is
	 * touching, so that what the crosshair is over is exactly what can be interacted with. A capsule
	 * sized for a hand would reach things the dot is nowhere near.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Config")
	void SetInteractSize(float NewRadius, float NewHalfHeight);

	/**
	 * Turn the long forward-reaching distance-grab capsule on or off.
	 *
	 * Switched off on desktop. It exists so a VR player can reach a distant object without walking to
	 * it, but it overlaps everything along its length and then picks a best candidate -- which is not
	 * necessarily the thing under the crosshair. With the interact capsule sitting on the aimed point
	 * instead, this one can only disagree with the dot.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Config")
	void SetDistanceGrabEnabled(bool bEnabled);

	/**
	 * Whether this hand's presence in a touch zone counts as a touch on its own.
	 *
	 * False for a real hand: reaching out and putting it there IS the touch. True on desktop, where
	 * the hand is parked wherever the crosshair points -- it arrives at everything the player merely
	 * looks at, so a touch there has to be a deliberate click.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Config")
	void SetRequiresPressToTouch(bool bRequired);

	UFUNCTION(BlueprintPure, Category = "Azureal|Logic")
	bool RequiresPressToTouch() const { return bRequiresPressToTouch; }

	/** The click going down or up. Whatever the hand is inside at that moment is told. No-op in VR. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Input")
	void SetTouchPressed(bool bPressed);

	// --- GETTERS ---
	// Allows the Pawn to pass trigger values directly to the held component
	FORCEINLINE UAzr_Latch* GetCurrentHeldLatch() const { return CurrentHeldLatch.Get(); }
	FORCEINLINE UAzr_Grab* GetCurrentHeldComponent() const { return CurrentHeldComponent.Get(); }

private:

	bool bIsGripPressed = false;

	// --- TOUCH (desktop click-to-touch) ---
	bool bRequiresPressToTouch = false;
	bool bTouchPressed = false;

	/** Touches told that the click went down, so exactly those can be told when it comes back up. */
	TArray<TWeakObjectPtr<class UAzr_Touch>> PressedTouches;

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