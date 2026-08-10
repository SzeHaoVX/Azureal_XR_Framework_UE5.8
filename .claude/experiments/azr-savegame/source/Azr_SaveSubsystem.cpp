

#include "Azr_SaveSubsystem.h"

#include "Azr_Saveable.h"
#include "Azr_Pawn.h"
#include "Azr_Grab.h"
#include "Azr_Latch.h"
#include "Azr_Touch.h"
#include "Azr_Explain.h"
#include "Azr_Action.h"
#include "Azr_Label.h"
#include "Azr_Gaze.h"

#include "Blueprint/UserWidget.h"
#include "Components/Widget.h"
#include "Camera/CameraComponent.h"
#include "Camera/PlayerCameraManager.h"
#include "Components/PrimitiveComponent.h"
#include "GameFramework/Controller.h"
#include "GameFramework/GameModeBase.h"
#include "GameFramework/GameStateBase.h"
#include "GameFramework/HUD.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/WorldSettings.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Engine/BlueprintGeneratedClass.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "GameFramework/Pawn.h"
#include "Kismet/GameplayStatics.h"
#include "Serialization/MemoryReader.h"
#include "Serialization/MemoryWriter.h"
#include "Serialization/ObjectAndNameAsStringProxyArchive.h"
#include "Serialization/StructuredArchiveAdapters.h"
#include "TimerManager.h"
#include "UObject/UnrealType.h"
#include "UObject/UObjectGlobals.h"

DEFINE_LOG_CATEGORY_STATIC(LogAzrSave, Log, All);

namespace
{
	/** Actors carrying this tag are left out of the snapshot entirely. */
	const FName ExcludeTag(TEXT("AzrNoSave"));

	/**
	 * Object references are written as path strings rather than raw pointers, which is what makes a
	 * save meaningful in a later process. ArNoDelta forces every property to be written rather than
	 * only those differing from the class defaults -- a level-placed actor's authored values differ
	 * from its CDO, so a delta would restore the wrong baseline.
	 */
	struct FAzr_SaveArchive : public FObjectAndNameAsStringProxyArchive
	{
		FAzr_SaveArchive(FArchive& InInner, bool bInLoadIfFindFails)
			: FObjectAndNameAsStringProxyArchive(InInner, bInLoadIfFindFails)
		{
			ArNoDelta = true;
		}
	};

	/**
	 * Properties that must never round-trip through a save.
	 *
	 * Delegates are the important exclusion: they hold live runtime bindings, and overwriting those
	 * with whatever was bound when the save was written would detach every event the level has since
	 * wired up. Transient is skipped because it means "derived, rebuild me", and component pointers
	 * because the construction script already re-establishes them correctly.
	 */
	/**
	 * Properties whose value is applied through a SETTER during restore rather than written raw.
	 *
	 * Writing these directly is worse than not writing them: the memory changes but the engine never
	 * hears about it, so the later setter sees "no change" and skips the work that actually matters --
	 * the render transform never updates, the actor never really hides, the collision body is never
	 * rebuilt. Restore assigns each of these explicitly, so the raw copy is pure harm.
	 */
	bool IsSetterOwnedProperty(const FName Name)
	{
		return Name == TEXT("bHidden")             // RestoreActor calls SetActorHiddenInGame
			|| Name == TEXT("RelativeLocation")    // RestoreComponent calls SetRelativeTransform
			|| Name == TEXT("RelativeRotation")
			|| Name == TEXT("RelativeScale3D")
			|| Name == TEXT("AttachParent")        // RestoreAttachments owns the whole attachment
			|| Name == TEXT("AttachSocketName")
			|| Name == TEXT("AttachChildren")
			|| Name == TEXT("BodyInstance");       // collision is re-established by the Enable* calls
	}

	bool ShouldSkipProperty(const FProperty* Property)
	{
		if (!Property)
		{
			return true;
		}
		if (IsSetterOwnedProperty(Property->GetFName()))
		{
			return true;
		}
		if (Property->HasAnyPropertyFlags(CPF_Transient | CPF_DuplicateTransient | CPF_NonPIEDuplicateTransient | CPF_Deprecated | CPF_EditorOnly))
		{
			return true;
		}
		if (Property->IsA<FMulticastDelegateProperty>() || Property->IsA<FDelegateProperty>())
		{
			return true;
		}
		if (const FObjectPropertyBase* ObjectProperty = CastField<FObjectPropertyBase>(Property))
		{
			if (ObjectProperty->PropertyClass && ObjectProperty->PropertyClass->IsChildOf(UActorComponent::StaticClass()))
			{
				return true;
			}

			// Widget references are runtime plumbing, not saved state, and restoring them is actively
			// destructive. Widgets live in the transient package, so their saved paths cannot resolve
			// after a level reload -- the restore then writes NULL over a reference the fresh level had
			// already wired up correctly. A Game Manager holding the step page that way loses it, and
			// its Advance Progress calls quietly go nowhere: the learner completes a step and nothing
			// ticks. The level rebuilds these references itself; the save must leave them alone.
			if (ObjectProperty->PropertyClass && ObjectProperty->PropertyClass->IsChildOf(UWidget::StaticClass()))
			{
				return true;
			}
			if (ObjectProperty->PropertyClass && ObjectProperty->PropertyClass->IsChildOf(UUserWidget::StaticClass()))
			{
				return true;
			}
		}
		return false;
	}

	/** Stand an interaction down, whatever type it is. */
	void DisarmComponent(UActorComponent* Component)
	{
		if (UAzr_Grab* Grab = Cast<UAzr_Grab>(Component))          { Grab->DisableGrab();       return; }
		if (UAzr_Latch* Latch = Cast<UAzr_Latch>(Component))       { Latch->DisableLatch();     return; }
		if (UAzr_Touch* Touch = Cast<UAzr_Touch>(Component))       { Touch->DisableTouch();     return; }
		if (UAzr_Explain* Explain = Cast<UAzr_Explain>(Component)) { Explain->DisableExplain(); return; }
		if (UAzr_Action* Action = Cast<UAzr_Action>(Component))    { Action->DisableAction();   return; }
		if (UAzr_Label* Label = Cast<UAzr_Label>(Component))       { Label->DisableLabel();     return; }
		if (UAzr_Gaze* Gaze = Cast<UAzr_Gaze>(Component))          { Gaze->DisableGaze();       return; }
	}

	/**
	 * Put the interaction back into exactly the state the save recorded.
	 *
	 * Re-issuing the Enable* call matters because the guard bools and the highlight, tether, widget and
	 * timers behind it are unreflected runtime state on a freshly constructed component -- restoring
	 * AzrArmedMode alone would leave an interaction that claims to be armed but is visually dead.
	 *
	 * The None case is just as important. The fresh level runs its own BeginPlay and may well arm step
	 * one during the load window; anything the save says was dormant has to be stood back down, or the
	 * learner resumes with a stale interaction live alongside the correct one.
	 */
	void ReArmComponent(UActorComponent* Component)
	{
		if (UAzr_Grab* Grab = Cast<UAzr_Grab>(Component))
		{
			const FName Mode = Grab->AzrArmedMode;
			if (Mode == TEXT("Grab"))             { Grab->EnableGrab(); }
			else if (Mode == TEXT("GrabAttach"))  { Grab->EnableGrabAttach(Grab->AzrArmedSequenceID); }
			else if (Mode == TEXT("GrabRemove"))  { Grab->EnableGrabRemove(); }
			else if (Mode == TEXT("GrabTrigger")) { Grab->EnableGrabTrigger(); }
			else                                  { Grab->DisableGrab(); }
			return;
		}
		if (UAzr_Latch* Latch = Cast<UAzr_Latch>(Component))
		{
			if (Latch->AzrArmedMode == TEXT("Latch")) { Latch->EnableLatch(); }
			else                                      { Latch->DisableLatch(); }
			return;
		}
		if (UAzr_Touch* Touch = Cast<UAzr_Touch>(Component))
		{
			if (Touch->AzrArmedMode == TEXT("Touch")) { Touch->EnableTouch(); }
			else                                      { Touch->DisableTouch(); }
			return;
		}
		if (UAzr_Explain* Explain = Cast<UAzr_Explain>(Component))
		{
			const FName Mode = Explain->AzrArmedMode;
			if (Mode == TEXT("Explain"))          { Explain->EnableExplain(); }
			else if (Mode == TEXT("ExplainPlus")) { Explain->EnableExplainPlus(); }
			else                                  { Explain->DisableExplain(); }
			return;
		}
		if (UAzr_Action* Action = Cast<UAzr_Action>(Component))
		{
			if (Action->AzrArmedMode == TEXT("Action")) { Action->EnableAction(); }
			else                                        { Action->DisableAction(); }
			return;
		}
		if (UAzr_Label* Label = Cast<UAzr_Label>(Component))
		{
			if (Label->AzrArmedMode == TEXT("Label")) { Label->EnableLabel(); }
			else                                      { Label->DisableLabel(); }
			return;
		}
		if (UAzr_Gaze* Gaze = Cast<UAzr_Gaze>(Component))
		{
			if (Gaze->AzrArmedMode == TEXT("Gaze")) { Gaze->EnableGaze(); }
			else                                    { Gaze->DisableGaze(); }
			return;
		}
	}
}

// --- LIFECYCLE ---

void UAzr_SaveSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);

	MapLoadHandle = FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(this, &UAzr_SaveSubsystem::OnMapLoaded);
}

void UAzr_SaveSubsystem::Deinitialize()
{
	if (MapLoadHandle.IsValid())
	{
		FCoreUObjectDelegates::PostLoadMapWithWorld.Remove(MapLoadHandle);
		MapLoadHandle.Reset();
	}
	Super::Deinitialize();
}

// --- SLOT NAMING ---

FString UAzr_SaveSubsystem::GetDefaultSlotName() const
{
	// Training machines are shared, so the slot is keyed to whoever the launcher signed in. Without
	// this the next learner to press Continue would resume the previous learner's progress.
	FString Learner = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_USER_ID"));
	if (Learner.IsEmpty())
	{
		Learner = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_TOKEN"));
	}
	if (Learner.IsEmpty())
	{
		return TEXT("AzurealProgress");
	}

	// The token is a credential -- hash it so it never lands on disk as a readable filename.
	return FString::Printf(TEXT("AzurealProgress_%08X"), GetTypeHash(Learner));
}

// --- SAVING ---

bool UAzr_SaveSubsystem::SaveProgress()
{
	return SaveToSlot(GetDefaultSlotName());
}

bool UAzr_SaveSubsystem::SaveToSlot(const FString& SlotName)
{
	if (!GetWorld())
	{
		return false;
	}

	if (!bSafeToSave)
	{
		// A snapshot taken while a step chain is running would restore into a graph stopped inside a
		// Delay or timer, which never continues. Refusing is the only safe answer; the previous
		// boundary's save stays on disk and the learner loses at most the sub-step they were in.
		UE_LOG(LogAzrSave, Warning, TEXT("Save refused: a step chain is in flight. The last sub-step boundary remains saved."));
		return false;
	}

	UAzr_SaveGame* SaveGame = CaptureToObject();
	if (!SaveGame)
	{
		return false;
	}

	const bool bWritten = UGameplayStatics::SaveGameToSlot(SaveGame, SlotName, 0);
	UE_LOG(LogAzrSave, Log, TEXT("Save to '%s' %s (%d actors, level '%s')"),
		*SlotName, bWritten ? TEXT("succeeded") : TEXT("FAILED"), SaveGame->Actors.Num(), *SaveGame->LevelName.ToString());

	return bWritten;
}

UAzr_SaveGame* UAzr_SaveSubsystem::CaptureToObject()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return nullptr;
	}

	UAzr_SaveGame* SaveGame = Cast<UAzr_SaveGame>(UGameplayStatics::CreateSaveGameObject(UAzr_SaveGame::StaticClass()));
	if (!SaveGame)
	{
		return nullptr;
	}

	SaveGame->SaveVersion = UAzr_SaveGame::CurrentSaveVersion;
	SaveGame->ModuleVersionId = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_MODULE_VERSION_ID"));
	SaveGame->LevelName = FName(*UGameplayStatics::GetCurrentLevelName(World, true));
	SaveGame->SavedAtUtc = FDateTime::UtcNow();
	SaveGame->AccumulatedSeconds = AccumulatedSeconds;
	SaveGame->ProgressLabel = ProgressLabel;
	SaveGame->ReportedKeys = ReportedKeys;

	CapturePawn(World, SaveGame->Pawn);
	CaptureWorld(SaveGame, World);

	// Other modules add their own state here. CSM writes curriculum progress under "CSM".
	OnCaptureSave.Broadcast(SaveGame);

	return SaveGame;
}

void UAzr_SaveSubsystem::CaptureWorld(UAzr_SaveGame* SaveGame, UWorld* World)
{
	for (TActorIterator<AActor> It(World); It; ++It)
	{
		AActor* Actor = *It;
		if (!IsSaveable(Actor))
		{
			continue;
		}

		// Give the actor a chance to push transient state (montage positions, sequence times) into
		// saved variables before anything is read.
		if (Actor->GetClass()->ImplementsInterface(UAzr_Saveable::StaticClass()))
		{
			IAzr_Saveable::Execute_AzrOnSaved(Actor);
		}

		FAzr_ActorRecord Record;
		CaptureActor(Actor, Record);
		SaveGame->Actors.Add(MoveTemp(Record));
	}
}

void UAzr_SaveSubsystem::CaptureActor(AActor* Actor, FAzr_ActorRecord& OutRecord)
{
	OutRecord.ActorName = Actor->GetFName();
	OutRecord.ActorClass = FSoftClassPath(Actor->GetClass());
	OutRecord.Transform = Actor->GetActorTransform();
	OutRecord.bHidden = Actor->IsHidden();

	// An actor placed in the level is loaded from disk and will already be there after the travel;
	// one spawned at runtime will not, and has to be recreated rather than matched.
	OutRecord.bSpawnedAtRuntime = !Actor->HasAnyFlags(RF_WasLoaded);

	if (const AActor* AttachParent = Actor->GetAttachParentActor())
	{
		OutRecord.AttachedToActor = AttachParent->GetFName();
		OutRecord.AttachedToSocket = Actor->GetAttachParentSocketName();
	}

	if (const UPrimitiveComponent* Root = Cast<UPrimitiveComponent>(Actor->GetRootComponent()))
	{
		if (Root->IsSimulatingPhysics())
		{
			OutRecord.bSimulatingPhysics = true;
			OutRecord.LinearVelocity = Root->GetPhysicsLinearVelocity();
			OutRecord.AngularVelocity = Root->GetPhysicsAngularVelocityInDegrees();
		}
	}

	CaptureProperties(Actor, OutRecord.Properties);

	TArray<UActorComponent*> Components;
	Actor->GetComponents(Components);
	for (UActorComponent* Component : Components)
	{
		if (!Component)
		{
			continue;
		}
		FAzr_ComponentRecord ComponentRecord;
		CaptureComponent(Component, ComponentRecord);
		OutRecord.Components.Add(MoveTemp(ComponentRecord));
	}
}

/** Reads AzrArmedMode off any Azureal interaction component, for the record and the debug tools. */
static void ReadArmedMode(const UActorComponent* Component, FName& OutMode, int32& OutSequenceID)
{
	OutMode = NAME_None;
	OutSequenceID = 0;
	if (!Component)
	{
		return;
	}

	// Read reflectively rather than by casting to each of the seven component types: the field is a
	// UPROPERTY on all of them, and a new interaction type then needs no change here.
	const UClass* Class = Component->GetClass();
	if (const FNameProperty* ModeProperty = CastField<FNameProperty>(Class->FindPropertyByName(TEXT("AzrArmedMode"))))
	{
		OutMode = ModeProperty->GetPropertyValue_InContainer(Component);
	}
	if (const FIntProperty* IdProperty = CastField<FIntProperty>(Class->FindPropertyByName(TEXT("AzrArmedSequenceID"))))
	{
		OutSequenceID = IdProperty->GetPropertyValue_InContainer(Component);
	}
}

void UAzr_SaveSubsystem::CaptureComponent(UActorComponent* Component, FAzr_ComponentRecord& OutRecord)
{
	OutRecord.ComponentName = Component->GetFName();

	// The component re-arms itself from its own restored AzrArmedMode property, so this record field is
	// not what drives restore -- it is what lets the verification tools show which interactions were
	// live, and diff them across a save and load.
	ReadArmedMode(Component, OutRecord.ArmedMode, OutRecord.ArmedSequenceID);

	// Only movable components are worth recording -- a static one cannot have gone anywhere, and
	// writing to it on restore would trip the mobility check.
	if (const USceneComponent* Scene = Cast<USceneComponent>(Component))
	{
		if (Scene->Mobility == EComponentMobility::Movable)
		{
			OutRecord.bHasRelativeTransform = true;
			OutRecord.RelativeTransform = Scene->GetRelativeTransform();
		}
	}

	CaptureProperties(Component, OutRecord.Properties);
}

void UAzr_SaveSubsystem::CapturePawn(UWorld* World, FAzr_PawnRecord& OutRecord)
{
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(World, 0);
	if (!Pawn)
	{
		return;
	}

	OutRecord.bValid = true;
	OutRecord.PawnTransform = Pawn->GetActorTransform();

	// Record where the player's HEAD was, not where the pawn actor sat. The camera is driven by the
	// headset, so the pawn transform alone says nothing about where the learner was standing.
	if (const AAzr_Pawn* AzrPawn = Cast<AAzr_Pawn>(Pawn))
	{
		if (AzrPawn->Camera)
		{
			OutRecord.CameraWorldLocation = AzrPawn->Camera->GetComponentLocation();
			OutRecord.CameraYaw = AzrPawn->Camera->GetComponentRotation().Yaw;
		}
	}
}

// --- LOADING ---

bool UAzr_SaveSubsystem::LoadProgress()
{
	return LoadFromSlot(GetDefaultSlotName());
}

bool UAzr_SaveSubsystem::LoadFromSlot(const FString& SlotName)
{
	UAzr_SaveGame* SaveGame = Cast<UAzr_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGame)
	{
		UE_LOG(LogAzrSave, Warning, TEXT("Load failed: no save in slot '%s'."), *SlotName);
		return false;
	}

	if (SaveGame->SaveVersion != UAzr_SaveGame::CurrentSaveVersion)
	{
		UE_LOG(LogAzrSave, Warning, TEXT("Load refused: slot '%s' is save version %d, this build expects %d."),
			*SlotName, SaveGame->SaveVersion, UAzr_SaveGame::CurrentSaveVersion);
		return false;
	}

	// Progress is stored as step indices. If the course content has been re-authored since, those
	// indices point at different material, so resuming would drop the learner on the wrong step.
	const FString CurrentModuleVersion = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_MODULE_VERSION_ID"));
	if (!SaveGame->ModuleVersionId.IsEmpty() && !CurrentModuleVersion.IsEmpty() && SaveGame->ModuleVersionId != CurrentModuleVersion)
	{
		UE_LOG(LogAzrSave, Warning, TEXT("Load refused: slot '%s' was written against module version '%s', this build is '%s'."),
			*SlotName, *SaveGame->ModuleVersionId, *CurrentModuleVersion);
		return false;
	}

	if (SaveGame->LevelName.IsNone())
	{
		UE_LOG(LogAzrSave, Warning, TEXT("Load failed: slot '%s' records no level."), *SlotName);
		return false;
	}

	AccumulatedSeconds = SaveGame->AccumulatedSeconds;
	ProgressLabel = SaveGame->ProgressLabel;
	ReportedKeys = SaveGame->ReportedKeys;

	// Raised BEFORE the travel on purpose. The menu widget checks this while it is constructing, and
	// construction happens during World->BeginPlay -- which runs BEFORE PostLoadMapWithWorld, where the
	// snapshot is applied. A flag set at restore time would always read false to the widget that needs
	// it, so it has to be raised on this side of the travel and survive it.
	bResumePending = true;

	// Held on the GameInstance so it survives the travel, and applied once the destination world has
	// finished BeginPlay.
	PendingRestore = SaveGame;
	UGameplayStatics::OpenLevel(GetWorld(), SaveGame->LevelName);
	return true;
}

void UAzr_SaveSubsystem::OnMapLoaded(UWorld* LoadedWorld)
{
	if (!PendingRestore || !LoadedWorld)
	{
		return;
	}

	// This delegate fires for EVERY map load, including one the player triggered themselves while a
	// restore was still pending. Applying a snapshot to the wrong level would destroy every actor in it
	// that the save has no record of, so the destination is checked before anything is touched.
	const FString LoadedName = UGameplayStatics::GetCurrentLevelName(LoadedWorld, true);
	if (!LoadedName.Equals(PendingRestore->LevelName.ToString(), ESearchCase::IgnoreCase))
	{
		UE_LOG(LogAzrSave, Warning, TEXT("Restore abandoned: loaded '%s' but the save is for '%s'."),
			*LoadedName, *PendingRestore->LevelName.ToString());
		PendingRestore = nullptr;
		return;
	}

	// A restore happens in two phases, because the two halves have opposite timing requirements.
	bIsRestoring = true;

	// PHASE 1 -- DATA, right now.
	//
	// Curriculum progress has to be in place BEFORE any widget constructs. WBP_MainMenu builds its
	// chapter list from the subsystem in Event Construct, which runs during BeginPlay -- long before
	// the delayed pass below. Broadcasting late meant the menu drew itself from an empty subsystem and
	// then never caught up, so a resumed learner saw a fresh course. None of this touches an actor, so
	// there is nothing to wait for.
	OnRestoreSave.Broadcast(PendingRestore);

	// PHASE 2 -- WORLD, after BeginPlay has finished.
	//
	// The opposite constraint: the Azureal components build their capsules, resolve their zones and
	// cache their meshes in BeginPlay, so anything written before that is simply overwritten.
	LoadedWorld->GetTimerManager().SetTimer(
		RestoreTimer, FTimerDelegate::CreateUObject(this, &UAzr_SaveSubsystem::ApplyPendingRestore),
		FMath::Max(RestoreDelay, 0.01f), false);
}

void UAzr_SaveSubsystem::ApplyPendingRestore()
{
	UAzr_SaveGame* SaveGame = PendingRestore;
	PendingRestore = nullptr;

	UWorld* World = GetWorld();
	if (!SaveGame || !World)
	{
		// Phase 1 already set this; clear it or every later autosave would be suppressed forever.
		bIsRestoring = false;
		return;
	}

	LogViewDiagnostics(World, TEXT("before restore"));

	// Index what the fresh level actually contains, so records can be matched to real actors.
	TMap<FName, AActor*> ActorsByName;
	TArray<AActor*> SaveableInLevel;
	for (TActorIterator<AActor> It(World); It; ++It)
	{
		AActor* Actor = *It;
		if (!IsSaveable(Actor))
		{
			continue;
		}
		ActorsByName.Add(Actor->GetFName(), Actor);
		SaveableInLevel.Add(Actor);
	}

	// The pawn is captured separately, as a VR rig rather than a generic actor, so it is not in the
	// list above -- but anything the player was HOLDING is attached to it. Without the pawn in the
	// lookup that attachment cannot be resolved, and a held object would be dropped on every load.
	// Added for lookup only: it is never destroyed or property-restored by this pass.
	if (APawn* Pawn = UGameplayStatics::GetPlayerPawn(World, 0))
	{
		ActorsByName.Add(Pawn->GetFName(), Pawn);
	}

	TSet<FName> RecordedNames;
	for (const FAzr_ActorRecord& Record : SaveGame->Actors)
	{
		RecordedNames.Add(Record.ActorName);
	}

	// A saveable actor standing in the level with no record must have been destroyed before the save
	// was taken, so it is destroyed again. Both ends use the same test, so they cannot disagree.
	//
	// Unless the save is damaged. A truncated file still deserialises into a structurally valid object
	// with an empty Actors array, and this pass would then read that as "everything was destroyed" and
	// delete the entire level. A save that recorded nothing is not trusted to destroy anything.
	if (SaveGame->Actors.Num() == 0)
	{
		UE_LOG(LogAzrSave, Error, TEXT("Restore abandoned: the save records no actors at all, which means it is damaged."));
		bIsRestoring = false;
		return;
	}

	for (AActor* Actor : SaveableInLevel)
	{
		if (!RecordedNames.Contains(Actor->GetFName()))
		{
			// Logged rather than silent: destroying an actor the save simply never knew about is the
			// most damaging thing this system can do, so it should always be visible in the log.
			UE_LOG(LogAzrSave, Warning, TEXT("Destroying '%s' (%s) -- no record in the save."),
				*Actor->GetName(), *Actor->GetClass()->GetName());
			ActorsByName.Remove(Actor->GetFName());
			Actor->Destroy();
		}
	}

	// First pass: recreate anything spawned at runtime, then write every actor's own state. Doing
	// this before attachments means both ends of every attachment exist by the time it is applied.
	for (const FAzr_ActorRecord& Record : SaveGame->Actors)
	{
		AActor* Actor = ActorsByName.FindRef(Record.ActorName);

		if (!Actor && Record.bSpawnedAtRuntime)
		{
			if (UClass* Class = Record.ActorClass.TryLoadClass<AActor>())
			{
				FActorSpawnParameters Params;
				Params.Name = Record.ActorName;
				Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
				Actor = World->SpawnActor<AActor>(Class, Record.Transform, Params);
				if (Actor)
				{
					ActorsByName.Add(Record.ActorName, Actor);
				}
			}
		}

		if (Actor)
		{
			RestoreActor(Actor, Record);
		}
	}

	RestoreAttachments(World, SaveGame, ActorsByName);
	RestorePawn(World, SaveGame->Pawn);

	// The payload was already broadcast in phase 1, before the widgets constructed. See OnMapLoaded.

	// Only now is it safe for content to reference other actors -- everything has its state.
	for (const TPair<FName, AActor*>& Pair : ActorsByName)
	{
		AActor* Actor = Pair.Value;
		if (IsValid(Actor) && Actor->GetClass()->ImplementsInterface(UAzr_Saveable::StaticClass()))
		{
			IAzr_Saveable::Execute_AzrOnRestored(Actor);
		}
	}

	bIsRestoring = false;
	bSafeToSave = true;

	// bResumePending is deliberately NOT cleared here. Restoring the world re-arms interactions, and
	// something in that settling can still drive the sequencer a frame or two later -- which moves the
	// Game Manager one step past where the learner actually was. The flag is cleared by the learner's
	// first real advance instead, which is the only unambiguous signal that the resume is over.
	UE_LOG(LogAzrSave, Log, TEXT("Restore complete (%d actors)."), SaveGame->Actors.Num());
	LogViewDiagnostics(World, TEXT("after restore"));

	OnRestoreComplete.Broadcast();
}

void UAzr_SaveSubsystem::RestoreActor(AActor* Actor, const FAzr_ActorRecord& Record)
{
	RestoreProperties(Actor, Record.Properties);

	Actor->SetActorHiddenInGame(Record.bHidden);

	// Attached actors take their transform from their parent, so setting it here would only fight
	// the attachment applied in the next pass.
	if (Record.AttachedToActor.IsNone())
	{
		Actor->SetActorTransform(Record.Transform, false, nullptr, ETeleportType::TeleportPhysics);
	}

	TMap<FName, UActorComponent*> ComponentsByName;
	TArray<UActorComponent*> Components;
	Actor->GetComponents(Components);
	for (UActorComponent* Component : Components)
	{
		if (Component)
		{
			ComponentsByName.Add(Component->GetFName(), Component);
		}
	}

	for (const FAzr_ComponentRecord& ComponentRecord : Record.Components)
	{
		if (UActorComponent* Component = ComponentsByName.FindRef(ComponentRecord.ComponentName))
		{
			RestoreComponent(Component, ComponentRecord);
		}
	}

	if (UPrimitiveComponent* Root = Cast<UPrimitiveComponent>(Actor->GetRootComponent()))
	{
		if (Record.bSimulatingPhysics && Root->IsSimulatingPhysics())
		{
			// The solver is not deterministic across runs, so this is a close visual match rather
			// than an exact reproduction. Nobody can tell the difference.
			Root->SetPhysicsLinearVelocity(Record.LinearVelocity);
			Root->SetPhysicsAngularVelocityInDegrees(Record.AngularVelocity);
		}
	}
}

void UAzr_SaveSubsystem::RestoreComponent(UActorComponent* Component, const FAzr_ComponentRecord& Record)
{
	RestoreProperties(Component, Record.Properties);

	if (Record.bHasRelativeTransform)
	{
		if (USceneComponent* Scene = Cast<USceneComponent>(Component))
		{
			if (Scene->Mobility == EComponentMobility::Movable)
			{
				Scene->SetRelativeTransform(Record.RelativeTransform, false, nullptr, ETeleportType::TeleportPhysics);
			}
		}
	}

	// AzrArmedMode came back with the properties above, but the guard bools behind it did not -- they
	// are unreflected runtime state on a freshly constructed component. So the Enable* call runs in
	// full, rebuilding the highlight, tether, widget and timers rather than just flipping a flag.
	//
	// Done here, with the rest of the restore, on purpose. Deferring it to when the chapter is entered
	// left the world in a half-restored state the learner could see but not touch: the ghost meshes and
	// indicators are ordinary actors and come back with the snapshot, so the step LOOKED live while the
	// interaction behind it was still dormant. Restoring the world means restoring all of it.
	ReArmComponent(Component);
}

void UAzr_SaveSubsystem::RestoreAttachments(UWorld* World, const UAzr_SaveGame* SaveGame, const TMap<FName, AActor*>& ActorsByName)
{
	for (const FAzr_ActorRecord& Record : SaveGame->Actors)
	{
		AActor* Actor = ActorsByName.FindRef(Record.ActorName);
		if (!IsValid(Actor))
		{
			continue;
		}

		if (Record.AttachedToActor.IsNone())
		{
			if (Actor->GetAttachParentActor())
			{
				Actor->DetachFromActor(FDetachmentTransformRules::KeepWorldTransform);
				Actor->SetActorTransform(Record.Transform, false, nullptr, ETeleportType::TeleportPhysics);
			}
			continue;
		}

		AActor* Parent = ActorsByName.FindRef(Record.AttachedToActor);
		if (IsValid(Parent))
		{
			Actor->AttachToActor(Parent, FAttachmentTransformRules::KeepRelativeTransform, Record.AttachedToSocket);
			Actor->SetActorTransform(Record.Transform, false, nullptr, ETeleportType::TeleportPhysics);
		}
	}
}

void UAzr_SaveSubsystem::LogViewDiagnostics(UWorld* World, const TCHAR* When) const
{
	if (!World)
	{
		return;
	}

	APlayerController* PC = UGameplayStatics::GetPlayerController(World, 0);
	APawn* Pawn = UGameplayStatics::GetPlayerPawn(World, 0);
	const AAzr_Pawn* AzrPawn = Cast<AAzr_Pawn>(Pawn);

	UE_LOG(LogAzrSave, Log, TEXT("--- view diagnostics (%s) ---"), When);
	UE_LOG(LogAzrSave, Log, TEXT("  controller : %s"), PC ? *PC->GetName() : TEXT("*** NONE ***"));
	UE_LOG(LogAzrSave, Log, TEXT("  pawn       : %s%s"),
		Pawn ? *Pawn->GetName() : TEXT("*** NONE ***"),
		(Pawn && Pawn->GetController()) ? TEXT("") : TEXT("  *** NOT POSSESSED ***"));
	UE_LOG(LogAzrSave, Log, TEXT("  view target: %s"),
		(PC && PC->GetViewTarget()) ? *PC->GetViewTarget()->GetName() : TEXT("*** NONE ***"));

	if (AzrPawn && AzrPawn->Camera)
	{
		// bLockToHmd is what makes the camera follow the headset. False here and the view is frozen no
		// matter how correct everything else is.
		UE_LOG(LogAzrSave, Log, TEXT("  camera     : bLockToHmd=%s  world=%s  tickEnabled=%s"),
			AzrPawn->Camera->bLockToHmd ? TEXT("TRUE") : TEXT("*** FALSE ***"),
			*AzrPawn->Camera->GetComponentLocation().ToCompactString(),
			AzrPawn->Camera->IsComponentTickEnabled() ? TEXT("yes") : TEXT("no"));
	}
	else
	{
		UE_LOG(LogAzrSave, Log, TEXT("  camera     : *** MISSING ***"));
	}

	UE_LOG(LogAzrSave, Log, TEXT("  hmd        : enabled=%s connected=%s  |  world paused=%s"),
		UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayEnabled() ? TEXT("yes") : TEXT("*** no ***"),
		UHeadMountedDisplayFunctionLibrary::IsHeadMountedDisplayConnected() ? TEXT("yes") : TEXT("*** no ***"),
		World->IsPaused() ? TEXT("*** YES ***") : TEXT("no"));
}

void UAzr_SaveSubsystem::RestorePawn(UWorld* World, const FAzr_PawnRecord& Record)
{
	if (!Record.bValid)
	{
		return;
	}

	APawn* Pawn = UGameplayStatics::GetPlayerPawn(World, 0);
	if (!Pawn)
	{
		return;
	}

	AAzr_Pawn* AzrPawn = Cast<AAzr_Pawn>(Pawn);
	if (!AzrPawn || !AzrPawn->VROrigin || !AzrPawn->Camera)
	{
		Pawn->SetActorTransform(Record.PawnTransform, false, nullptr, ETeleportType::TeleportPhysics);
		return;
	}

	// Yaw only. Pitch and roll belong to the headset, and forcing them onto the rig tilts the
	// horizon -- wrong, and a fast route to motion sickness. Applied first so the position correction
	// below already accounts for the camera swinging around the rig origin.
	const float YawDelta = FRotator::NormalizeAxis(Record.CameraYaw - AzrPawn->Camera->GetComponentRotation().Yaw);
	Pawn->SetActorRotation(FRotator(0.0f, Pawn->GetActorRotation().Yaw + YawDelta, 0.0f));

	// HORIZONTAL position only, and the rig's own floor height.
	//
	// The saved camera height is where the player's head was, which says nothing about where it is now:
	// they may be sitting rather than standing, or the headset pose may not have settled yet. Feeding
	// that difference into the rig's Z pushes the whole world up or down and leaves the player floating
	// or sunk through the floor.
	//
	// ExecuteRoomScaleTeleport is the framework's own answer to "put the player's head at this floor
	// spot" -- it drops the vertical component and keeps the rig on the floor. Going through it rather
	// than repeating the maths means resume and teleport can never disagree.
	const FVector TargetFloorLocation(
		Record.CameraWorldLocation.X,
		Record.CameraWorldLocation.Y,
		Record.PawnTransform.GetLocation().Z);

	AzrPawn->ExecuteRoomScaleTeleport(TargetFloorLocation);

	UE_LOG(LogAzrSave, Log, TEXT("Pawn restored: head to %s, yaw %.1f (rig floor Z %.1f)."),
		*TargetFloorLocation.ToCompactString(), Record.CameraYaw, TargetFloorLocation.Z);
}

// --- SLOT QUERIES ---

bool UAzr_SaveSubsystem::DoesSaveExist(const FString& SlotName) const
{
	return UGameplayStatics::DoesSaveGameExist(SlotName, 0);
}

bool UAzr_SaveSubsystem::HasProgress() const
{
	return DoesSaveExist(GetDefaultSlotName());
}

bool UAzr_SaveSubsystem::GetSaveSummary(const FString& SlotName, FString& OutProgressLabel, FDateTime& OutSavedAtUtc, float& OutAccumulatedSeconds) const
{
	const UAzr_SaveGame* SaveGame = Cast<UAzr_SaveGame>(UGameplayStatics::LoadGameFromSlot(SlotName, 0));
	if (!SaveGame)
	{
		return false;
	}

	OutProgressLabel = SaveGame->ProgressLabel;
	OutSavedAtUtc = SaveGame->SavedAtUtc;
	OutAccumulatedSeconds = SaveGame->AccumulatedSeconds;
	return true;
}

bool UAzr_SaveSubsystem::DeleteSave(const FString& SlotName)
{
	return UGameplayStatics::DeleteGameInSlot(SlotName, 0);
}

bool UAzr_SaveSubsystem::DeleteProgress()
{
	return DeleteSave(GetDefaultSlotName());
}

// --- SAFETY WINDOW ---

int32 UAzr_SaveSubsystem::ReArmSavedInteractions()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return 0;
	}

	int32 Armed = 0;
	for (TActorIterator<AActor> It(World); It; ++It)
	{
		AActor* Actor = *It;
		if (!IsValid(Actor))
		{
			continue;
		}

		TArray<UActorComponent*> Components;
		Actor->GetComponents(Components);
		for (UActorComponent* Component : Components)
		{
			if (!Component || !Component->GetClass()->GetName().StartsWith(TEXT("Azr_")))
			{
				continue;
			}

			// Re-issuing the Enable* call matters: the guard bools, highlight, tether, widget and timers
			// behind AzrArmedMode are unreflected runtime state on a freshly constructed component, so
			// restoring the mode alone would leave an interaction that claims to be armed but is dead.
			ReArmComponent(Component);
			++Armed;
		}
	}

	UE_LOG(LogAzrSave, Log, TEXT("Re-armed interactions from the save across %d component(s)."), Armed);
	return Armed;
}

int32 UAzr_SaveSubsystem::DisarmAllInteractions()
{
	UWorld* World = GetWorld();
	if (!World)
	{
		return 0;
	}

	int32 Disarmed = 0;
	for (TActorIterator<AActor> It(World); It; ++It)
	{
		AActor* Actor = *It;
		if (!IsValid(Actor))
		{
			continue;
		}

		TArray<UActorComponent*> Components;
		Actor->GetComponents(Components);
		for (UActorComponent* Component : Components)
		{
			if (Component && Component->GetClass()->GetName().StartsWith(TEXT("Azr_")))
			{
				DisarmComponent(Component);
				++Disarmed;
			}
		}
	}

	UE_LOG(LogAzrSave, Log, TEXT("Disarmed %d interaction component(s)."), Disarmed);
	return Disarmed;
}

void UAzr_SaveSubsystem::SetSafeToSave(bool bSafe)
{
	bSafeToSave = bSafe;
}

void UAzr_SaveSubsystem::MarkReported(const FString& Key)
{
	ReportedKeys.AddUnique(Key);
}

// --- SHARED ---

bool UAzr_SaveSubsystem::IsSaveable(const AActor* Actor)
{
	if (!IsValid(Actor))
	{
		return false;
	}
	if (Actor->ActorHasTag(ExcludeTag))
	{
		return false;
	}

	// The pawn is captured separately, as a VR rig rather than as a generic actor.
	if (Actor->IsA<APawn>())
	{
		return false;
	}

	// Engine infrastructure is never content state. These are recreated by the engine on every level
	// load and own things like the view target, control rotation and camera blending -- writing a
	// previous session's values back into them can break the player's view outright, and there is
	// nothing to gain since none of them hold authored progress.
	if (Actor->IsA<AController>()
		|| Actor->IsA<APlayerCameraManager>()
		|| Actor->IsA<AGameModeBase>()
		|| Actor->IsA<AGameStateBase>()
		|| Actor->IsA<APlayerState>()
		|| Actor->IsA<AHUD>()
		|| Actor->IsA<AWorldSettings>())
	{
		return false;
	}

	if (Actor->GetClass()->ImplementsInterface(UAzr_Saveable::StaticClass()))
	{
		return true;
	}

	// Blueprint classes are where all authored state lives -- Game Managers, doors, interactables.
	// Plain engine actors placed in a level (lights, static meshes, volumes) cannot change and would
	// only bloat the file.
	if (Cast<UBlueprintGeneratedClass>(Actor->GetClass()) != nullptr)
	{
		return true;
	}

	// A C++ actor still counts if it carries any Azureal interaction.
	TArray<UActorComponent*> Components;
	Actor->GetComponents(Components);
	for (const UActorComponent* Component : Components)
	{
		if (Component && Component->GetClass()->GetName().StartsWith(TEXT("Azr_")))
		{
			return true;
		}
	}

	return false;
}

void UAzr_SaveSubsystem::CaptureProperties(const UObject* Object, TArray<FAzr_PropertyRecord>& OutProperties)
{
	if (!Object)
	{
		return;
	}

	for (TFieldIterator<FProperty> It(Object->GetClass()); It; ++It)
	{
		FProperty* Property = *It;
		if (ShouldSkipProperty(Property))
		{
			continue;
		}

		FAzr_PropertyRecord Record;
		Record.Name = Property->GetFName();

		FMemoryWriter Writer(Record.Data, true);
		FAzr_SaveArchive Ar(Writer, false);
		Property->SerializeItem(FStructuredArchiveFromArchive(Ar).GetSlot(), Property->ContainerPtrToValuePtr<void>(const_cast<UObject*>(Object)));

		OutProperties.Add(MoveTemp(Record));
	}
}

void UAzr_SaveSubsystem::RestoreProperties(UObject* Object, const TArray<FAzr_PropertyRecord>& Properties)
{
	if (!Object)
	{
		return;
	}

	for (const FAzr_PropertyRecord& Record : Properties)
	{
		FProperty* Property = Object->GetClass()->FindPropertyByName(Record.Name);

		// A variable that has been renamed or deleted since the save simply keeps its authored value
		// rather than corrupting everything recorded after it. That tolerance is the whole reason
		// records are keyed by name.
		if (!Property || ShouldSkipProperty(Property))
		{
			continue;
		}

		FMemoryReader Reader(Record.Data, true);
		FAzr_SaveArchive Ar(Reader, true);
		Property->SerializeItem(FStructuredArchiveFromArchive(Ar).GetSlot(), Property->ContainerPtrToValuePtr<void>(Object));
	}
}
