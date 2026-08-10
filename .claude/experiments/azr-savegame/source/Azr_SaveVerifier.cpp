

#include "Azr_SaveVerifier.h"

#include "Azr_SaveGame.h"
#include "Azr_SaveSubsystem.h"

#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "Kismet/GameplayStatics.h"
#include "UObject/UnrealType.h"

DEFINE_LOG_CATEGORY_STATIC(LogAzrSaveTest, Log, All);

const TCHAR* UAzr_SaveVerifier::VerifySlotName = TEXT("AzurealVerifyScratch");

namespace
{
	/** Long diffs are noise; the first several are always enough to identify what is missing. */
	constexpr int32 MaxReportedDiffs = 60;

	UAzr_SaveSubsystem* GetSaveSubsystem(const UWorld* World)
	{
		if (!World) { return nullptr; }
		const UGameInstance* GameInstance = World->GetGameInstance();
		return GameInstance ? GameInstance->GetSubsystem<UAzr_SaveSubsystem>() : nullptr;
	}

	UAzr_SaveVerifier* GetVerifier(const UWorld* World)
	{
		if (!World) { return nullptr; }
		const UGameInstance* GameInstance = World->GetGameInstance();
		return GameInstance ? GameInstance->GetSubsystem<UAzr_SaveVerifier>() : nullptr;
	}

	/** Console args are optional everywhere; an omitted slot means "the current learner's slot". */
	FString ResolveSlot(const TArray<FString>& Args, const UAzr_SaveSubsystem* Save)
	{
		if (Args.Num() > 0 && !Args[0].IsEmpty()) { return Args[0]; }
		return Save ? Save->GetDefaultSlotName() : FString(TEXT("AzurealProgress"));
	}

	void PrintLine(FOutputDevice& Ar, const FString& Line)
	{
		Ar.Log(*Line);
		UE_LOG(LogAzrSaveTest, Log, TEXT("%s"), *Line);
	}
}

// --- LIFECYCLE ---

void UAzr_SaveVerifier::Deinitialize()
{
	if (UAzr_SaveSubsystem* Save = GetGameInstance() ? GetGameInstance()->GetSubsystem<UAzr_SaveSubsystem>() : nullptr)
	{
		Save->OnRestoreComplete.RemoveDynamic(this, &UAzr_SaveVerifier::HandleRestoreComplete);
	}
	VerifyBaseline = nullptr;
	bVerifyPending = false;

	Super::Deinitialize();
}

// --- COMPARISON ---

int32 UAzr_SaveVerifier::CompareSaves(const UAzr_SaveGame* Baseline, const UAzr_SaveGame* Other, TArray<FString>& OutDiffs)
{
	if (!Baseline || !Other)
	{
		OutDiffs.Add(TEXT("comparison skipped: one of the snapshots is missing"));
		return INDEX_NONE;
	}

	int32 DiffCount = 0;
	auto Report = [&OutDiffs, &DiffCount](const FString& Line)
	{
		++DiffCount;
		if (OutDiffs.Num() < MaxReportedDiffs) { OutDiffs.Add(Line); }
	};

	// --- pawn ---
	if (Baseline->Pawn.bValid != Other->Pawn.bValid)
	{
		Report(TEXT("Pawn: validity differs"));
	}
	else if (Baseline->Pawn.bValid)
	{
		// A centimetre of slack: the restore shifts the rig by the camera delta, and the headset
		// moves between the two captures no matter how still the player is.
		if (!Baseline->Pawn.CameraWorldLocation.Equals(Other->Pawn.CameraWorldLocation, 1.0f))
		{
			Report(FString::Printf(TEXT("Pawn.CameraWorldLocation: %s -> %s"),
				*Baseline->Pawn.CameraWorldLocation.ToString(), *Other->Pawn.CameraWorldLocation.ToString()));
		}
		if (!FMath::IsNearlyEqual(FRotator::NormalizeAxis(Baseline->Pawn.CameraYaw - Other->Pawn.CameraYaw), 0.0f, 1.0f))
		{
			Report(FString::Printf(TEXT("Pawn.CameraYaw: %.2f -> %.2f"), Baseline->Pawn.CameraYaw, Other->Pawn.CameraYaw));
		}
	}

	// --- payloads (this is where curriculum progress lives) ---
	for (const TPair<FName, FAzr_PayloadRecord>& Pair : Baseline->Payloads)
	{
		const FAzr_PayloadRecord* Found = Other->Payloads.Find(Pair.Key);
		if (!Found)
		{
			Report(FString::Printf(TEXT("Payload '%s': present in baseline, missing after restore"), *Pair.Key.ToString()));
		}
		else if (Found->Data != Pair.Value.Data)
		{
			Report(FString::Printf(TEXT("Payload '%s': %d bytes -> %d bytes, contents differ"),
				*Pair.Key.ToString(), Pair.Value.Data.Num(), Found->Data.Num()));
		}
	}

	// --- actors ---
	TMap<FName, const FAzr_ActorRecord*> OtherByName;
	for (const FAzr_ActorRecord& Record : Other->Actors)
	{
		OtherByName.Add(Record.ActorName, &Record);
	}

	for (const FAzr_ActorRecord& Base : Baseline->Actors)
	{
		const FAzr_ActorRecord* const* FoundPtr = OtherByName.Find(Base.ActorName);
		if (!FoundPtr)
		{
			Report(FString::Printf(TEXT("%s: in baseline, absent after restore"), *Base.ActorName.ToString()));
			continue;
		}
		const FAzr_ActorRecord& Cmp = **FoundPtr;

		if (!Base.Transform.GetLocation().Equals(Cmp.Transform.GetLocation(), 1.0f))
		{
			Report(FString::Printf(TEXT("%s.Transform: %s -> %s"), *Base.ActorName.ToString(),
				*Base.Transform.GetLocation().ToString(), *Cmp.Transform.GetLocation().ToString()));
		}
		if (Base.bHidden != Cmp.bHidden)
		{
			Report(FString::Printf(TEXT("%s.bHidden: %d -> %d"), *Base.ActorName.ToString(), Base.bHidden, Cmp.bHidden));
		}
		if (Base.AttachedToActor != Cmp.AttachedToActor)
		{
			Report(FString::Printf(TEXT("%s attachment: '%s' -> '%s'"), *Base.ActorName.ToString(),
				*Base.AttachedToActor.ToString(), *Cmp.AttachedToActor.ToString()));
		}

		// Blueprint variables live here, so this loop is what catches a Game Manager's step counter or
		// a door's open flag failing to come back.
		TMap<FName, const TArray<uint8>*> CmpProps;
		for (const FAzr_PropertyRecord& P : Cmp.Properties) { CmpProps.Add(P.Name, &P.Data); }

		for (const FAzr_PropertyRecord& BaseProp : Base.Properties)
		{
			const TArray<uint8>* const* CmpData = CmpProps.Find(BaseProp.Name);
			if (!CmpData)
			{
				Report(FString::Printf(TEXT("%s.%s: property missing after restore"),
					*Base.ActorName.ToString(), *BaseProp.Name.ToString()));
			}
			else if (**CmpData != BaseProp.Data)
			{
				Report(FString::Printf(TEXT("%s.%s: value differs after restore"),
					*Base.ActorName.ToString(), *BaseProp.Name.ToString()));
			}
		}

		// Component records carry the armed interaction mode, which is what makes a step re-enterable.
		TMap<FName, const FAzr_ComponentRecord*> CmpComps;
		for (const FAzr_ComponentRecord& C : Cmp.Components) { CmpComps.Add(C.ComponentName, &C); }

		for (const FAzr_ComponentRecord& BaseComp : Base.Components)
		{
			const FAzr_ComponentRecord* const* FoundComp = CmpComps.Find(BaseComp.ComponentName);
			if (!FoundComp)
			{
				Report(FString::Printf(TEXT("%s.%s: component missing after restore"),
					*Base.ActorName.ToString(), *BaseComp.ComponentName.ToString()));
				continue;
			}
			if (BaseComp.ArmedMode != (*FoundComp)->ArmedMode)
			{
				Report(FString::Printf(TEXT("%s.%s armed mode: '%s' -> '%s'"),
					*Base.ActorName.ToString(), *BaseComp.ComponentName.ToString(),
					*BaseComp.ArmedMode.ToString(), *(*FoundComp)->ArmedMode.ToString()));
			}
		}
	}

	for (const FAzr_ActorRecord& Cmp : Other->Actors)
	{
		const bool bInBaseline = Baseline->Actors.ContainsByPredicate(
			[&Cmp](const FAzr_ActorRecord& B) { return B.ActorName == Cmp.ActorName; });
		if (!bInBaseline)
		{
			Report(FString::Printf(TEXT("%s: appeared after restore, not in baseline"), *Cmp.ActorName.ToString()));
		}
	}

	return DiffCount;
}

// --- ROUND TRIP (serialisation fidelity) ---

int32 UAzr_SaveVerifier::RunRoundTrip(TArray<FString>& OutDiffs)
{
	UAzr_SaveSubsystem* Save = GetGameInstance() ? GetGameInstance()->GetSubsystem<UAzr_SaveSubsystem>() : nullptr;
	if (!Save)
	{
		return INDEX_NONE;
	}

	UAzr_SaveGame* Captured = Save->CaptureToObject();
	if (!Captured)
	{
		return INDEX_NONE;
	}

	if (!UGameplayStatics::SaveGameToSlot(Captured, VerifySlotName, 0))
	{
		OutDiffs.Add(TEXT("could not write the scratch slot"));
		return INDEX_NONE;
	}

	UAzr_SaveGame* ReadBack = Cast<UAzr_SaveGame>(UGameplayStatics::LoadGameFromSlot(VerifySlotName, 0));
	if (!ReadBack)
	{
		OutDiffs.Add(TEXT("wrote the scratch slot but could not read it back"));
		return INDEX_NONE;
	}

	const int32 Diffs = CompareSaves(Captured, ReadBack, OutDiffs);
	UGameplayStatics::DeleteGameInSlot(VerifySlotName, 0);
	return Diffs;
}

// --- VERIFY (restore fidelity) ---

bool UAzr_SaveVerifier::BeginVerify()
{
	UAzr_SaveSubsystem* Save = GetGameInstance() ? GetGameInstance()->GetSubsystem<UAzr_SaveSubsystem>() : nullptr;
	if (!Save)
	{
		return false;
	}

	VerifyBaseline = Save->CaptureToObject();
	if (!VerifyBaseline)
	{
		return false;
	}

	if (!UGameplayStatics::SaveGameToSlot(VerifyBaseline, VerifySlotName, 0))
	{
		VerifyBaseline = nullptr;
		return false;
	}

	bVerifyPending = true;
	Save->OnRestoreComplete.RemoveDynamic(this, &UAzr_SaveVerifier::HandleRestoreComplete);
	Save->OnRestoreComplete.AddDynamic(this, &UAzr_SaveVerifier::HandleRestoreComplete);

	UE_LOG(LogAzrSaveTest, Log, TEXT("Verify: baseline captured (%d actors). Reloading the level..."), VerifyBaseline->Actors.Num());

	if (!Save->LoadFromSlot(VerifySlotName))
	{
		Save->OnRestoreComplete.RemoveDynamic(this, &UAzr_SaveVerifier::HandleRestoreComplete);
		bVerifyPending = false;
		VerifyBaseline = nullptr;
		return false;
	}
	return true;
}

void UAzr_SaveVerifier::HandleRestoreComplete()
{
	if (!bVerifyPending)
	{
		return;
	}
	bVerifyPending = false;

	UAzr_SaveSubsystem* Save = GetGameInstance() ? GetGameInstance()->GetSubsystem<UAzr_SaveSubsystem>() : nullptr;
	if (Save)
	{
		Save->OnRestoreComplete.RemoveDynamic(this, &UAzr_SaveVerifier::HandleRestoreComplete);
	}
	if (!Save || !VerifyBaseline)
	{
		return;
	}

	UAzr_SaveGame* AfterRestore = Save->CaptureToObject();
	TArray<FString> Diffs;
	const int32 Count = CompareSaves(VerifyBaseline, AfterRestore, Diffs);

	if (Count == 0)
	{
		UE_LOG(LogAzrSaveTest, Log, TEXT("VERIFY PASSED - the restored world matches the baseline exactly."));
	}
	else
	{
		UE_LOG(LogAzrSaveTest, Error, TEXT("VERIFY FAILED - %d difference(s). Each line below is state the save system is not bringing back:"), Count);
		for (const FString& Line : Diffs)
		{
			UE_LOG(LogAzrSaveTest, Error, TEXT("    %s"), *Line);
		}
		if (Count > Diffs.Num())
		{
			UE_LOG(LogAzrSaveTest, Error, TEXT("    ... and %d more"), Count - Diffs.Num());
		}
	}

	VerifyBaseline = nullptr;
	UGameplayStatics::DeleteGameInSlot(VerifySlotName, 0);
}

// --- CONSOLE COMMANDS ---
//
// Registered at module load rather than from a subsystem, so they exist exactly once no matter how
// many PIE sessions start and stop.

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrSaveCmd(
	TEXT("Azr.Save"),
	TEXT("Azr.Save [slot] - snapshot the world into a slot (defaults to this learner's slot)."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			UAzr_SaveSubsystem* Save = GetSaveSubsystem(World);
			if (!Save) { PrintLine(Ar, TEXT("Azr.Save: no save subsystem (is a game running?)")); return; }

			const FString Slot = ResolveSlot(Args, Save);
			const bool bOk = Save->SaveToSlot(Slot);
			PrintLine(Ar, FString::Printf(TEXT("Azr.Save: '%s' %s%s"), *Slot,
				bOk ? TEXT("written") : TEXT("REFUSED"),
				(!bOk && !Save->IsSafeToSave()) ? TEXT(" (a step chain is in flight)") : TEXT("")));
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrLoadCmd(
	TEXT("Azr.Load"),
	TEXT("Azr.Load [slot] - reload the level and restore a slot."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			UAzr_SaveSubsystem* Save = GetSaveSubsystem(World);
			if (!Save) { PrintLine(Ar, TEXT("Azr.Load: no save subsystem (is a game running?)")); return; }

			const FString Slot = ResolveSlot(Args, Save);
			const bool bOk = Save->LoadFromSlot(Slot);
			PrintLine(Ar, FString::Printf(TEXT("Azr.Load: '%s' %s"), *Slot,
				bOk ? TEXT("loading - watch for 'Restore complete'") : TEXT("FAILED - see the log for why")));
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrSaveInfoCmd(
	TEXT("Azr.Save.Info"),
	TEXT("Azr.Save.Info [slot] - describe a slot without loading it."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			UAzr_SaveSubsystem* Save = GetSaveSubsystem(World);
			if (!Save) { PrintLine(Ar, TEXT("Azr.Save.Info: no save subsystem")); return; }

			const FString Slot = ResolveSlot(Args, Save);
			if (!Save->DoesSaveExist(Slot)) { PrintLine(Ar, FString::Printf(TEXT("Azr.Save.Info: '%s' does not exist"), *Slot)); return; }

			FString Label; FDateTime When; float Seconds = 0.0f;
			if (!Save->GetSaveSummary(Slot, Label, When, Seconds))
			{
				PrintLine(Ar, FString::Printf(TEXT("Azr.Save.Info: '%s' exists but could not be read"), *Slot));
				return;
			}

			PrintLine(Ar, FString::Printf(TEXT("Azr.Save.Info '%s': %s | saved %s UTC | %.0f seconds of training"),
				*Slot, Label.IsEmpty() ? TEXT("(no progress label)") : *Label, *When.ToString(), Seconds));
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrSaveDeleteCmd(
	TEXT("Azr.Save.Delete"),
	TEXT("Azr.Save.Delete [slot] - delete a slot."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			UAzr_SaveSubsystem* Save = GetSaveSubsystem(World);
			if (!Save) { PrintLine(Ar, TEXT("Azr.Save.Delete: no save subsystem")); return; }

			const FString Slot = ResolveSlot(Args, Save);
			PrintLine(Ar, FString::Printf(TEXT("Azr.Save.Delete: '%s' %s"), *Slot,
				Save->DeleteSave(Slot) ? TEXT("deleted") : TEXT("not deleted (did it exist?)")));
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrSafeToSaveCmd(
	TEXT("Azr.Save.SetSafe"),
	TEXT("Azr.Save.SetSafe <0|1> - force the in-flight guard, to check that saving is refused mid-chain."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			UAzr_SaveSubsystem* Save = GetSaveSubsystem(World);
			if (!Save) { PrintLine(Ar, TEXT("Azr.Save.SetSafe: no save subsystem")); return; }

			const bool bSafe = Args.Num() == 0 || (Args[0] != TEXT("0") && Args[0].ToLower() != TEXT("false"));
			Save->SetSafeToSave(bSafe);
			PrintLine(Ar, FString::Printf(TEXT("Azr.Save.SetSafe: saving is now %s"), bSafe ? TEXT("allowed") : TEXT("refused")));
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrRoundTripCmd(
	TEXT("Azr.Save.RoundTrip"),
	TEXT("Azr.Save.RoundTrip - capture, write, read back and compare. Proves the bytes survive disk."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			UAzr_SaveVerifier* Verifier = GetVerifier(World);
			if (!Verifier) { PrintLine(Ar, TEXT("Azr.Save.RoundTrip: no verifier subsystem")); return; }

			TArray<FString> Diffs;
			const int32 Count = Verifier->RunRoundTrip(Diffs);

			if (Count == INDEX_NONE) { PrintLine(Ar, TEXT("Azr.Save.RoundTrip: could not run")); }
			else if (Count == 0)     { PrintLine(Ar, TEXT("Azr.Save.RoundTrip: PASSED - everything captured survives serialisation.")); }
			else
			{
				PrintLine(Ar, FString::Printf(TEXT("Azr.Save.RoundTrip: FAILED - %d difference(s):"), Count));
				for (const FString& Line : Diffs) { PrintLine(Ar, TEXT("    ") + Line); }
			}
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrVerifyCmd(
	TEXT("Azr.Save.Verify"),
	TEXT("Azr.Save.Verify - capture, save, reload, restore, capture again and compare. The real test."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			UAzr_SaveVerifier* Verifier = GetVerifier(World);
			if (!Verifier) { PrintLine(Ar, TEXT("Azr.Save.Verify: no verifier subsystem")); return; }

			PrintLine(Ar, Verifier->BeginVerify()
				? TEXT("Azr.Save.Verify: reloading. The PASS or FAIL report appears in the log once the restore finishes.")
				: TEXT("Azr.Save.Verify: could not start"));
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrActorDumpCmd(
	TEXT("Azr.Actor.Dump"),
	TEXT("Azr.Actor.Dump <NamePart> - print the live values of an actor's Blueprint variables."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			if (!World) { PrintLine(Ar, TEXT("Azr.Actor.Dump: no world")); return; }
			if (Args.Num() == 0) { PrintLine(Ar, TEXT("Azr.Actor.Dump: give part of an actor name, e.g. Azr.Actor.Dump GM_C1")); return; }

			const FString Needle = Args[0];
			int32 Matches = 0;

			for (TActorIterator<AActor> It(World); It; ++It)
			{
				AActor* Actor = *It;
				if (!IsValid(Actor) || !Actor->GetName().Contains(Needle)) { continue; }

				++Matches;
				PrintLine(Ar, FString::Printf(TEXT("--- %s (%s) ---"), *Actor->GetName(), *Actor->GetClass()->GetName()));

				// Only the simple value types: those are what step counters and state flags live in, and
				// dumping everything else would bury them.
				for (TFieldIterator<FProperty> PropIt(Actor->GetClass()); PropIt; ++PropIt)
				{
					FProperty* Property = *PropIt;
					const void* Value = Property->ContainerPtrToValuePtr<void>(Actor);
					FString Text;

					if (const FIntProperty* P = CastField<FIntProperty>(Property))        { Text = FString::FromInt(P->GetPropertyValue(Value)); }
					else if (const FBoolProperty* P2 = CastField<FBoolProperty>(Property)) { Text = P2->GetPropertyValue(Value) ? TEXT("true") : TEXT("false"); }
					else if (const FFloatProperty* P3 = CastField<FFloatProperty>(Property)) { Text = FString::SanitizeFloat(P3->GetPropertyValue(Value)); }
					else if (const FDoubleProperty* P4 = CastField<FDoubleProperty>(Property)) { Text = FString::SanitizeFloat(P4->GetPropertyValue(Value)); }
					else if (const FNameProperty* P5 = CastField<FNameProperty>(Property))  { Text = P5->GetPropertyValue(Value).ToString(); }
					else { continue; }

					PrintLine(Ar, FString::Printf(TEXT("   %-40s = %s"), *Property->GetName(), *Text));
				}
			}

			if (Matches == 0) { PrintLine(Ar, FString::Printf(TEXT("Azr.Actor.Dump: no actor matching '%s'"), *Needle)); }
		}));

static FAutoConsoleCommandWithWorldArgsAndOutputDevice GAzrSaveDumpCmd(
	TEXT("Azr.Save.Dump"),
	TEXT("Azr.Save.Dump - list what a capture of the current world contains."),
	FConsoleCommandWithWorldArgsAndOutputDeviceDelegate::CreateStatic(
		[](const TArray<FString>& Args, UWorld* World, FOutputDevice& Ar)
		{
			UAzr_SaveSubsystem* Save = GetSaveSubsystem(World);
			if (!Save) { PrintLine(Ar, TEXT("Azr.Save.Dump: no save subsystem")); return; }

			UAzr_SaveGame* Snapshot = Save->CaptureToObject();
			if (!Snapshot) { PrintLine(Ar, TEXT("Azr.Save.Dump: capture failed")); return; }

			PrintLine(Ar, FString::Printf(TEXT("--- capture of '%s': %d actors, %d payload(s), pawn %s ---"),
				*Snapshot->LevelName.ToString(), Snapshot->Actors.Num(), Snapshot->Payloads.Num(),
				Snapshot->Pawn.bValid ? TEXT("recorded") : TEXT("MISSING")));

			for (const TPair<FName, FAzr_PayloadRecord>& Pair : Snapshot->Payloads)
			{
				PrintLine(Ar, FString::Printf(TEXT("  payload '%s': %d bytes"), *Pair.Key.ToString(), Pair.Value.Data.Num()));
			}

			for (const FAzr_ActorRecord& Record : Snapshot->Actors)
			{
				FString Armed;
				for (const FAzr_ComponentRecord& Component : Record.Components)
				{
					if (!Component.ArmedMode.IsNone())
					{
						Armed += FString::Printf(TEXT(" [%s=%s]"), *Component.ComponentName.ToString(), *Component.ArmedMode.ToString());
					}
				}
				PrintLine(Ar, FString::Printf(TEXT("  %s: %d props, %d components%s%s"),
					*Record.ActorName.ToString(), Record.Properties.Num(), Record.Components.Num(),
					Record.bSpawnedAtRuntime ? TEXT(" (runtime-spawned)") : TEXT(""), *Armed));
			}
		}));
