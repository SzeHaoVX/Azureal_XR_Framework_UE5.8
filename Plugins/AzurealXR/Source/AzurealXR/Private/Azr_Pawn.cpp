

#include "Azr_Pawn.h"
#include "Azr_DesktopHUD.h"
#include "Azr_ExplainWidget.h"
#include "Azr_Gaze.h"
#include "Azr_Grab.h"
#include "Azr_HandAnimInstance.h"
#include "Azr_Latch.h"
#include "Azr_Teleport.h"
#include "CollisionQueryParams.h"
#include "CollisionShape.h"
#include "Components/PrimitiveComponent.h"
#include "Components/SceneComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/WidgetComponent.h"
#include "Components/WidgetInteractionComponent.h"
#include "DrawDebugHelpers.h"
#include "Engine/OverlapResult.h"
#include "Engine/World.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "GameFramework/GameModeBase.h"
#include "NavigationSystem.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "IXRTrackingSystem.h"
#include "TimerManager.h"

AAzr_Pawn::AAzr_Pawn() {
    PrimaryActorTick.bCanEverTick = true;
    PrimaryActorTick.TickGroup = TG_PostPhysics;

    VROrigin = CreateDefaultSubobject<USceneComponent>(TEXT("VROrigin"));
    RootComponent = VROrigin;

    Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
    Camera->SetupAttachment(VROrigin);

    // --- FACE-LOCKED RETICLE SETUP ---
    GazeReticleWidget = CreateDefaultSubobject<UWidgetComponent>(TEXT("GazeReticleWidget"));
    GazeReticleWidget->SetupAttachment(Camera);
    GazeReticleWidget->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f));
    GazeReticleWidget->SetWidgetSpace(EWidgetSpace::World);
    GazeReticleWidget->SetDrawSize(FVector2D(100.0f, 100.0f));
    GazeReticleWidget->SetVisibility(false);
    GazeReticleWidget->SetCollisionEnabled(ECollisionEnabled::NoCollision);

    // --- CONTROLLERS ---
    LeftMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("LeftController"));
    LeftMotionController->SetupAttachment(VROrigin);
    LeftMotionController->SetTrackingMotionSource(FName("Left"));

    RightMotionController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("RightController"));
    RightMotionController->SetupAttachment(VROrigin);
    RightMotionController->SetTrackingMotionSource(FName("Right"));

    // --- HAND MESHES ---
    LeftHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeftHandMesh"));
    LeftHandMesh->SetupAttachment(LeftMotionController);

    RightHandMesh = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RightHandMesh"));
    RightHandMesh->SetupAttachment(RightMotionController);

    // --- SCANNERS ---
    LeftHandScanner = CreateDefaultSubobject<UAzr_HandScanner>(TEXT("LeftHandScanner"));
    LeftHandScanner->SetupAttachment(LeftMotionController);
    LeftHandScanner->bIsRightHand = false;
    LeftHandScanner->InteractProfile = FName("Azr_Collision");

    RightHandScanner = CreateDefaultSubobject<UAzr_HandScanner>(TEXT("RightHandScanner"));
    RightHandScanner->SetupAttachment(RightMotionController);
    RightHandScanner->bIsRightHand = true;
    RightHandScanner->InteractProfile = FName("Azr_Collision");

    // --- UI INTERACTION (SMART LASERS) ---
    MaxLaserDistance = 1500.0f;
    LaserTraceChannel = ECC_Visibility;

    // Left UI Setup
    LeftWidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("LeftWidgetInteraction"));
    LeftWidgetInteraction->SetupAttachment(LeftMotionController);
    LeftWidgetInteraction->InteractionSource = EWidgetInteractionSource::World;
    LeftWidgetInteraction->bShowDebug = false;
    LeftWidgetInteraction->PointerIndex = 1;

    LeftLaserBeam = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftLaserBeam"));
    LeftLaserBeam->SetupAttachment(LeftMotionController);
    LeftLaserBeam->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    LeftLaserBeam->SetCastShadow(false);
    LeftLaserBeam->SetVisibility(false);
    LeftLaserBeam->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));

    LeftLaserReticle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("LeftLaserReticle"));
    LeftLaserReticle->SetupAttachment(LeftMotionController);
    LeftLaserReticle->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    LeftLaserReticle->SetCastShadow(false);
    LeftLaserReticle->SetVisibility(false);

    // Right UI Setup
    RightWidgetInteraction = CreateDefaultSubobject<UWidgetInteractionComponent>(TEXT("RightWidgetInteraction"));
    RightWidgetInteraction->SetupAttachment(RightMotionController);
    RightWidgetInteraction->InteractionSource = EWidgetInteractionSource::World;
    RightWidgetInteraction->bShowDebug = false;
    RightWidgetInteraction->PointerIndex = 2;

    RightLaserBeam = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightLaserBeam"));
    RightLaserBeam->SetupAttachment(RightMotionController);
    RightLaserBeam->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    RightLaserBeam->SetCastShadow(false);
    RightLaserBeam->SetVisibility(false);
    RightLaserBeam->SetRelativeRotation(FRotator(90.0f, 0.0f, 0.0f));

    RightLaserReticle = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("RightLaserReticle"));
    RightLaserReticle->SetupAttachment(RightMotionController);
    RightLaserReticle->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    RightLaserReticle->SetCastShadow(false);
    RightLaserReticle->SetVisibility(false);

    // The desktop aiming dot is drawn flat on the screen by AAzr_DesktopHUD, not placed in the world.
    // A world dot has to be given a position, a facing and a size, and then kept honest against
    // whatever it hovers over -- which is what makes it drift and snap. A crosshair simply sits still.
    DesktopHUDClass = AAzr_DesktopHUD::StaticClass();

    // --- DEFAULTS ---
    bIsVRMode = false;
    HandAnimSpeed = 15.0f;

    // Default to Standard (Right Hand Turn/Teleport, Left Hand Move)
    DominantLocomotionHand = EAzr_LocomotionHand::RightHand;
    ForwardInput = EForwardBehavior::Teleport;
    TurnInput = ETurnBehavior::SnapTurn;
    BackwardInput = EBackBehavior::BlinkStep;
    SnapTurnAngle = 45.0f;
    SmoothTurnSpeed = 90.0f;
    SmoothMoveSpeed = 300.0f;
    BlinkStepDistance = 150.0f;
    bReadyToSnapTurn = true;
    bReadyToBlinkStep = true;
    GazeTraceDistance = 500.0f;
    GazeTraceRadius = 5.0f;
    bShowGazeDebug = false;

    bLeftWasHoveringWidget = false;
    bRightWasHoveringWidget = false;

    // Initialize Memory Pointers
    LastHoveredLeftWidget = nullptr;
    LastHoveredRightWidget = nullptr;

    // Desktop keys. Left Mouse is free -- the mapping context puts grab on Right Mouse and leaves the
    // trigger unmapped entirely -- so the two mouse buttons end up doing what a player expects.
    DesktopTriggerKey = EKeys::LeftMouseButton;
    DesktopSwapHandKey = EKeys::X;
    DesktopScrollUpKey = EKeys::MouseScrollUp;
    DesktopScrollDownKey = EKeys::MouseScrollDown;
}

void AAzr_Pawn::BeginPlay() {
    Super::BeginPlay();
    DetectPlatform();

    CachedTeleportComp = FindComponentByClass<UAzr_Teleport>();

    if (LeftHandMesh) LeftHandAnim = Cast<UAzr_HandAnimInstance>(LeftHandMesh->GetAnimInstance());
    if (RightHandMesh) RightHandAnim = Cast<UAzr_HandAnimInstance>(RightHandMesh->GetAnimInstance());

    LeftWidgetInteraction->InteractionDistance = MaxLaserDistance;
    LeftWidgetInteraction->TraceChannel = LaserTraceChannel;
    RightWidgetInteraction->InteractionDistance = MaxLaserDistance;
    RightWidgetInteraction->TraceChannel = LaserTraceChannel;

    FVector StartLoc = GetActorLocation();
    FVector EndLoc = StartLoc - FVector(0, 0, 250.0f);
    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    if (GetWorld()->LineTraceSingleByChannel(Hit, StartLoc, EndLoc, ECC_WorldStatic, Params)) {
        if (Hit.Distance > 5.0f) SetActorLocation(Hit.Location);
    }
}

void AAzr_Pawn::DetectPlatform() {
    if (UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled()) {
        bIsVRMode = true;
        UHeadMountedDisplayFunctionLibrary::SetTrackingOrigin(EHMDTrackingOrigin::Stage);

        // Undoes a crosshair put up before this ran. A level-placed pawn possesses itself from
        // PostInitializeComponents, which runs SetupPlayerInputComponent -- and that is earlier than
        // BeginPlay, so on the frame the desktop HUD was offered the headset may not have answered yet.
        RemoveDesktopHUD();
    }
    else {
        bIsVRMode = false;
        Camera->SetRelativeLocation(FVector(0.0f, 0.0f, 170.0f));
        SetupDesktopRig();
    }
}

// --- DESKTOP MODE ---

UMotionControllerComponent* AAzr_Pawn::GetDesktopController() const {
    if (bIsVRMode) return nullptr;
    return bDesktopUsingRightHand ? RightMotionController : LeftMotionController;
}

UAzr_HandScanner* AAzr_Pawn::GetDesktopScanner() const {
    if (bIsVRMode) return nullptr;
    return bDesktopUsingRightHand ? RightHandScanner : LeftHandScanner;
}

void AAzr_Pawn::SetDesktopHand(bool bUseRightHand) {
    if (bIsVRMode) return;

    // A press belongs to the hand that made it. Parking that hand below the floor while it still has a
    // touch pressed would leave the touch broadcast with nothing left able to release it.
    if (UAzr_HandScanner* Outgoing = GetDesktopScanner()) {
        Outgoing->SetTouchPressed(false);
    }

    bDesktopUsingRightHand = bUseRightHand;
    DesktopDragOffset = FVector::ZeroVector;

    UMotionControllerComponent* Driven = bUseRightHand ? RightMotionController : LeftMotionController;
    UMotionControllerComponent* Parked = bUseRightHand ? LeftMotionController : RightMotionController;

    if (Driven && Camera) {
        // The whole rig moves as one: the scan capsules and the widget-interaction laser all hang off
        // the controller, so re-parenting it is the entire job. Nothing in Grab, Latch, Touch or
        // AttachTarget needs to know this happened.
        Driven->AttachToComponent(Camera, FAttachmentTransformRules::KeepRelativeTransform);
        Driven->SetRelativeLocation(DesktopHandOffset);
        Driven->SetRelativeRotation(FRotator::ZeroRotator);
        Driven->SetVisibility(true, true);
    }

    // Undone straight after showing the rig, because SetVisibility propagates to every child.
    //
    // Desktop has no hands. A hand model floating at eye level, aimed by the mouse, reads as a glitch
    // rather than as a hand -- there is no arm behind it and no wrist to explain its pose. The reticle
    // does the hand's job on screen; the hand's *capsules* still do it in the world, unseen.
    if (LeftHandMesh)      LeftHandMesh->SetVisibility(false, true);
    if (RightHandMesh)     RightHandMesh->SetVisibility(false, true);
    if (LeftLaserBeam)     LeftLaserBeam->SetVisibility(false);
    if (RightLaserBeam)    RightLaserBeam->SetVisibility(false);
    if (LeftLaserReticle)  LeftLaserReticle->SetVisibility(false);
    if (RightLaserReticle) RightLaserReticle->SetVisibility(false);

    if (Parked) {
        // Hidden rather than destroyed: swapping back has to be instant, and a hidden hand's capsules
        // are moved out of reach below the floor so they cannot overlap anything in the meantime.
        Parked->AttachToComponent(VROrigin, FAttachmentTransformRules::KeepRelativeTransform);
        Parked->SetRelativeLocation(FVector(0.0f, 0.0f, -500.0f));
        Parked->SetVisibility(false, true);
    }
}

void AAzr_Pawn::SwapDesktopHand() {
    if (bIsVRMode) return;

    // Refused mid-hold: the held object is snapped to this hand's transform, and swapping underneath
    // it would leave it parented to a hand that has just been parked below the floor.
    if (UAzr_HandScanner* Scanner = GetDesktopScanner()) {
        if (Scanner->IsHoldingLatch()) return;
    }

    SetDesktopHand(!bDesktopUsingRightHand);
}

void AAzr_Pawn::SetupDesktopRig() {
    // The long forward capsule is switched off rather than lengthened. It overlaps everything along
    // its reach and then picks a best candidate, which is not necessarily the thing under the dot --
    // so with it on, the crosshair could point at one object and the grab take another. Desktop puts
    // the small interact capsule on the aimed surface instead, and that alone decides.
    for (UAzr_HandScanner* Scanner : { LeftHandScanner, RightHandScanner }) {
        if (!Scanner) continue;
        Scanner->SetDistanceGrabEnabled(false);

        // A touch has to be asked for here. The hand sits wherever the crosshair points, so it arrives
        // inside every touch zone the player so much as glances at -- and left as it is in VR, looking
        // at a thing would complete the step for touching it.
        Scanner->SetRequiresPressToTouch(true);

        // A placeholder only. The real size is recomputed every frame from how far away the aimed
        // surface turns out to be, since the same dot covers more of the world the further it reaches.
        Scanner->SetInteractSize(1.0f, 1.0f);
    }

    // The VR laser reticle marks a whole interaction volume and chases whatever it is over, which is
    // the wrong shape and the wrong behaviour for a crosshair. The screen dot replaces it outright.
    if (LeftLaserReticle)  LeftLaserReticle->SetVisibility(false);
    if (RightLaserReticle) RightLaserReticle->SetVisibility(false);

    ApplyDesktopHUD();
    SetDesktopHand(bDesktopUsingRightHand);
}

void AAzr_Pawn::ApplyDesktopHUD() {
    if (bIsVRMode || bDesktopHUDApplied || !DesktopHUDClass) return;

    // The engine is asked directly as well as the cached flag, because this is reached from
    // SetupPlayerInputComponent -- which for a level-placed pawn runs before BeginPlay, while
    // bIsVRMode still holds its constructor default of false. Trusting the flag alone put the desktop
    // crosshair up in VR sessions, and once up it stayed: bDesktopHUDApplied latched, so the later
    // detection had nothing to correct.
    if (AAzr_DesktopHUD::IsStereoActive()) return;

    // Through the controller rather than the GameMode, so a project keeps whatever HUD it already had
    // configured and desktop mode does not force a GameMode change on anybody.
    if (APlayerController* PC = Cast<APlayerController>(GetController())) {
        PC->ClientSetHUD(DesktopHUDClass);
        bDesktopHUDApplied = true;

        if (AAzr_DesktopHUD* Hud = Cast<AAzr_DesktopHUD>(PC->GetHUD())) {
            Hud->ReticleRadius = DesktopReticleScreenRadius;
        }
    }
}

void AAzr_Pawn::RemoveDesktopHUD() {
    bDesktopHUDApplied = false;

    APlayerController* PC = Cast<APlayerController>(GetController());
    if (!PC) return;

    // Only ever takes back its own. If a project's HUD is up, this was never applied and there is
    // nothing here to undo.
    AAzr_DesktopHUD* Hud = Cast<AAzr_DesktopHUD>(PC->GetHUD());
    if (!Hud) return;

    TSubclassOf<AHUD> Restore = nullptr;
    if (AGameModeBase* GM = GetWorld() ? GetWorld()->GetAuthGameMode() : nullptr) {
        Restore = GM->HUDClass;
    }

    if (Restore && Restore != DesktopHUDClass) {
        PC->ClientSetHUD(Restore);
    }
    else {
        // Nothing to hand back to. ClientSetHUD(nullptr) would destroy this one and then log a spawn
        // failure for the null class, so the dot is switched off in place instead.
        Hud->bShowReticle = false;
    }
}

float AAzr_Pawn::GetReticleWorldRadius(float Distance) const {
    if (!Camera) return 1.0f;

    int32 ViewX = 0;
    int32 ViewY = 0;
    if (const APlayerController* PC = Cast<APlayerController>(GetController())) {
        PC->GetViewportSize(ViewX, ViewY);
    }
    if (ViewX <= 0) return 1.0f;

    // The dot covers a fixed slice of the screen, which is a fixed angle, which is a widening circle
    // as it goes out. Half the horizontal field of view maps to half the screen width, so a radius in
    // pixels becomes a radius in world units at any distance.
    const float HalfFovRad = FMath::DegreesToRadians(Camera->FieldOfView * 0.5f);
    const float HalfWidthAtDistance = Distance * FMath::Tan(HalfFovRad);

    return HalfWidthAtDistance * (DesktopReticleScreenRadius / (ViewX * 0.5f));
}


void AAzr_Pawn::UpdateDesktopHand(float DeltaTime) {
    if (bIsVRMode) return;

    UMotionControllerComponent* Driven = GetDesktopController();
    UAzr_HandScanner* Scanner = GetDesktopScanner();
    if (!Driven || !Scanner || !Camera) return;

    const bool bWasDragging = bDesktopDraggingLatch;
    bDesktopDraggingLatch = Scanner->IsHoldingLatch();
    const bool bCarrying = Scanner->IsHoldingObject();

    if (bDesktopDraggingLatch && !bWasDragging) {
        // Anchored where the hand actually is at the moment of taking hold, which is on the latch --
        // possibly metres away. Dragging then moves it from there. Sending it to a resting offset in
        // front of the face instead would put it straight outside the latch's break distance, and the
        // latch would let go on the very next frame.
        DesktopDragAnchor = Driven->GetRelativeLocation();
        DesktopDragOffset = FVector::ZeroVector;

        // Each latch is worked from zero. Carrying twist or track offset over from the last one would
        // hand the new latch a large opening delta and throw it the moment it was taken.
        DesktopTwistDegrees = 0.0f;
        DesktopTrackOffset = FVector::ZeroVector;
        DesktopTrackOffsetTarget = FVector::ZeroVector;
        DesktopTrackValue = Scanner->GetCurrentHeldLatch() ? Scanner->GetCurrentHeldLatch()->GetLatchValue() : 0.0f;
    }

    if (!bDesktopDraggingLatch && bWasDragging) {
        DesktopDragOffset = FVector::ZeroVector;
        DesktopTwistDegrees = 0.0f;
        DesktopTrackOffset = FVector::ZeroVector;
        DesktopTrackOffsetTarget = FVector::ZeroVector;
    }

    if (bDesktopDraggingLatch) {
        // A held latch is worked by moving the hand along its track, so the mouse moves the hand and
        // the view stays put. Measured from where it took hold, not from anywhere near the camera.
        Driven->SetRelativeLocation(DesktopDragAnchor + DesktopDragOffset);

        // Roll about the hand's own forward axis -- the wrist turning. A Rotation latch reads the
        // hand's orientation rather than its position, so this is the only thing that can drive a
        // valve, and it feeds the latch's existing twist maths rather than bypassing them.
        Driven->SetRelativeRotation(FRotator(0.0f, 0.0f, DesktopTwistDegrees));

        // Levers and sliders instead go where the wheel put them, easing across rather than jumping.
        // Applied in world space and on top of the mouse's offset, so the two can be used together --
        // the wheel for exact travel along the track, the mouse for everything else.
        DesktopTrackOffset = FMath::VInterpTo(DesktopTrackOffset, DesktopTrackOffsetTarget, DeltaTime, DesktopTrackGlideSpeed);
        Driven->AddWorldOffset(DesktopTrackOffset);

        // Once the hand has arrived, the wheel takes its bearings from the latch again. Without this a
        // slider dragged with the mouse would leave the wheel's idea of where it sits behind, and the
        // next notch would clamp against a stop that had already moved.
        if (UAzr_Latch* Held = Scanner->GetCurrentHeldLatch()) {
            if (DesktopTrackOffset.Equals(DesktopTrackOffsetTarget, 0.05f)) {
                DesktopTrackValue = Held->GetLatchValue();
            }
        }
        return;
    }

    // Kept camera-aligned otherwise. The scanner's rotation is the frame a grabbed object is snapped
    // to, so letting it drift would turn whatever is being carried.
    Driven->SetRelativeRotation(FRotator::ZeroRotator);

    if (bCarrying) {
        // Carrying: the object hangs at the distance it was picked up from and swings with the view.
        // Aiming is suspended, because the only thing the crosshair could land on is the object being
        // carried -- which would push it further away every frame.
        Driven->SetRelativeLocation(FVector(DesktopCarryDistance, 0.0f, 0.0f));
        return;
    }

    // --- FREE AIMING ---
    // The dot never moves; the invisible interaction volume moves under it. This trace is what makes
    // "the crosshair is on it" and "it can be interacted with" the same statement -- the capsule is
    // put wherever the centre of the screen is looking, and it alone decides what is reachable.
    const FVector Start = Camera->GetComponentLocation();
    const FVector Dir = Camera->GetForwardVector();
    const FVector Far = Start + Dir * DesktopReach;

    FVector Point = Far;

    FHitResult Hit;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);
    if (GetWorld()->LineTraceSingleByChannel(Hit, Start, Far, LaserTraceChannel, Params)) {
        Point = Hit.ImpactPoint;
    }

    // Placed ON the surface rather than in front of it, deliberately: with the capsule's centre in the
    // surface, any radius at all overlaps it, so even a one-pixel dot still reliably interacts.
    Driven->SetWorldLocation(Point);

    const float Distance = FMath::Max(FVector::Dist(Start, Point), 1.0f);

    // Sized to cover exactly what the dot covers at this range, so a bigger crosshair is a more
    // forgiving one by precisely as much as it looks like it should be.
    const float DotRadius = FMath::Max(GetReticleWorldRadius(Distance), 0.05f);
    Scanner->SetInteractSize(DotRadius, DotRadius);

    // Remembered for the moment a grab starts, so the object is carried at the range it was taken from
    // instead of leaping to the face.
    DesktopCarryDistance = FMath::Max(Distance, 30.0f);
}

bool AAzr_Pawn::ConsumeLookForLatchDrag(const FVector2D& LookInput) {
    if (bIsVRMode || !bDesktopDraggingLatch) return false;

    // Screen axes onto the camera's own: mouse right moves the hand right (camera +Y), mouse up moves
    // it up (camera +Z). Depth is deliberately left alone -- a latch travels along its own track, and
    // letting the mouse push the hand away from the face mostly just tears it off the latch.
    DesktopDragOffset.Y += LookInput.X * DesktopDragSensitivity;
    DesktopDragOffset.Z -= LookInput.Y * DesktopDragSensitivity;

    DesktopDragOffset.Y = FMath::Clamp(DesktopDragOffset.Y, -DesktopDragLimit, DesktopDragLimit);
    DesktopDragOffset.Z = FMath::Clamp(DesktopDragOffset.Z, -DesktopDragLimit, DesktopDragLimit);

    return true;
}

void AAzr_Pawn::OnDesktopTriggerPressed() {
    if (bIsVRMode) return;

    // Routed to whichever hand the camera is driving, so one mouse button serves both.
    if (bDesktopUsingRightHand) OnTriggerRight(FInputActionValue(1.0f));
    else                        OnTriggerLeft(FInputActionValue(1.0f));

    // The same click is the touch. Aiming at something only brings it within reach on desktop, so
    // this is the half that means "and now touch it".
    if (UAzr_HandScanner* Scanner = GetDesktopScanner()) {
        Scanner->SetTouchPressed(true);
    }

    // The UI laser is a separate path from the interaction capsules: Explain and Action widgets are
    // clicked through the widget interaction component, not grabbed.
    if (UWidgetInteractionComponent* WIC = bDesktopUsingRightHand ? RightWidgetInteraction : LeftWidgetInteraction) {
        WIC->PressPointerKey(EKeys::LeftMouseButton);
    }
}

void AAzr_Pawn::OnDesktopScrollUp()   { ApplyDesktopScroll(1.0f); }
void AAzr_Pawn::OnDesktopScrollDown() { ApplyDesktopScroll(-1.0f); }

void AAzr_Pawn::ApplyDesktopScroll(float Direction) {
    if (bIsVRMode) return;

    UAzr_HandScanner* Scanner = GetDesktopScanner();
    if (!Scanner) return;

    if (UAzr_Latch* Latch = Scanner->GetCurrentHeldLatch()) {
        ApplyDesktopLatchScroll(Latch, Direction);
        return;
    }

    if (Scanner->IsHoldingObject()) {
        // Nothing being worked, so the wheel does the other thing a hand does at range: pushes the
        // held object further out or draws it closer.
        DesktopCarryDistance = FMath::Clamp(
            DesktopCarryDistance + Direction * DesktopCarryStepPerScroll, 30.0f, DesktopReach);
    }
}

void AAzr_Pawn::ApplyDesktopLatchScroll(UAzr_Latch* Latch, float Direction) {
    UMotionControllerComponent* Driven = GetDesktopController();
    if (!Latch || !Driven) return;

    if (Latch->LatchType == EAzr_LatchType::Rotation) {
        // A valve is turned, not moved. Rolling the hand about its own forward axis is the wrist
        // turning, which is the only thing a Rotation latch reads, and the latch damps the change
        // itself so a notch eases it round rather than snapping it.
        //
        // Wrapped, not accumulated. Only the change per frame reaches the latch, and a valve already
        // at its stop throws the excess away -- so the wheel never has to be unwound.
        DesktopTwistDegrees = FRotator::NormalizeAxis(
            DesktopTwistDegrees + Direction * FMath::Min(DesktopTwistPerScroll, 90.0f));
        return;
    }

    const bool bLinear = (Latch->LatchType == EAzr_LatchType::Linear);
    float Step = Direction * (bLinear ? DesktopLinearStepPerScroll : DesktopAngularStepPerScroll);

    if (bLinear) {
        const float Before = DesktopTrackValue;
        DesktopTrackValue = FMath::Clamp(DesktopTrackValue + Step, Latch->LimitMin, Latch->LimitMax);
        Step = DesktopTrackValue - Before;

        // Already against the stop. Nothing to ask for, and nothing banked for the way back.
        if (FMath::IsNearlyZero(Step)) return;
    }

    // Measured from where the hand is *heading*, not from where it has eased to, so notches spun in
    // quick succession stack exactly instead of each one shortening the last.
    const FVector Base = Driven->GetComponentLocation() - DesktopTrackOffset;
    const FVector Aim = Base + DesktopTrackOffsetTarget;

    // The latch works out where a hand would have to be; the hand simply goes there. Nothing reaches
    // past the latch's own maths, so limits, damping, haptics and OnValueChanged all fire exactly as
    // they would for a player in a headset.
    DesktopTrackOffsetTarget += (Latch->GetHandLocationForValueDelta(Aim, Step) - Aim);
}

void AAzr_Pawn::OnDesktopTriggerReleased() {
    if (bIsVRMode) return;

    if (bDesktopUsingRightHand) OnTriggerRight(FInputActionValue(0.0f));
    else                        OnTriggerLeft(FInputActionValue(0.0f));

    if (UAzr_HandScanner* Scanner = GetDesktopScanner()) {
        Scanner->SetTouchPressed(false);
    }

    if (UWidgetInteractionComponent* WIC = bDesktopUsingRightHand ? RightWidgetInteraction : LeftWidgetInteraction) {
        WIC->ReleasePointerKey(EKeys::LeftMouseButton);
    }
}

void AAzr_Pawn::Tick(float DeltaTime) {
    Super::Tick(DeltaTime);

    ProcessGazeTrace();
    UpdateSmartLasers();
    UpdateDesktopHand(DeltaTime);

    if (!FMath::IsNearlyEqual(CurrentGripLeft, TargetGripLeft, 0.001f)) {
        CurrentGripLeft = FMath::FInterpTo(CurrentGripLeft, TargetGripLeft, DeltaTime, HandAnimSpeed);
        if (!LeftHandAnim && LeftHandMesh) LeftHandAnim = Cast<UAzr_HandAnimInstance>(LeftHandMesh->GetAnimInstance());
        if (LeftHandAnim) LeftHandAnim->GripAlpha = CurrentGripLeft;
    }

    if (!FMath::IsNearlyEqual(CurrentGripRight, TargetGripRight, 0.001f)) {
        CurrentGripRight = FMath::FInterpTo(CurrentGripRight, TargetGripRight, DeltaTime, HandAnimSpeed);
        if (!RightHandAnim && RightHandMesh) RightHandAnim = Cast<UAzr_HandAnimInstance>(RightHandMesh->GetAnimInstance());
        if (RightHandAnim) RightHandAnim->GripAlpha = CurrentGripRight;
    }

    // --- SCRIPTED SMOOTH MOVEMENT ---
    if (bIsScriptedMoving)
    {
        FVector CurrentLoc = GetActorLocation();

        // Move at a constant linear speed toward the target
        FVector NewLoc = FMath::VInterpConstantTo(CurrentLoc, ScriptedMoveTarget, DeltaTime, ScriptedMoveSpeed);
        SetActorLocation(NewLoc);

        // Stop moving when we are extremely close to the target
        if (FVector::DistSquared(NewLoc, ScriptedMoveTarget) < 1.0f)
        {
            SetActorLocation(ScriptedMoveTarget);
            bIsScriptedMoving = false;
        }
    }
}

void AAzr_Pawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
    Super::SetupPlayerInputComponent(PlayerInputComponent);

    if (APlayerController* PC = Cast<APlayerController>(GetController())) {
        if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(PC->GetLocalPlayer())) {
            if (DefaultMappingContext) Subsystem->AddMappingContext(DefaultMappingContext, 0);
        }
    }

    if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent)) {
        
        if (IA_Move) {
            EnhancedInputComponent->BindAction(IA_Move, ETriggerEvent::Triggered, this, &AAzr_Pawn::Move);
            EnhancedInputComponent->BindAction(IA_Move, ETriggerEvent::Completed, this, &AAzr_Pawn::Move);
        }

        if (IA_Look) {
            EnhancedInputComponent->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AAzr_Pawn::RightStickInput);
            EnhancedInputComponent->BindAction(IA_Look, ETriggerEvent::Completed, this, &AAzr_Pawn::RightStickInput);
            EnhancedInputComponent->BindAction(IA_Look, ETriggerEvent::Triggered, this, &AAzr_Pawn::Look);
        }

        if (IA_Grab_Left) {
            EnhancedInputComponent->BindAction(IA_Grab_Left, ETriggerEvent::Triggered, this, &AAzr_Pawn::GrabLeft);
            EnhancedInputComponent->BindAction(IA_Grab_Left, ETriggerEvent::Completed, this, &AAzr_Pawn::ReleaseLeft);
        }
        if (IA_Grab_Right) {
            EnhancedInputComponent->BindAction(IA_Grab_Right, ETriggerEvent::Triggered, this, &AAzr_Pawn::GrabRight);
            EnhancedInputComponent->BindAction(IA_Grab_Right, ETriggerEvent::Completed, this, &AAzr_Pawn::ReleaseRight);
        }

        if (IA_Trigger_Left) {
            EnhancedInputComponent->BindAction(IA_Trigger_Left, ETriggerEvent::Triggered, this, &AAzr_Pawn::OnTriggerLeft);
            EnhancedInputComponent->BindAction(IA_Trigger_Left, ETriggerEvent::Completed, this, &AAzr_Pawn::OnTriggerLeft);
        }
        if (IA_Trigger_Right) {
            EnhancedInputComponent->BindAction(IA_Trigger_Right, ETriggerEvent::Triggered, this, &AAzr_Pawn::OnTriggerRight);
            EnhancedInputComponent->BindAction(IA_Trigger_Right, ETriggerEvent::Completed, this, &AAzr_Pawn::OnTriggerRight);
        }
    }

    // --- DESKTOP-ONLY KEYS ---
    // Bound straight to keys rather than through Input Actions. IMC_Default maps no keyboard or mouse
    // key to the trigger and has nothing for swapping hands, so routing these through Enhanced Input
    // would leave desktop mode dead until somebody edited a Blueprint asset -- exactly the silent
    // failure the framework already warns about for unassigned input. Grab is untouched: Right Mouse
    // is already mapped to it in the context.
    if (PlayerInputComponent) {
        if (DesktopTriggerKey.IsValid()) {
            PlayerInputComponent->BindKey(DesktopTriggerKey, IE_Pressed, this, &AAzr_Pawn::OnDesktopTriggerPressed);
            PlayerInputComponent->BindKey(DesktopTriggerKey, IE_Released, this, &AAzr_Pawn::OnDesktopTriggerReleased);
        }
        if (DesktopSwapHandKey.IsValid()) {
            PlayerInputComponent->BindKey(DesktopSwapHandKey, IE_Pressed, this, &AAzr_Pawn::SwapDesktopHand);
        }
        if (DesktopScrollUpKey.IsValid()) {
            PlayerInputComponent->BindKey(DesktopScrollUpKey, IE_Pressed, this, &AAzr_Pawn::OnDesktopScrollUp);
        }
        if (DesktopScrollDownKey.IsValid()) {
            PlayerInputComponent->BindKey(DesktopScrollDownKey, IE_Pressed, this, &AAzr_Pawn::OnDesktopScrollDown);
        }
    }

    // Retried here as well as at BeginPlay: whether the controller exists yet depends on when the pawn
    // is possessed, and by this point it certainly does. The call guards itself against running twice.
    ApplyDesktopHUD();
}

void AAzr_Pawn::UpdateSmartLasers() {
    APlayerController* PC = Cast<APlayerController>(GetController());

    // On desktop the hand sits at eye level, so a beam drawn from it to the target reads as a line
    // growing out of the player's own face. The reticle at the far end is the half that matters --
    // it is the crosshair -- so the beam stays hidden and the reticle behaves as it always did.
    const bool bShowBeam = bIsVRMode;

    // The 3D reticle goes too. SetupDesktopRig hides it once at start-up, but this function puts it
    // back the moment a widget is hovered -- so on desktop it reappeared sitting on the widget and
    // sliding across its surface as the aim moved, which is the snapping the flat crosshair exists to
    // replace. Two reticles disagreeing about where the pointer is, is worse than either alone.
    const bool bShowWorldReticle = bIsVRMode;

    auto ProcessLaser = [PC, bShowBeam, bShowWorldReticle](UWidgetInteractionComponent* WIC,
        UStaticMeshComponent* Beam,
        UStaticMeshComponent* Reticle, bool& bWasHovering,
        EControllerHand Hand,
        UAzr_ExplainWidget*& LastHoveredWidget) {

            if (WIC && WIC->IsOverHitTestVisibleWidget()) {
                Beam->SetVisibility(bShowBeam);
                Reticle->SetVisibility(bShowWorldReticle);

                FHitResult Hit = WIC->GetLastHitResult();

                // --- 1. DYNAMIC LASER SCALING ---
                float ExactDistance = FVector::Dist(Beam->GetComponentLocation(), Hit.ImpactPoint);

                // DYNAMIC GAP LOGIC
                float DesiredGap = 400.0f;
                float DynamicGap = FMath::Min(DesiredGap, ExactDistance * 0.5f);
                float VisualBeamLength = FMath::Max(1.0f, ExactDistance - DynamicGap);

                float MeshHeight = 100.0f;
                if (Beam->GetStaticMesh()) {
                    MeshHeight = Beam->GetStaticMesh()->GetBoundingBox().GetSize().Z;
                }
                if (MeshHeight <= 0.0f) MeshHeight = 100.0f;

                FVector CurrentScale = Beam->GetRelativeScale3D();
                Beam->SetRelativeScale3D(FVector(CurrentScale.X, CurrentScale.Y, VisualBeamLength / MeshHeight));

                // --- 2. FIX RETICLE DELAY & CLIPPING ---
                FVector SafeHitPoint = Hit.ImpactPoint + (Hit.ImpactNormal * 1.5f);
                FVector LocalHitPoint = Reticle->GetAttachParent()->GetComponentTransform().InverseTransformPosition(SafeHitPoint);
                Reticle->SetRelativeLocation(LocalHitPoint);
                Reticle->SetWorldRotation(Hit.ImpactNormal.Rotation());

                // --- 3. AIM ON HAPTIC PULSE ---
                if (!bWasHovering) {
                    if (PC) {
                        PC->SetHapticsByValue(1.0f, 1.0f, Hand);
                        if (UWorld* World = Beam->GetWorld()) {
                            FTimerHandle HapticTimer;
                            World->GetTimerManager().SetTimer(HapticTimer, FTimerDelegate::CreateWeakLambda(PC, [PC, Hand]() {
                                if (PC) PC->SetHapticsByValue(0.0f, 0.0f, Hand);
                                }), 0.1f, false);
                        }
                    }
                }

                // --- 4. WIDGET HOVER LOGIC ---
                UAzr_ExplainWidget* HoveredExplainWidget = nullptr;
                if (UWidgetComponent* HitWidgetComp = Cast<UWidgetComponent>(Hit.GetComponent())) {
                    HoveredExplainWidget = Cast<UAzr_ExplainWidget>(HitWidgetComp->GetWidget());
                }

                if (HoveredExplainWidget != LastHoveredWidget) {
                    if (LastHoveredWidget) {
                        if (Hand == EControllerHand::Left) LastHoveredWidget->SetHoveredByLeftHand(false);
                        else LastHoveredWidget->SetHoveredByRightHand(false);
                    }
                    if (HoveredExplainWidget) {
                        if (Hand == EControllerHand::Left) HoveredExplainWidget->SetHoveredByLeftHand(true);
                        else HoveredExplainWidget->SetHoveredByRightHand(true);
                    }
                    LastHoveredWidget = HoveredExplainWidget;
                }

                bWasHovering = true;
            }
            else {
                Beam->SetVisibility(false);
                Reticle->SetVisibility(false);

                if (bWasHovering) {

                    // --- 5. AIM OFF HAPTIC PULSE ---
                    if (PC) {
                        PC->SetHapticsByValue(1.0f, 1.0f, Hand);
                        if (UWorld* World = Beam->GetWorld()) {
                            FTimerHandle HapticTimer;
                            World->GetTimerManager().SetTimer(HapticTimer, FTimerDelegate::CreateWeakLambda(PC, [PC, Hand]() {
                                if (PC) PC->SetHapticsByValue(0.0f, 0.0f, Hand);
                                }), 0.1f, false);
                        }
                    }

                    // --- MEMORY CLEANUP ---
                    if (LastHoveredWidget) {
                        if (Hand == EControllerHand::Left) LastHoveredWidget->SetHoveredByLeftHand(false);
                        else LastHoveredWidget->SetHoveredByRightHand(false);
                        LastHoveredWidget = nullptr;
                    }
                }

                bWasHovering = false;
            }
        };

    ProcessLaser(LeftWidgetInteraction, LeftLaserBeam, LeftLaserReticle,
        bLeftWasHoveringWidget, EControllerHand::Left, LastHoveredLeftWidget);
    ProcessLaser(RightWidgetInteraction, RightLaserBeam, RightLaserReticle,
        bRightWasHoveringWidget, EControllerHand::Right, LastHoveredRightWidget);
}

void AAzr_Pawn::OnTriggerLeft(const FInputActionValue& Value) {
    float AxisVal = Value.Get<float>();
    if (AxisVal > 0.5f) {
        if (LeftWidgetInteraction->IsOverHitTestVisibleWidget())
            LeftWidgetInteraction->PressPointerKey(EKeys::LeftMouseButton);
    }
    else {
        LeftWidgetInteraction->ReleasePointerKey(EKeys::LeftMouseButton);
    }
    PassTriggerToHeldObject(LeftMotionController, AxisVal);
}

void AAzr_Pawn::OnTriggerRight(const FInputActionValue& Value) {
    float AxisVal = Value.Get<float>();
    if (AxisVal > 0.5f) {
        if (RightWidgetInteraction->IsOverHitTestVisibleWidget())
            RightWidgetInteraction->PressPointerKey(EKeys::LeftMouseButton);
    }
    else {
        RightWidgetInteraction->ReleasePointerKey(EKeys::LeftMouseButton);
    }
    PassTriggerToHeldObject(RightMotionController, AxisVal);
}

void AAzr_Pawn::PassTriggerToHeldObject(UMotionControllerComponent* HandController, float Value) {
    if (!HandController) return;

    UAzr_HandScanner* RelevantScanner = (HandController == LeftMotionController) ? LeftHandScanner : RightHandScanner;
    if (!RelevantScanner) return;

    if (UAzr_Latch* HeldLatch = RelevantScanner->GetCurrentHeldLatch()) {
        HeldLatch->HandleTriggerInput(Value);
        return;
    }

    TArray<AActor*> AttachedActors;
    this->GetAttachedActors(AttachedActors);

    for (AActor* AttachedActor : AttachedActors) {
        if (!AttachedActor || !AttachedActor->GetRootComponent()) continue;

        USceneComponent* CurrentParent = AttachedActor->GetRootComponent()->GetAttachParent();

        if (CurrentParent == RelevantScanner || CurrentParent == HandController) {
            if (UAzr_Grab* GrabComp = AttachedActor->FindComponentByClass<UAzr_Grab>()) {
                GrabComp->HandleTriggerInput(Value);
                return;
            }
        }
    }
}

// Grab is bound per hand for VR, where each grip is its own button. On desktop one mouse button is
// mapped to both actions, so both handlers fire on every click -- they are funnelled to whichever hand
// the camera is driving, and the other hand is left alone. ProcessGrabInput ignores a repeated press,
// so being called twice in the same click is harmless.

void AAzr_Pawn::GrabLeft(const FInputActionValue& Value) {
    if (!bIsVRMode) {
        if (UAzr_HandScanner* Scanner = GetDesktopScanner()) {
            (bDesktopUsingRightHand ? TargetGripRight : TargetGripLeft) = Value.Get<float>();
            Scanner->ProcessGrabInput(true);
        }
        return;
    }
    TargetGripLeft = Value.Get<float>();
    if (LeftHandScanner) LeftHandScanner->ProcessGrabInput(true);
}
void AAzr_Pawn::ReleaseLeft(const FInputActionValue& Value) {
    if (!bIsVRMode) {
        if (UAzr_HandScanner* Scanner = GetDesktopScanner()) {
            (bDesktopUsingRightHand ? TargetGripRight : TargetGripLeft) = 0.0f;
            Scanner->ProcessGrabInput(false);
        }
        return;
    }
    TargetGripLeft = 0.0f;
    if (LeftHandScanner) LeftHandScanner->ProcessGrabInput(false);
}
void AAzr_Pawn::GrabRight(const FInputActionValue& Value) {
    if (!bIsVRMode) {
        if (UAzr_HandScanner* Scanner = GetDesktopScanner()) {
            (bDesktopUsingRightHand ? TargetGripRight : TargetGripLeft) = Value.Get<float>();
            Scanner->ProcessGrabInput(true);
        }
        return;
    }
    TargetGripRight = Value.Get<float>();
    if (RightHandScanner) RightHandScanner->ProcessGrabInput(true);
}
void AAzr_Pawn::ReleaseRight(const FInputActionValue& Value) {
    if (!bIsVRMode) {
        if (UAzr_HandScanner* Scanner = GetDesktopScanner()) {
            (bDesktopUsingRightHand ? TargetGripRight : TargetGripLeft) = 0.0f;
            Scanner->ProcessGrabInput(false);
        }
        return;
    }
    TargetGripRight = 0.0f;
    if (RightHandScanner) RightHandScanner->ProcessGrabInput(false);
}

void AAzr_Pawn::SetLeftHandMesh(USkeletalMesh* NewMesh) {
    if (LeftHandMesh && NewMesh) {
        LeftHandMesh->SetSkeletalMesh(NewMesh);
        LeftHandAnim = Cast<UAzr_HandAnimInstance>(LeftHandMesh->GetAnimInstance());
    }
}

void AAzr_Pawn::SetRightHandMesh(USkeletalMesh* NewMesh) {
    if (RightHandMesh && NewMesh) {
        RightHandMesh->SetSkeletalMesh(NewMesh);
        RightHandAnim = Cast<UAzr_HandAnimInstance>(RightHandMesh->GetAnimInstance());
    }
}

void AAzr_Pawn::ProcessGazeTrace() {
    if (!Camera) return;

    FVector StartLoc = Camera->GetComponentLocation();
    FVector EndLoc = StartLoc + (Camera->GetForwardVector() * GazeTraceDistance);

    FCollisionShape Capsule = FCollisionShape::MakeCapsule(GazeTraceRadius, GazeTraceDistance / 2.0f);
    FVector CenterLoc = StartLoc + (Camera->GetForwardVector() * (GazeTraceDistance / 2.0f));
    FQuat CapsuleRot = Camera->GetComponentQuat() * FQuat(FRotator(90.0f, 0.0f, 0.0f));

    TArray<FOverlapResult> OverlapResults;
    FCollisionQueryParams Params;
    Params.AddIgnoredActor(this);

    FCollisionObjectQueryParams ObjectParams(FCollisionObjectQueryParams::AllObjects);

    bool bHit = GetWorld()->OverlapMultiByObjectType(OverlapResults, CenterLoc, CapsuleRot, ObjectParams, Capsule, Params);

    bool bFoundGazeTarget = false;
    FVector HitLocation = EndLoc;

    if (bHit) {
        for (const FOverlapResult& Overlap : OverlapResults) {
            if (UAzr_Gaze* GazeComp = Cast<UAzr_Gaze>(Overlap.GetComponent())) {
                GazeComp->SetIsBeingLookedAt();
                bFoundGazeTarget = true;
                HitLocation = Overlap.GetComponent()->GetComponentLocation();
                break;
            }
        }
    }

    if (bShowGazeDebug) {
        FColor DrawColor = bFoundGazeTarget ? FColor::Green : FColor::Red;
        DrawDebugLine(GetWorld(), StartLoc, bFoundGazeTarget ? HitLocation : EndLoc, DrawColor, false, -1.0f, 0, 1.0f);
        if (bFoundGazeTarget) {
            DrawDebugSphere(GetWorld(), HitLocation, GazeTraceRadius, 12, DrawColor, false, -1.0f);
        }
    }
}

void AAzr_Pawn::ExecuteRoomScaleTeleport(FVector TargetFloorLocation) {
    if (!Camera) return;
    FVector CameraOffset = Camera->GetComponentLocation() - GetActorLocation();
    CameraOffset.Z = 0.0f;
    SetActorLocation(TargetFloorLocation - CameraOffset);
}

void AAzr_Pawn::EnableLocomotion() {
    bIsLocomotionEnabled = true;
    if (CachedTeleportComp) CachedTeleportComp->EnableTeleport();
}

void AAzr_Pawn::DisableLocomotion() {
    bIsLocomotionEnabled = false;
    if (CachedTeleportComp) CachedTeleportComp->DisableTeleport();
}

void AAzr_Pawn::Look(const FInputActionValue& Value) {
    if (bIsVRMode) return;
    FVector2D LookInput = Value.Get<FVector2D>();

    // A held latch takes the mouse: it is worked by moving the hand along its track, and with the hand
    // fixed to the camera the only way to move it would be to swing the whole view.
    if (ConsumeLookForLatchDrag(LookInput)) return;

    AddActorLocalRotation(FRotator(0, LookInput.X, 0));
    FRotator CamRot = Camera->GetRelativeRotation();
    CamRot.Pitch = FMath::Clamp(CamRot.Pitch - LookInput.Y, -80.f, 80.f);
    Camera->SetRelativeRotation(CamRot);
}

// --- NEW UNIFIED LOCOMOTION ROUTING ---

void AAzr_Pawn::Move(const FInputActionValue& Value) {
    if (!bIsLocomotionEnabled) return;

    FVector2D AxisInput = Value.Get<FVector2D>();

    if (bIsVRMode) {
        // --- VR MODE: Route to the Ambidextrous Brain ---
        ProcessStickInput(AxisInput, LeftMotionController, true);
    }
    else {
        // --- DESKTOP MODE: Standard WASD Walking ---
        if (Camera) {
            FVector ViewFwd = Camera->GetForwardVector();
            ViewFwd.Z = 0;
            ViewFwd.Normalize();

            FVector ViewRt = Camera->GetRightVector();
            ViewRt.Z = 0;
            ViewRt.Normalize();

            // Moves the pawn Forward/Back (W/S) and Strafes Left/Right (A/D)
            float DeltaTime = GetWorld()->GetDeltaSeconds();
            AddActorWorldOffset(((ViewFwd * AxisInput.Y) + (ViewRt * AxisInput.X)) * SmoothMoveSpeed * DeltaTime, true);
        }
    }
}

void AAzr_Pawn::RightStickInput(const FInputActionValue& Value) {
    ProcessStickInput(Value.Get<FVector2D>(), RightMotionController, false);
}

FVector AAzr_Pawn::GetHeadFloorLocation() const {
    if (!Camera) return GetActorLocation();

    // Horizontal position of the head, dropped to the pawn's own floor height.
    FVector HeadFloor = Camera->GetComponentLocation();
    HeadFloor.Z = GetActorLocation().Z;
    return HeadFloor;
}

FVector AAzr_Pawn::GetViewDirection() const {
    if (!Camera) return GetActorForwardVector();

    // Built from the camera's yaw rather than by flattening its forward vector. Flattening a
    // near-vertical gaze leaves a vector too short for Normalize(), which zeroes it -- so looking down
    // at your own hands used to collapse the movement direction to nothing. A yaw-only rotator is
    // always unit length.
    return FRotator(0.0f, Camera->GetComponentRotation().Yaw, 0.0f).Vector();
}

bool AAzr_Pawn::IsBackwardDestinationAllowed(const FVector& TargetLocation) const {
    // Single source of truth: whatever the teleport component accepts (Azr_TeleportArea volumes, or
    // the NavMesh) is what backward locomotion accepts too.
    if (CachedTeleportComp) {
        return CachedTeleportComp->IsDestinationValid(TargetLocation);
    }

    // No teleport component: fall back to the NavMesh if the level has one...
    if (UNavigationSystemV1* NavSys = UNavigationSystemV1::GetCurrent(GetWorld())) {
        FNavLocation ProjectedLoc;
        return NavSys->ProjectPointToNavigation(TargetLocation, ProjectedLoc, FVector(50.0f, 50.0f, 250.0f));
    }

    // ...and if the level has neither, don't silently kill backward movement.
    return true;
}

void AAzr_Pawn::ProcessStickInput(FVector2D AxisInput, UMotionControllerComponent* HandController, bool bIsLeftHand) {
    if (!bIsLocomotionEnabled || !bIsVRMode) return;

    // --- NEW: THE UI SOFT-LOCK & SCROLLING ---
    // If either hand is currently pointing at a Hit-Test Visible UI Widget, block new locomotion inputs!
    if (bLeftWasHoveringWidget || bRightWasHoveringWidget)
    {
        // 1. Safety Check: If they are mid-teleport while hovering UI, let them release the stick to complete it.
        // If we don't do this, they could get stuck with a teleport arc permanently drawn!
        if (AxisInput.Y > -0.5f && AxisInput.Y < 0.5f && ForwardInput == EForwardBehavior::Teleport && CachedTeleportComp)
        {
            CachedTeleportComp->HandleTeleportInput(0.0f, HandController);
        }

        // 2. THE SCROLL FIX: Translate thumbstick Y-Axis into Mouse Scroll Wheel
        if (FMath::Abs(AxisInput.Y) > 0.1f) // Small deadzone to prevent accidental micro-scrolls
        {
            // Multiply by a scroll speed factor (e.g., 2.0f) to make it feel smooth and responsive
            float ScrollAmount = AxisInput.Y * 2.0f;

            if (bIsLeftHand && bLeftWasHoveringWidget)
            {
                LeftWidgetInteraction->ScrollWheel(ScrollAmount);
            }
            else if (!bIsLeftHand && bRightWasHoveringWidget)
            {
                RightWidgetInteraction->ScrollWheel(ScrollAmount);
            }
        }

        // 3. Consume the input. Stop processing movement math.
        return;
    }

    // --- 1. THE MASTER GATE ---
    // If the joystick being pushed does not match the Dev Setting, kill it instantly!
    bool bIsAllowed = false;
    if (DominantLocomotionHand == EAzr_LocomotionHand::BothHands) bIsAllowed = true;
    else if (DominantLocomotionHand == EAzr_LocomotionHand::LeftHand && bIsLeftHand) bIsAllowed = true;
    else if (DominantLocomotionHand == EAzr_LocomotionHand::RightHand && !bIsLeftHand) bIsAllowed = true;

    if (!bIsAllowed) return; // <-- The unselected hand dies right here.

    float DeltaTime = GetWorld()->GetDeltaSeconds();

    // Sampled BEFORE this frame's turn is applied, so a turn and a move landing on the same frame
    // can never disagree about which way the player was facing when they pushed the stick.
    const FVector ViewDir = GetViewDirection();

    // Snap turn and blink step are one-shot gestures, so a single stick push may only claim one of
    // them -- whichever axis the player actually pushed further. Both used to fire off their own 0.5
    // threshold independently, and a diagonal pull reads about 0.71 on BOTH axes, so pulling back and
    // even slightly sideways triggered the turn, spent the lock the step also needed, and stepped
    // nowhere. That is the "backwards turns me instead" bug.
    const bool bTurnAxisDominates = FMath::Abs(AxisInput.X) > FMath::Abs(AxisInput.Y);
    const bool bMoveAxisDominates = !bTurnAxisDominates;

    // --- 2. X-AXIS: TURN ---
    float TurnYaw = 0.0f;
    if (FMath::Abs(AxisInput.X) > 0.5f) {
        if (TurnInput == ETurnBehavior::SmoothTurn) {
            TurnYaw = AxisInput.X * SmoothTurnSpeed * DeltaTime;
        }
        else if (TurnInput == ETurnBehavior::SnapTurn && bReadyToSnapTurn && bTurnAxisDominates) {
            TurnYaw = SnapTurnAngle * (AxisInput.X > 0 ? 1.0f : -1.0f);
            bReadyToSnapTurn = false;
        }
    }

    if (FMath::Abs(TurnYaw) > 0.001f) {
        FVector CameraOffset = Camera->GetComponentLocation() - GetActorLocation();
        CameraOffset.Z = 0.0f;
        FVector RotatedOffset = CameraOffset.RotateAngleAxis(TurnYaw, FVector::UpVector);
        AddActorLocalRotation(FRotator(0.0f, TurnYaw, 0.0f));
        AddActorWorldOffset(CameraOffset - RotatedOffset);
    }

    // --- 3. Y-AXIS: FORWARD & BACKWARD ---
    if (AxisInput.Y > 0.5f) {
        if (ForwardInput == EForwardBehavior::Teleport && CachedTeleportComp) {
            CachedTeleportComp->HandleTeleportInput(AxisInput.Y, HandController);
        }
        else if (ForwardInput == EForwardBehavior::SmoothMove) {
            AddActorWorldOffset(ViewDir * AxisInput.Y * SmoothMoveSpeed * DeltaTime, true);
        }
    }
    else if (AxisInput.Y < -0.5f) {
        // Backward moves are validated through the teleport component so they obey whatever the
        // project uses (Azr_TeleportArea volumes or the NavMesh) — see IsBackwardDestinationAllowed.
        if (BackwardInput == EBackBehavior::BlinkStep && bReadyToBlinkStep && bMoveAxisDominates && CachedTeleportComp) {
            // Measured from the head, not the actor. TeleportToLocation takes a FLOOR position and
            // re-applies the head offset itself, so handing it an actor position double-counted
            // however far the player had physically walked from VROrigin -- which pushed the step
            // sideways by exactly that much instead of straight back.
            FVector TargetLoc = GetHeadFloorLocation() - (ViewDir * BlinkStepDistance);

            if (IsBackwardDestinationAllowed(TargetLoc)) {
                CachedTeleportComp->TeleportToLocation(TargetLoc);
                // Only spend the lock on a step that actually happened; a rejected blink used to
                // swallow it and eat the player's next step.
                bReadyToBlinkStep = false;
            }
        }
        else if (BackwardInput == EBackBehavior::SmoothMove) {
            FVector DeltaMove = ViewDir * AxisInput.Y * SmoothMoveSpeed * DeltaTime;

            // Validate where the player's body ends up, not where VROrigin ends up.
            if (IsBackwardDestinationAllowed(GetHeadFloorLocation() + DeltaMove)) {
                AddActorWorldOffset(DeltaMove, true);
            }
        }
    }

    // Y-AXIS: RELEASE TELEPORT
    if (AxisInput.Y > -0.5f && AxisInput.Y < 0.5f && ForwardInput == EForwardBehavior::Teleport && CachedTeleportComp) {
        CachedTeleportComp->HandleTeleportInput(0.0f, HandController);
    }

    // --- 4. RESET LOCKS ---
    // Per-axis. Requiring the whole stick to be centred meant that after an accidental turn the player
    // could correct their thumb to straight-back and still get nothing, because the other axis was
    // holding the lock shut. Each gesture now re-arms as soon as its own axis returns to neutral.
    if (FMath::Abs(AxisInput.X) < 0.2f) bReadyToSnapTurn = true;
    if (FMath::Abs(AxisInput.Y) < 0.2f) bReadyToBlinkStep = true;
}

void AAzr_Pawn::TeleportPlayer(FVector TargetLocation, FRotator TargetRotation)
{
    APlayerController* PC = Cast<APlayerController>(GetController());
    if (!PC || !PC->PlayerCameraManager) return;

    // 1. Start Fade to Black
    float FadeTime = 0.2f;
    PC->PlayerCameraManager->StartCameraFade(0.0f, 1.0f, FadeTime, FLinearColor::Black, false, true);

    TWeakObjectPtr<AAzr_Pawn> WeakThis(this);
    TWeakObjectPtr<APlayerController> WeakPC(PC);

    // 2. Wait for the screen to go pitch black, then teleport safely
    GetWorld()->GetTimerManager().SetTimer(EventTeleportTimerHandle, [WeakThis, WeakPC, TargetLocation, TargetRotation, FadeTime]()
        {
            if (AAzr_Pawn* StrongThis = WeakThis.Get())
            {
                // --- ROOM-SCALE ROTATION CORRECTION ---
                // If the player turned their physical head 90 degrees, we must subtract that 90 degrees 
                // from the Target Rotation so their eyes actually line up with the target!
                if (StrongThis->Camera)
                {
                    float CameraYawOffset = StrongThis->Camera->GetRelativeRotation().Yaw;
                    FRotator NewPawnRot = StrongThis->GetActorRotation();
                    NewPawnRot.Yaw = TargetRotation.Yaw - CameraYawOffset;
                    StrongThis->SetActorRotation(NewPawnRot);
                }
                else
                {
                    StrongThis->SetActorRotation(TargetRotation);
                }

                // --- ROOM-SCALE LOCATION CORRECTION ---
                StrongThis->ExecuteRoomScaleTeleport(TargetLocation);
            }

            // 3. Fade back in
            if (APlayerController* StrongPC = WeakPC.Get())
            {
                if (StrongPC->PlayerCameraManager)
                {
                    StrongPC->PlayerCameraManager->StartCameraFade(1.0f, 0.0f, FadeTime, FLinearColor::Black, false, false);
                }
            }
        }, FadeTime, false);
}

void AAzr_Pawn::ScriptedMoveTo(FVector TargetFloorLocation, FRotator TargetRotation, float MoveSpeed)
{
    if (!Camera) return;

    // 1. SNAP ROTATION INSTANTLY (VR Comfort Safe)
    float CameraYawOffset = Camera->GetRelativeRotation().Yaw;
    FRotator NewPawnRot = GetActorRotation();
    NewPawnRot.Yaw = TargetRotation.Yaw - CameraYawOffset;
    SetActorRotation(NewPawnRot);

    // 2. CALCULATE ROOM-SCALE TARGET LOCATION
    // Subtract the physical distance the player walked away from the center of their living room
    FVector CameraOffset = Camera->GetComponentLocation() - GetActorLocation();
    CameraOffset.Z = 0.0f; // Ignore height offset so elevators work perfectly

    ScriptedMoveTarget = TargetFloorLocation - CameraOffset;

    // 3. WAKE UP THE TICK MOVEMENT
    ScriptedMoveSpeed = MoveSpeed;
    bIsScriptedMoving = true;
}