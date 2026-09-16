

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h" // Needed for FComponentReference
#include "Azr_Animation.generated.h"

class UAudioComponent;
class UCurveFloat;
class UMaterialInstanceDynamic;
class USceneComponent;
class USoundBase;

// --- EVENTS ---
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAzrAnimEvent);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAzrAnimStepEvent, int32, StepIndex);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnAzrAnimAlphaEvent, float, Alpha);

UENUM(BlueprintType)
enum class EAzr_AnimEase : uint8
{
	Linear    UMETA(DisplayName = "Linear"),
	EaseIn    UMETA(DisplayName = "Ease In"),
	EaseOut   UMETA(DisplayName = "Ease Out"),
	EaseInOut UMETA(DisplayName = "Ease In Out"),
	Hold      UMETA(DisplayName = "Hold (snap at the end)")
};

UENUM(BlueprintType)
enum class EAzr_AnimVisibility : uint8
{
	NoChange UMETA(DisplayName = "No Change"),
	Show     UMETA(DisplayName = "Show"),
	Hide     UMETA(DisplayName = "Hide")
};

UENUM(BlueprintType)
enum class EAzr_AnimSoundTrigger : uint8
{
	OnStepStart UMETA(DisplayName = "On Step Start"),
	OnStepEnd   UMETA(DisplayName = "On Step End"),
	WhileMoving UMETA(DisplayName = "While Moving")
};

/** One sound attached to one step. */
USTRUCT(BlueprintType)
struct FAzr_AnimSound
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Sound")
	TObjectPtr<USoundBase> Sound = nullptr;

	/**
	 * Keep playing for as long as the trigger holds, instead of firing once.
	 *
	 * Pairs with WhileMoving: a grinding loop that runs exactly while the trainee is turning the
	 * wheel and cuts the moment they stop is not something a one-shot can express.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Sound")
	bool bLoop = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Sound")
	EAzr_AnimSoundTrigger Trigger = EAzr_AnimSoundTrigger::OnStepStart;

	/**
	 * Let this sound fire again if the alpha leaves the step and comes back.
	 *
	 * Off by default, and that default matters: a hand-driven latch can rock the alpha across a step
	 * boundary many times a second, and a re-arming clunk sounds like a machine gun. Turn it on for
	 * something that genuinely should repeat, like a ratchet.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Sound",
		meta = (EditCondition = "Trigger != EAzr_AnimSoundTrigger::WhileMoving"))
	bool bRetrigger = false;
};

/** One material parameter this step drives, interpolated from whatever the previous step left it at. */
USTRUCT(BlueprintType)
struct FAzr_AnimMaterialTarget
{
	GENERATED_BODY()

	/** Must exist on the material actually assigned to the slot, or the write silently does nothing. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Material")
	FName ParameterName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Material", meta = (ClampMin = "0"))
	int32 MaterialSlot = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Material")
	bool bIsColor = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Material", meta = (EditCondition = "!bIsColor"))
	float Scalar = 0.f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Material", meta = (EditCondition = "bIsColor"))
	FLinearColor Color = FLinearColor::White;
};

/** One pose the animation passes through, plus whatever else happens while it does. */
USTRUCT(BlueprintType)
struct FAzr_AnimStep
{
	GENERATED_BODY()

	/** Shown in the array header so a long list stays readable. Purely cosmetic. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	FString Label;

	/**
	 * Where the component ends up, RELATIVE to its parent.
	 *
	 * Relative and not world, deliberately: a world transform would bake in where the actor happened
	 * to be standing when it was recorded, and moving the actor in the level would silently break
	 * every step authored on it.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	FTransform Target;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	bool bMoveLocation = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	bool bMoveRotation = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	bool bMoveScale = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step", meta = (ClampMin = "0.01"))
	float Duration = 1.f;

	/**
	 * Run alongside the previous step instead of after it.
	 *
	 * This is the whole sequencing model. Array order already gives 1 then 2 then 3; ticking this
	 * folds a step into the previous one's window. "Lift and rotate together" is two steps with the
	 * box ticked, "lift then rotate" is the same two steps without it.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	bool bStartWithPrevious = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	EAzr_AnimEase Ease = EAzr_AnimEase::EaseInOut;

	/** Overrides Ease when set. Sampled 0..1 on both axes. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	TObjectPtr<UCurveFloat> CustomEase = nullptr;

	/** Applied the moment the step becomes active. Instant -- for a fade, drive material opacity instead. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	EAzr_AnimVisibility Visibility = EAzr_AnimVisibility::NoChange;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	FAzr_AnimSound Sound;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Step")
	TArray<FAzr_AnimMaterialTarget> MaterialTargets;
};

/**
 * UAzr_Animation
 * Records and plays simple transform animations on any scene component.
 *
 * Built for the hundred small mechanical moves a training module needs -- a cover lifting, a breaker
 * racking out, a panel sliding -- authored by dropping the component on an actor, dragging the mesh
 * where it should end up, and pressing a button. It is deliberately not a Sequencer replacement:
 * Sequencer already does all of this and more, and costs an asset, a binding and a track to do it.
 * The narrow scope is the point.
 *
 * Drives any USceneComponent, so static meshes, skeletal meshes, world-space widgets, Niagara systems,
 * audio, cameras and lights all work without a special case.
 *
 * Three things can drive the animation, and all of them go through EvaluateAtAlpha:
 *   - the PreviewAlpha slider, which scrubs it live in the editor viewport
 *   - Play/PlayReverse, which drive alpha from a timer
 *   - SetAlpha, which lets something else drive it -- most usefully UAzr_Latch's OnValueChanged,
 *     already normalised 0..1, so a hand-turned valve moves a gate in lockstep
 */
UCLASS(ClassGroup = (AzurealXR), meta = (BlueprintSpawnableComponent, DisplayName = "Azr Animation"))
class AZUREALXR_API UAzr_Animation : public UActorComponent
{
	GENERATED_BODY()

public:
	UAzr_Animation();

	// --- SETUP ---

	/**
	 * The component this animates. Anything deriving from USceneComponent is valid, so static meshes,
	 * skeletal meshes, world-space widgets and Niagara systems all work.
	 *
	 * Required, and it must not be the actor's root. A root has no attach parent, so its relative
	 * transform is its world transform: recording one bakes in where the actor was standing, and the
	 * level gizmo cannot move it independently of the actor anyway. Put the mesh under a scene root
	 * and point this at the mesh.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Setup")
	FComponentReference TargetComponent;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Setup")
	TArray<FAzr_AnimStep> Steps;

	/** Multiplies every step's duration when played on a timer. Ignored by SetAlpha. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Setup", meta = (ClampMin = "0.01"))
	float PlayRate = 1.f;

	/**
	 * Where the component sits at alpha 0, relative to its parent.
	 *
	 * Captured the first time a step is recorded, and re-applied at BeginPlay -- so a level saved with
	 * the mesh left halfway through a pose still starts correct at runtime. That forgiveness is worth
	 * more than it looks: the mistake is otherwise invisible until someone plays the chapter.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Setup")
	FTransform RestTransform;

	/**
	 * Whether Record Start Position has been pressed.
	 *
	 * Save Step refuses until it has. The first Save Step used to quietly adopt the current pose as
	 * the start as well as the step, which meant dragging first and pressing once recorded A and B as
	 * the same place and the animation did nothing -- with nothing on screen to say why.
	 */
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Azureal|Setup")
	bool bStartRecorded = false;

	// --- EVENTS ---

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnAzrAnimEvent OnAnimationStarted;

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnAzrAnimEvent OnAnimationFinished;

	/** Fires as each step completes. Bind this to enable whatever the trainee does next. */
	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnAzrAnimStepEvent OnStepReached;

	/** Every alpha change, whatever drove it. Lets one animation follow another. */
	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FOnAzrAnimAlphaEvent OnAlphaChanged;

	// --- PLAYBACK ---

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void Play();

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void PlayReverse();

	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void Stop();

	/** Snap back to the rest pose and forget which sounds have fired. */
	UFUNCTION(BlueprintCallable, CallInEditor, Category = "Azureal|Logic", meta = (DisplayName = "Go To Start Position"))
	void ResetToRest();

	/**
	 * Drive the animation directly, 0 at rest and 1 fully played.
	 *
	 * Wire UAzr_Latch's OnValueChanged straight into this -- it already broadcasts a normalised 0..1,
	 * so a hand-turned valve drives the animation with no conversion. Cancels any timed playback,
	 * because two things fighting over one transform is never what anyone wanted.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void SetAlpha(float Alpha);

	/**
	 * The component this actually drives, resolved the same way every internal caller resolves it.
	 *
	 * Exposed so the Blueprint-editor panel can ask rather than repeat the lookup. It had its own
	 * copy, which meant the buttons and the preview could disagree about what the target even was --
	 * and only one of the two paths was ever tested.
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal|Logic")
	USceneComponent* GetAnimatedComponent() const;

	UFUNCTION(BlueprintPure, Category = "Azureal|Logic")
	float GetAlpha() const { return CurrentAlpha; }

	UFUNCTION(BlueprintPure, Category = "Azureal|Logic")
	bool IsPlaying() const { return bPlaying; }

	/** Total seconds at PlayRate 1, with parallel steps counted once. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Logic")
	float GetTotalDuration() const { return TotalDuration; }

	/**
	 * Position everything for this alpha. The single place transforms are written.
	 *
	 * Play, the editor scrub slider and SetAlpha all land here, which is why driving the animation
	 * from a latch costs nothing extra -- it is the same evaluation the slider already uses.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Logic")
	void EvaluateAtAlpha(float Alpha);

	// --- AUTHORING ---

#if WITH_EDITOR
	/**
	 * Take the component's current pose as a new step, and leave it where it is.
	 *
	 * Leaving it put is deliberate: the next step is authored by dragging on from here, which is how
	 * a 1-2-3 sequence is actually built. Press Reset To Rest when finished.
	 */
	UFUNCTION(CallInEditor, Category = "Azureal|Authoring", meta = (DisplayName = "2. Save Step (drag first, then press)"))
	void AddStepFromCurrentPose();

	/** Overwrite the step at Edit Step Index with the current pose. */
	UFUNCTION(CallInEditor, Category = "Azureal|Authoring", meta = (DisplayName = "Re-record Step at Edit Step Index"))
	void UpdateStepFromCurrentPose();

	/** Make the current pose the new rest pose. Existing steps are left alone. */
	UFUNCTION(CallInEditor, Category = "Azureal|Authoring", meta = (DisplayName = "1. Record Start Position"))
	void SetRestPoseFromCurrent();

	/**
	 * The same three, taking a pose the caller already worked out.
	 *
	 * The Blueprint-editor panel needs these. A component added in the Blueprint editor is an SCS
	 * template with no actor anywhere in its outer chain, so TargetComponent cannot be resolved the
	 * normal way -- the panel matches the name against the construction script and passes the result.
	 */
	void AddStepFromTransform(const FTransform& Pose);
	void UpdateStepFromTransform(const FTransform& Pose);
	void SetRestPoseFromTransform(const FTransform& Pose);

	virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
#endif

#if WITH_EDITORONLY_DATA
	/** Which step Update Step From Current Pose overwrites. */
	UPROPERTY(EditAnywhere, Category = "Azureal|Authoring", meta = (ClampMin = "0"))
	int32 EditStepIndex = 0;

	/**
	 * Scrubs the whole animation live in the viewport, no PIE needed.
	 *
	 * The cheapest useful thing in this component: it is the same evaluation runtime uses, so what
	 * the slider shows is what plays.
	 */
	UPROPERTY(EditAnywhere, Category = "Azureal|Authoring", meta = (ClampMin = "0.0", ClampMax = "1.0"))
	float PreviewAlpha = 0.f;

	/**
	 * The running order, kept next to the buttons because getting it wrong is silent.
	 *
	 * Recording the start AFTER dragging is the trap: start and step then hold the same pose, the
	 * animation has no distance to cover, and nothing says so. Originally this explained why the
	 * buttons were missing in the Blueprint editor; the details customization puts them there now.
	 */
	UPROPERTY(VisibleAnywhere, Category = "Azureal|Authoring")
	FString AuthoringHint = TEXT("Not a button, just the order: set Target Component, press Record Start Position, drag the target, press Save Step. Repeat the drag and Save Step for each further step. Press Go To Start Position before compiling or saving.");
#endif

protected:
	virtual void BeginPlay() override;
	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
private:
	/** The component named by TargetComponent, or null. Never guesses -- see the note in the .cpp. */
	USceneComponent* ResolveTarget() const;

	/** The SCS-template fallback for ResolveTarget, used when the component lives in a Blueprint. */
	USceneComponent* ResolveTargetTemplate() const;

	/** Logs why an authoring button did nothing, rather than letting it fail in silence. */
	bool ValidateTargetForAuthoring(const TCHAR* Action) const;

	/** Recomputes step windows and TotalDuration. Cheap; call it whenever Steps may have changed. */
	void RebuildTimeline();

	static float ApplyEase(float T, const FAzr_AnimStep& Step);

	/** Clears every fired flag so a fresh pass may sound again. Sizes the arrays as a side effect. */
	void ArmTriggers();

	void HandleStepSound(int32 Index, float StepAlpha, bool bMoving);
	void StopAllLoops();

	UMaterialInstanceDynamic* GetMID(int32 Slot);
	void ApplyMaterialTargets(int32 Index, float EasedAlpha);

	/** Start and end second of every step, parallel to Steps. */
	TArray<FVector2D> StepWindows;

	float TotalDuration = 0.f;
	float CurrentAlpha = 0.f;

	bool bPlaying = false;
	float PlayDirection = 1.f;
	float Elapsed = 0.f;

	/** Seconds on the world clock when the alpha last actually moved. Drives WhileMoving. */
	double LastAlphaMoveTime = 0.0;

	/** Per step, whether its start and end sounds have fired at the current pass. */
	TArray<uint8> StartFired;
	TArray<uint8> EndFired;

	/** The target's visibility before any step touched it, so alpha 0 puts it back. */
	bool bRestVisible = true;
	bool bRestVisibleCaptured = false;

	/** Highest step index whose completion has been broadcast, so OnStepReached fires once per pass. */
	int32 LastReportedStep = INDEX_NONE;

	UPROPERTY(Transient)
	TArray<TObjectPtr<UAudioComponent>> StepLoops;

	UPROPERTY(Transient)
	TMap<int32, TObjectPtr<UMaterialInstanceDynamic>> SlotMIDs;

	/** Material values as they were before anything was written, keyed "slot:parameter". */
	TMap<FString, float> RestScalars;
	TMap<FString, FLinearColor> RestColors;
};
