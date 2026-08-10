

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "Azr_SaveGame.h"
#include "Azr_SaveSubsystem.generated.h"

class AActor;
class UActorComponent;

/** Fired just before capture, so other modules can write their payload into the save. */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAzr_OnCaptureSave, UAzr_SaveGame*, SaveGame);

/** Fired after the world has been restored, so other modules can read their payload back out. */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAzr_OnRestoreSave, UAzr_SaveGame*, SaveGame);

/** Fired once a restore has fully finished. Blueprints can resume their own flow from here. */
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAzr_OnRestoreComplete);

/**
 * Whole-world save and restore.
 *
 * Lives on the GameInstance so it survives the level travel a load has to perform: the save is read,
 * held here, OpenLevel runs, and the snapshot is applied once the new world has finished BeginPlay.
 *
 * WHAT IS CAPTURED
 *   Every reflected property on every saveable actor and its components -- which means all Blueprint
 *   variables, so a Game Manager's step counter, a door's "is open" flag and anything an Event Tick
 *   accumulates all come back on their own. Plus transforms, attachments, physics velocities,
 *   visibility, the player's pose, and which Azureal interactions were armed.
 *
 * WHAT IS NOT, AND CANNOT BE
 *   Blueprint execution position. A graph part-way through a Delay, a timer or an async node keeps
 *   that position in the latent action manager, which is not reflected and cannot be serialised.
 *   Restoring into one would leave a chain that never continues. Animation state machine internals
 *   and Niagara are likewise unreachable; montages and Level Sequences are restorable by position,
 *   via IAzr_Saveable.
 *
 * That is why saving is only permitted at quiescent moments. SetSafeToSave(false) is expected while
 * a step chain is running; SaveToSlot refuses in that window rather than writing a snapshot that
 * would soft-lock the learner on load.
 */
UCLASS()
class AZUREALXR_API UAzr_SaveSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()

public:
	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

	// --- SAVING ---

	/**
	 * Snapshot the world into a slot. Returns false and writes nothing if a step chain is currently
	 * in flight, since a mid-chain snapshot cannot be resumed.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save", meta = (AdvancedDisplay = "SlotName"))
	bool SaveToSlot(const FString& SlotName);

	/** Snapshot into the slot for the current learner. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	bool SaveProgress();

	/**
	 * Snapshot the world into a fresh object without writing anything to disk.
	 *
	 * Exposed for the verification commands, which need to compare a live capture against a restored
	 * one without disturbing the learner's actual slot. Ignores the safety window deliberately: a test
	 * wanting to inspect a mid-chain world should be able to.
	 */
	UAzr_SaveGame* CaptureToObject();

	// --- LOADING ---

	/**
	 * Read a slot and travel to its level. The world is restored automatically once loading finishes;
	 * OnRestoreComplete fires when it is done. Returns false if the slot is missing or unusable.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save", meta = (AdvancedDisplay = "SlotName"))
	bool LoadFromSlot(const FString& SlotName);

	/** Read and resume the slot for the current learner. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	bool LoadProgress();

	// --- SLOT QUERIES (for a Continue button) ---

	UFUNCTION(BlueprintPure, Category = "Azureal|Save")
	bool DoesSaveExist(const FString& SlotName) const;

	UFUNCTION(BlueprintPure, Category = "Azureal|Save")
	bool HasProgress() const;

	/** Peek at a slot without loading it, for labelling a Continue button. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	bool GetSaveSummary(const FString& SlotName, FString& OutProgressLabel, FDateTime& OutSavedAtUtc, float& OutAccumulatedSeconds) const;

	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	bool DeleteSave(const FString& SlotName);

	/** Wipe the current learner's progress. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	bool DeleteProgress();

	/**
	 * Slot name for the learner this session belongs to. On a shared training machine an unkeyed slot
	 * would let one learner resume another's progress, so the session token is folded into the name.
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal|Save")
	FString GetDefaultSlotName() const;

	// --- SAFETY WINDOW ---

	/**
	 * Mark whether the world is currently in a state that can be snapshotted. Call false when a step
	 * chain starts and true when it reaches Advance Progress. Saves attempted in between are refused.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	void SetSafeToSave(bool bSafe);

	UFUNCTION(BlueprintPure, Category = "Azureal|Save")
	bool IsSafeToSave() const { return bSafeToSave; }

	/** True while a restore is in progress. Branch on this to stop reporting a resumed step to the LMS twice. */
	UFUNCTION(BlueprintPure, Category = "Azureal|Save")
	bool IsRestoring() const { return bIsRestoring; }

	/**
	 * True from the moment a load is requested until the resumed position has been taken up.
	 *
	 * Deliberately set BEFORE the level travel, because that is the only way it can be observed by
	 * widgets. PostLoadMapWithWorld -- where the snapshot is applied -- fires AFTER World->BeginPlay,
	 * so anything a widget checks during its own construction would still read false.
	 */
	UFUNCTION(BlueprintPure, Category = "Azureal|Save")
	bool IsResumePending() const { return bResumePending; }

	/** Called once the resumed position has actually been applied, so the flag does not linger. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	void ClearResumePending() { bResumePending = false; }

	/**
	 * Stand every Azureal interaction in the world down. Returns how many were touched.
	 *
	 * Needed when a resume re-enters a step rather than restoring it in place: the sequencer is about
	 * to arm that step from its first sub-step, while the snapshot has separately re-armed whichever
	 * sub-step the learner was actually on. Left alone, both are live at once and both fire. The
	 * sequencer's arming is the one that matches what the learner is about to be shown, so everything
	 * else is cleared out of its way first.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	int32 DisarmAllInteractions();

	/**
	 * Bring every interaction back to the state the save recorded. Returns how many were considered.
	 *
	 * Split out from the restore itself so the world does not come alive behind the menu: applying the
	 * snapshot puts the objects back, but the guidance and interactions only wake when the learner
	 * actually enters the chapter.
	 */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	int32 ReArmSavedInteractions();

	// --- SESSION FACTS THE SAVE CARRIES ---

	/** Seconds of training so far. Kept here rather than on the step page widget, which is rebuilt on load. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	void SetAccumulatedSeconds(float Seconds) { AccumulatedSeconds = Seconds; }

	UFUNCTION(BlueprintPure, Category = "Azureal|Save")
	float GetAccumulatedSeconds() const { return AccumulatedSeconds; }

	/** Text the menu shows beside Continue, e.g. "Chapter 2 - Step 4". */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	void SetProgressLabel(const FString& Label) { ProgressLabel = Label; }

	/** Record that a sub-step has already been reported to the LMS, so a resume does not report it again. */
	UFUNCTION(BlueprintCallable, Category = "Azureal|Save")
	void MarkReported(const FString& Key);

	UFUNCTION(BlueprintPure, Category = "Azureal|Save")
	bool WasReported(const FString& Key) const { return ReportedKeys.Contains(Key); }

	// --- EVENTS ---

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FAzr_OnCaptureSave OnCaptureSave;

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FAzr_OnRestoreSave OnRestoreSave;

	UPROPERTY(BlueprintAssignable, Category = "Azureal|Events")
	FAzr_OnRestoreComplete OnRestoreComplete;

	/**
	 * How long to wait after the map loads before applying the snapshot.
	 *
	 * Restore has to run after every actor's BeginPlay, because the Azureal components build their
	 * capsules, resolve their zones and cache their meshes there -- writing state in before that
	 * would simply be overwritten.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Save")
	float RestoreDelay = 0.5f;

private:
	// --- CAPTURE ---
	void CaptureWorld(UAzr_SaveGame* SaveGame, UWorld* World);
	void CaptureActor(AActor* Actor, FAzr_ActorRecord& OutRecord);
	void CaptureComponent(UActorComponent* Component, FAzr_ComponentRecord& OutRecord);
	void CapturePawn(UWorld* World, FAzr_PawnRecord& OutRecord);

	// --- RESTORE ---
	void OnMapLoaded(UWorld* LoadedWorld);
	void ApplyPendingRestore();
	void RestoreActor(AActor* Actor, const FAzr_ActorRecord& Record);
	void RestoreComponent(UActorComponent* Component, const FAzr_ComponentRecord& Record);
	void RestoreAttachments(UWorld* World, const UAzr_SaveGame* SaveGame, const TMap<FName, AActor*>& ActorsByName);
	void RestorePawn(UWorld* World, const FAzr_PawnRecord& Record);

	/** Dumps who owns the player's view after a restore. Only useful when the view comes back wrong. */
	void LogViewDiagnostics(UWorld* World, const TCHAR* When) const;

	// --- SHARED ---
	static bool IsSaveable(const AActor* Actor);
	static void CaptureProperties(const UObject* Object, TArray<FAzr_PropertyRecord>& OutProperties);
	static void RestoreProperties(UObject* Object, const TArray<FAzr_PropertyRecord>& Properties);

	/** Held across level travel; applied once the destination world has settled. */
	UPROPERTY()
	TObjectPtr<UAzr_SaveGame> PendingRestore;

	UPROPERTY()
	TArray<FString> ReportedKeys;

	float AccumulatedSeconds = 0.0f;
	FString ProgressLabel;

	bool bSafeToSave = true;
	bool bIsRestoring = false;
	bool bResumePending = false;

	FDelegateHandle MapLoadHandle;
	FTimerHandle RestoreTimer;
};
