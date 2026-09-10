

#include "Azr_Debug.h"

#include "Engine/World.h"
#include "GameFramework/Actor.h"
#include "UObject/Script.h"
#include "UObject/Stack.h"

FAzr_DebugLog& FAzr_DebugLog::Get()
{
	// Function-local static: constructed on first trace, destroyed at module unload, and alive across
	// every world the process opens -- which is the point, since map travel is one of the things being
	// debugged.
	static FAzr_DebugLog Instance;
	return Instance;
}

void FAzr_DebugLog::SetCapacity(int32 InCapacity)
{
	Capacity = FMath::Max(1, InCapacity);
	if (Entries.Num() > Capacity)
	{
		Entries.RemoveAt(0, Entries.Num() - Capacity, EAllowShrinking::No);
	}
}

void FAzr_DebugLog::Clear()
{
	Entries.Reset();
	OnCleared.Broadcast();
}

namespace
{
	/** UAzr_Grab -> "Grab". The prefix is on every class in the framework and says nothing here. */
	FName MakeCategory(const UObject* Target)
	{
		if (!Target) return NAME_None;

		FString ClassName = Target->GetClass()->GetName();
		ClassName.RemoveFromStart(TEXT("Azr_"));
		ClassName.RemoveFromEnd(TEXT("_C"));   // Blueprint subclasses of a framework class
		return FName(*ClassName);
	}

	/** "BP_C1_Valve.Azr Latch" -- the actor as the level shows it, then the component on it. */
	FString MakeTargetName(const UObject* Target)
	{
		if (!Target) return FString();

		if (const UActorComponent* Component = Cast<UActorComponent>(Target))
		{
			if (const AActor* Owner = Component->GetOwner())
			{
#if WITH_EDITOR
				return FString::Printf(TEXT("%s.%s"), *Owner->GetActorNameOrLabel(), *Component->GetName());
#else
				return FString::Printf(TEXT("%s.%s"), *Owner->GetName(), *Component->GetName());
#endif
			}
		}

		if (const AActor* Actor = Cast<AActor>(Target))
		{
#if WITH_EDITOR
			return Actor->GetActorNameOrLabel();
#else
			return Actor->GetName();
#endif
		}

		return Target->GetName();
	}

	/**
	 * Enable and Disable are the ordering that explains most bugs here, so they are promoted out of
	 * the noise by name rather than by a second argument at every call site -- one less thing to get
	 * wrong, and it stays right when a function is renamed.
	 */
	EAzr_DebugImportance ClassifyCall(const TCHAR* What)
	{
		const FStringView View(What);
		if (View.StartsWith(TEXT("Enable")) || View.StartsWith(TEXT("Disable")))
		{
			return EAzr_DebugImportance::Lifecycle;
		}
		return EAzr_DebugImportance::Detail;
	}
}

void FAzr_DebugLog::Record(EAzr_DebugEntryKind Kind, const UObject* Target, const TCHAR* What)
{
	if (!bCapturing || !What) return;

	FAzr_DebugEntry Entry;
	Entry.Kind = Kind;
	Entry.Importance = (Kind == EAzr_DebugEntryKind::Event) ? EAzr_DebugImportance::Event : ClassifyCall(What);
	Entry.Category = MakeCategory(Target);
	Entry.What = What;
	Entry.Target = MakeTargetName(Target);
	Entry.FrameNumber = GFrameCounter;

	if (Target)
	{
		if (const UWorld* World = Target->GetWorld())
		{
			Entry.TimeSeconds = World->GetTimeSeconds();
		}
	}

#if DO_BLUEPRINT_GUARD
	// The caller, read off the live script stack rather than guessed at. The engine is still standing
	// inside the calling graph while this runs, so the top frame is whoever made the call. Empty when
	// the stack is empty, which means C++ or the engine called us and there is no Blueprint to blame.
	const TArrayView<const FFrame* const> Stack = FBlueprintContextTracker::Get().GetCurrentScriptStack();
	if (Stack.Num() > 0)
	{
		if (const FFrame* Top = Stack.Last())
		{
			if (const UFunction* Function = Top->Node)
			{
				Entry.CallerUFunction = Function;
				Entry.CallerFunction = Function->GetName();

				if (const UClass* OwningClass = Function->GetOwnerClass())
				{
					Entry.CallerClass = OwningClass;

					// Trimmed so it reads as the asset does: BP_C1_Valve, not BP_C1_Valve_C.
					FString BlueprintName = OwningClass->GetName();
					BlueprintName.RemoveFromEnd(TEXT("_C"));
					Entry.CallerBlueprint = MoveTemp(BlueprintName);
				}

				// Offset of the instruction currently executing, which is what resolves back to a node.
				// Code has already advanced past the opcode by the time a native call runs, so this is
				// matched with an imprecise lookup on the editor side rather than an exact one.
				const uint8* ScriptStart = Function->Script.GetData();
				if (ScriptStart && Top->Code)
				{
					Entry.CallerCodeOffset = static_cast<int32>(Top->Code - ScriptStart);
				}
			}
		}
	}
#endif

	if (Entries.Num() >= Capacity)
	{
		Entries.RemoveAt(0, (Entries.Num() - Capacity) + 1, EAllowShrinking::No);
	}

	const int32 Index = Entries.Add(MoveTemp(Entry));
	OnEntryRecorded.Broadcast(Entries[Index]);
}

namespace Azr::Debug
{
	const TCHAR* TrimFunctionName(const TCHAR* FullFunctionName)
	{
		if (!FullFunctionName) return TEXT("");

		// MSVC hands __FUNCTION__ over as "UAzr_Grab::EnableGrab". Everything before the last pair of
		// colons is the class, which is already recorded as the category.
		const TCHAR* Last = FullFunctionName;
		for (const TCHAR* It = FullFunctionName; *It; ++It)
		{
			if (It[0] == TEXT(':') && It[1] == TEXT(':'))
			{
				Last = It + 2;
			}
		}
		return Last;
	}
}
