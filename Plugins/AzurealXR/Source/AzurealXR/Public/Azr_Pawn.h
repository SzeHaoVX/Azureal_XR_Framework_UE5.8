

#pragma once

#include "Azr_HandScanner.h"
#include "Camera/CameraComponent.h"
#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "InputActionValue.h"
#include "MotionControllerComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "Azr_Pawn.generated.h"

class UInputMappingContext;
class UInputAction;
class UAzr_Teleport;
class UAzr_HandAnimInstance;
class UAzr_Gaze;
class UWidgetComponent;
class UAzr_ExplainWidget;
class UStaticMesh;
class UMaterialInterface;

// --- NEW: LOCOMOTION HAND SETTING ---
UENUM(BlueprintType)
enum class EAzr_LocomotionHand : uint8 {
    LeftHand   UMETA(DisplayName = "Left Hand (Southpaw)"),
    RightHand  UMETA(DisplayName = "Right Hand (Standard)"),
    BothHands  UMETA(DisplayName = "Both Hands")
};

UENUM(BlueprintType)
enum class EForwardBehavior : uint8 {
    Teleport UMETA(DisplayName = "Teleport"),
    SmoothMove UMETA(DisplayName = "Smooth Movement")
};

UENUM(BlueprintType)
enum class ETurnBehavior : uint8 {
    SnapTurn UMETA(DisplayName = "Snap Turn"),
    SmoothTurn UMETA(DisplayName = "Smooth Turn")
};

UENUM(BlueprintType)
enum class EBackBehavior : uint8 {
    BlinkStep UMETA(DisplayName = "Blink Step (Fade Back)"),
    SmoothMove UMETA(DisplayName = "Smooth Move Back"),
    None UMETA(DisplayName = "Do Nothing")
};

UCLASS(ClassGroup = (AzurealXR))
class AZUREALXR_API AAzr_Pawn : public APawn {
    GENERATED_BODY()

public:
    AAzr_Pawn();



protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;
    virtual void SetupPlayerInputComponent(
        class UInputComponent* PlayerInputComponent) override;

    // --- COMPONENTS ---
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    USceneComponent* VROrigin;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    UCameraComponent* Camera;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    UWidgetComponent* GazeReticleWidget;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    UMotionControllerComponent* LeftMotionController;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    UMotionControllerComponent* RightMotionController;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    USkeletalMeshComponent* LeftHandMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    USkeletalMeshComponent* RightHandMesh;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    UAzr_HandScanner* LeftHandScanner;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Components")
    UAzr_HandScanner* RightHandScanner;

    // --- NEW: WIDGET INTERACTION (SMART LASERS) ---
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|UI Interaction")
    UWidgetInteractionComponent* LeftWidgetInteraction;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|UI Interaction")
    UWidgetInteractionComponent* RightWidgetInteraction;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|UI Interaction")
    UStaticMeshComponent* LeftLaserBeam;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|UI Interaction")
    UStaticMeshComponent* RightLaserBeam;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|UI Interaction")
    UStaticMeshComponent* LeftLaserReticle;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|UI Interaction")
    UStaticMeshComponent* RightLaserReticle;

    // --- UI INTERACTION CONFIG ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|UI Config")
    float MaxLaserDistance = 1500.0f;

    // Set this to the exact Trace Channel that your Azr_Collision profile blocks!
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|UI Config")
    TEnumAsByte<ECollisionChannel> LaserTraceChannel = ECC_Visibility;

    // --- INPUT ACTIONS ---
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Azureal|Input")
    UInputMappingContext* DefaultMappingContext;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Azureal|Input")
    UInputAction* IA_Move;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Azureal|Input")
    UInputAction* IA_Look;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Azureal|Input")
    UInputAction* IA_Grab_Left;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Azureal|Input")
    UInputAction* IA_Grab_Right;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Azureal|Input")
    UInputAction* IA_Trigger_Left;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Azureal|Input")
    UInputAction* IA_Trigger_Right;

    // --- CONFIGURATION ---
    // NEW: Master Control for Ambidextrous Support
    UFUNCTION(BlueprintCallable, Category = "Azureal|Locomotion")
    void ScriptedMoveTo(FVector TargetFloorLocation, FRotator TargetRotation, float MoveSpeed);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Locomotion Config")
    EAzr_LocomotionHand DominantLocomotionHand = EAzr_LocomotionHand::RightHand;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Locomotion Config")
    EForwardBehavior ForwardInput;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Locomotion Config")
    ETurnBehavior TurnInput;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Locomotion Config")
    EBackBehavior BackwardInput;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Locomotion Config")
    float SnapTurnAngle;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Locomotion Config")
    float SmoothTurnSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Locomotion Config")
    float SmoothMoveSpeed;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Locomotion Config")
    float BlinkStepDistance;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Animation")
    float HandAnimSpeed;

    // --- GAZE CONFIGURATION ---
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Gaze Config")
    float GazeTraceDistance = 500.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Gaze Config")
    float GazeTraceRadius = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Gaze Config")
    bool bShowGazeDebug = false;

    UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
    void SetLeftHandMesh(USkeletalMesh* NewMesh);

    UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
    void SetRightHandMesh(USkeletalMesh* NewMesh);

    // --- ROOM SCALE LOCOMOTION ---
    UFUNCTION(BlueprintCallable, Category = "Azureal|Locomotion")
    void ExecuteRoomScaleTeleport(FVector TargetFloorLocation);

    // --- EVENT TELEPORT ---
    UFUNCTION(BlueprintCallable, Category = "Azureal|Locomotion")
    void TeleportPlayer(FVector TargetLocation, FRotator TargetRotation);

    // --- Enable/Disable LOCOMOTION STATE ---
    UFUNCTION(BlueprintCallable, Category = "Azureal|Locomotion")
    void EnableLocomotion();

    UFUNCTION(BlueprintCallable, Category = "Azureal|Locomotion")
    void DisableLocomotion();

protected:
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|State")
    bool bIsVRMode;

    // --- DESKTOP MODE ---
    // With no headset the motion controllers never track, so the hands sit at the pawn's feet and
    // every interaction in the framework -- all of which is detected by the hand's overlap capsules --
    // is unreachable. Desktop mode does not reimplement any of that: it drives one hand from the
    // camera, and the distance-grab capsule that already exists for grabbing across a room becomes
    // the crosshair. Grab, Latch, Touch, AttachTarget and the UI laser then work untouched.

    /** Which hand desktop mode is currently driving. Swapped with DesktopSwapHandKey. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|State")
    bool bDesktopUsingRightHand = true;

    /** True while the mouse is dragging a held latch instead of steering the view. */
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|State")
    bool bDesktopDraggingLatch = false;

    /**
     * Where the invisible interaction point sits relative to the camera: X forward, Y right, Z up.
     *
     * Centred, because on desktop there is no hand to look at -- the reticle in the middle of the
     * screen is the hand, and the scan capsules have to sit exactly under it or the crosshair would
     * lie about what it is going to grab. Pushed forward only enough to clear the player's own head.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
    FVector DesktopHandOffset = FVector(20.0f, 0.0f, 0.0f);

    /**
     * The HUD that draws the aiming dot, installed on the player controller when there is no headset.
     *
     * Installed rather than required, so a project's own GameMode and HUD are untouched -- desktop
     * mode swaps one in for itself and puts nothing in anybody's way.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
    TSubclassOf<class AHUD> DesktopHUDClass;

    /**
     * Radius of the aiming dot in pixels.
     *
     * The single number that governs desktop aiming. The dot is flat on the screen and never moves;
     * the interaction volume is sized to cover exactly what the dot covers at whatever range it is
     * pointing, so making the dot bigger makes aiming more forgiving by exactly as much as it looks
     * like it should.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "1.0"))
    float DesktopReticleScreenRadius = 4.0f;

    /**
     * How far the crosshair reaches on desktop, in centimetres.
     *
     * The VR default is arm's length, which is right for reaching out and taking something. On a
     * desktop the whole interaction is pointing at things across the room, so this is much longer.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "50.0"))
    float DesktopReach = 400.0f;

    /**
     * Trigger on desktop -- the button used by Explain/Action widgets and by trigger-mode grabs.
     *
     * Bound in C++ rather than through an Input Action, because nothing in IMC_Default maps a
     * keyboard or mouse key to the trigger and adding one would make desktop mode depend on a
     * Blueprint asset edit before it worked at all. Grab already has Right Mouse in the context, so
     * that one is left alone.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
    FKey DesktopTriggerKey;

    /** Swaps which hand the camera drives, so either side of a latch or a hand-specific step is reachable. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
    FKey DesktopSwapHandKey;

    /**
     * Turns a held valve, and otherwise moves a carried object nearer or further.
     *
     * The wheel is the only input a mouse has that is itself a turning motion, so it is the one that
     * suits a valve. It is free to double as a reach control because nothing can be carried and
     * turned at the same time -- a latch is worked in place, never picked up.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
    FKey DesktopScrollUpKey;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
    FKey DesktopScrollDownKey;

    /**
     * Degrees the wrist twists per notch of the wheel, for valves and doorknobs.
     *
     * A Rotation latch does not read where the hand is, it reads how far the wrist has turned -- so
     * sliding the mouse can never work one, however far it moves. The wheel is the natural stand-in
     * for a turning motion, and it drives the latch's own maths rather than going around them.
     *
     * Capped well under half a turn: the latch measures the wrist as a shortest-path angle, so a
     * notch of more than 180 degrees would read as a turn the other way.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "1.0", ClampMax = "90.0"))
    float DesktopTwistPerScroll = 12.0f;

    /**
     * Degrees a lever or door swings per notch of the wheel.
     *
     * The mouse can already drag one, but a lever travels on an arc and the mouse travels in a
     * straight line, so following it round takes a practised hand. A notch is the same size every
     * time, which makes "open it a quarter" a countable thing rather than a judged one.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "0.1"))
    float DesktopAngularStepPerScroll = 6.0f;

    /** Centimetres a slider, drawer or bolt travels per notch of the wheel. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "0.1"))
    float DesktopLinearStepPerScroll = 3.0f;

    /**
     * How briskly the hand slides to where a notch put it. Higher is snappier.
     *
     * Not instant, for two reasons. A lever throws away any hand movement faster than its MaxTurnSpeed
     * as a bad reading, and a whole notch delivered in one frame can trip that on a fast machine. And
     * a hand that eases across reads as a turn, where one that teleports reads as a glitch.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "1.0"))
    float DesktopTrackGlideSpeed = 14.0f;

    /** Centimetres a carried object is pushed away or pulled closer per notch of the wheel. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "1.0"))
    float DesktopCarryStepPerScroll = 15.0f;

    /**
     * How far the hand travels per unit of mouse movement while dragging a latch.
     *
     * A latch is worked by moving the hand through an arc or along a rail, so with the hand welded to
     * the camera a lever could only be pulled by swinging the whole view -- unusable. While a latch is
     * held the hand comes off the camera and the mouse moves it directly instead.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "0.05"))
    float DesktopDragSensitivity = 0.6f;

    /**
     * How far the hand may be dragged from where it took hold, in centimetres, on each axis.
     *
     * Kept below the latch's own MaxBreakDistance (50cm by default), so dragging to the end of the
     * travel cannot itself yank the hand off the latch. Raise one and consider the other.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "5.0"))
    float DesktopDragLimit = 35.0f;

    /** Swap which hand desktop mode drives. Does nothing in VR. */
    UFUNCTION(BlueprintCallable, Category = "Azureal|Desktop")
    void SwapDesktopHand();

    /** Drive the given hand from the camera and park the other one. Does nothing in VR. */
    UFUNCTION(BlueprintCallable, Category = "Azureal|Desktop")
    void SetDesktopHand(bool bUseRightHand);

    // --- THE MASTER LOCK ---
    bool bIsLocomotionEnabled = true;

    // --- NEW: TIMER HANDLE ---
    FTimerHandle EventTeleportTimerHandle;

    // --- STATE TRACKERS ---
    // One-shot gesture locks, kept separate on purpose: a shared lock meant an accidental snap turn
    // consumed the backward step, and neither recovered until the stick was fully centred.
    bool bReadyToSnapTurn;
    bool bReadyToBlinkStep;
    float TargetGripLeft;
    float CurrentGripLeft;
    float TargetGripRight;
    float CurrentGripRight;

    UPROPERTY()
    UAzr_Teleport* CachedTeleportComp;

    UPROPERTY()
    UAzr_HandAnimInstance* LeftHandAnim;

    UPROPERTY()
    UAzr_HandAnimInstance* RightHandAnim;

    void DetectPlatform();

    // --- DESKTOP MODE INTERNALS ---

    /** Re-parent the driven hand onto the camera and give it a desktop reach. Called once, no headset only. */
    void SetupDesktopRig();

    /** The motion controller currently being driven by the camera, or null in VR. */
    UMotionControllerComponent* GetDesktopController() const;

    /** The hand scanner currently being driven by the camera, or null in VR. */
    UAzr_HandScanner* GetDesktopScanner() const;

    /** Keep the hand where it belongs: at the crosshair, or under the mouse while a latch is held. */
    void UpdateDesktopHand(float DeltaTime);

    /** Feed the mouse into the held latch instead of the view. Returns true when it consumed the input. */
    bool ConsumeLookForLatchDrag(const FVector2D& LookInput);

    UFUNCTION()
    void OnDesktopTriggerPressed();

    UFUNCTION()
    void OnDesktopTriggerReleased();

    UFUNCTION()
    void OnDesktopScrollUp();

    UFUNCTION()
    void OnDesktopScrollDown();

    /** Apply one notch of the wheel: work a held latch, or push a carried object in or out. */
    void ApplyDesktopScroll(float Direction);

    /** One notch of the wheel into a held latch, by whichever route that kind of latch is worked. */
    void ApplyDesktopLatchScroll(class UAzr_Latch* Latch, float Direction);

    /** How far the wrist has been twisted while holding the current latch, in degrees. */
    float DesktopTwistDegrees = 0.0f;

    /**
     * Where the wheel has walked the hand along the latch's own track, in world space.
     *
     * World rather than camera space because a track is fixed in the world: a drawer runs the way the
     * drawer runs, and looking elsewhere while pulling it must not bend the pull. Kept apart from the
     * mouse's own offset for the same reason it is not clamped like it -- movement along the track
     * stays with the latch by construction, so it has no need of the leash that stops a mouse drag
     * from tearing the hand off.
     */
    FVector DesktopTrackOffset = FVector::ZeroVector;

    /** Where the notches have asked for; DesktopTrackOffset eases towards this. */
    FVector DesktopTrackOffsetTarget = FVector::ZeroVector;

    /**
     * The value the wheel is currently asking a Linear latch to sit at.
     *
     * Linear alone needs this. A slider reads its value from where the hand *is*, so travel past a
     * stop stays in the hand even though the latch clamps it, and the wheel would have to be unwound
     * before the drawer moved again. Held to the stops here so it never can be. A lever and a valve
     * read how much the hand *changed* and discard the excess, so neither has anything to unwind.
     */
    float DesktopTrackValue = 0.0f;

    /** Offset the mouse has dragged the hand to, relative to where it took hold, in camera space. */
    FVector DesktopDragOffset = FVector::ZeroVector;

    /**
     * Where the hand was at the instant it took hold of a latch, relative to the camera.
     *
     * Dragging is measured from here rather than from the hand's resting offset. Snapping the hand
     * back to a resting spot in front of the face at the moment of grabbing puts it a metre or more
     * from the latch it just took, and the latch's own break distance -- correctly -- lets go.
     */
    FVector DesktopDragAnchor = FVector::ZeroVector;

    /**
     * World radius, at the given distance, of whatever the screen dot is covering.
     *
     * The dot is a fixed number of pixels, so the cone it describes widens with range: what it covers
     * a hand's width away is far smaller than what it covers across the room. Sizing the interaction
     * volume from this is what makes "the dot is on it" and "it can be interacted with" the same
     * statement at every distance.
     */
    float GetReticleWorldRadius(float Distance) const;

    /** Put the desktop HUD on the player controller. Safe to call more than once. */
    void ApplyDesktopHUD();

    /** Takes the crosshair back down, for when a session turns out to be a VR one after all. */
    void RemoveDesktopHUD();

    /** How far out a carried object is held, remembered from the range it was grabbed at. */
    float DesktopCarryDistance = 100.0f;

    bool bDesktopHUDApplied = false;

    // --- NEW: SCRIPTED MOVEMENT TRACKERS ---
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|State")
    bool bIsScriptedMoving = false;

    FVector ScriptedMoveTarget;
    float ScriptedMoveSpeed;

    // NEW: Unified Ambidextrous Logic
    void ProcessStickInput(FVector2D AxisInput, UMotionControllerComponent* HandController, bool bIsLeftHand);

    // Gate for backward blink-step / smooth-move. Defers to the teleport component so backward
    // locomotion honours Azr_TeleportArea volumes (or the NavMesh) exactly like the teleport arc.
    bool IsBackwardDestinationAllowed(const FVector& TargetLocation) const;

    // Where the player's body actually stands, at the pawn's floor height. In room scale the head can
    // be metres from VROrigin, so locomotion that means "from the player" must measure from here --
    // measuring from the actor instead offsets the move by however far they physically walked.
    FVector GetHeadFloorLocation() const;

    // The direction the player is looking, flattened to the floor plane and always unit length.
    FVector GetViewDirection() const;

    void Move(const FInputActionValue& Value);
    void RightStickInput(const FInputActionValue& Value);
    void Look(const FInputActionValue& Value);

    void GrabLeft(const FInputActionValue& Value);
    void ReleaseLeft(const FInputActionValue& Value);
    void GrabRight(const FInputActionValue& Value);
    void ReleaseRight(const FInputActionValue& Value);

    void OnTriggerLeft(const FInputActionValue& Value);
    void OnTriggerRight(const FInputActionValue& Value);

    void PassTriggerToHeldObject(UMotionControllerComponent* HandController, float Value);

    void ProcessGazeTrace();

    // Runs every frame to check UI hover states and stretch the visual beams
    void UpdateSmartLasers();

    // Track previous hover states to fire one-shot haptics
    bool bLeftWasHoveringWidget;
    bool bRightWasHoveringWidget;

    UPROPERTY()
    UAzr_ExplainWidget* LastHoveredLeftWidget;

    UPROPERTY()
    UAzr_ExplainWidget* LastHoveredRightWidget;
};