

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Azr_Debug.generated.h"

/**
 * The Azureal Debugger's recording side. The window that reads all this lives in AzurealXREditor.
 *
 * Two halves, because the two questions a broken interaction raises are different questions:
 *
 *   "What fired, and who told it to?"  -- the trail below. Every framework entry point a Blueprint
 *   can call, and every framework event a Blueprint can bind to, drops a line saying what happened
 *   and, the part that cannot be worked out by reading a graph, which Blueprint and which node.
 *
 *   "What state is everything in?"     -- IAzr_Debuggable. The commonest failure in this framework
 *   is not a wrong event but a missing one: something was never enabled, or was disabled by
 *   whatever ran before it. There is no event to catch for that, only a state to look at.
 *
 * The caller comes from the live script stack. When a Blueprint calls EnableGrab, the engine is
 * still standing inside the calling graph while our C++ runs, so the caller is read off rather than
 * inferred from ordering. That stack exists whenever DO_BLUEPRINT_GUARD is on -- every configuration
 * except Shipping and Test, so this works in a packaged Development build too, not only in-editor.
 *
 * Deliberately not a subsystem. A GameInstance subsystem would be the obvious home, but the point of
 * this tool is to outlive what is being debugged: level travel, map restarts, PIE ending. A
 * module-lifetime singleton keeps the trail across all three.
 */

/** What kind of thing happened. */
UENUM()
enum class EAzr_DebugEntryKind : uint8
{
	/** A BlueprintCallable was invoked -- something told the framework to do this. */
	Call,

	/** A framework delegate was broadcast -- the framework told everyone something happened. */
	Event,
};

/**
 * How much a line matters, so the trail can default to the interesting ones.
 *
 * Without this the feed is unreadable: per-frame calls like SetInteractSize bury the handful of
 * lines that actually explain a bug.
 */
UENUM()
enum class EAzr_DebugImportance : uint8
{
	/** Enable / Disable. The framework is dormant until enabled, so this is the ordering that matters. */
	Lifecycle,

	/** A delegate broadcast -- what the training flow reacts to. */
	Event,

	/** Everything else. Off by default. */
	Detail,
};

/** One line in the trail. */
USTRUCT()
struct FAzr_DebugEntry
{
	GENERATED_BODY()

	/** World seconds, or -1 when there was no world to ask -- the trail outlives worlds. */
	double TimeSeconds = -1.0;

	/** So entries inside a single frame can still be ordered and grouped. Enable/Disable races live here. */
	uint64 FrameNumber = 0;

	EAzr_DebugEntryKind Kind = EAzr_DebugEntryKind::Call;
	EAzr_DebugImportance Importance = EAzr_DebugImportance::Detail;

	/** The class with the framework prefix trimmed: UAzr_Grab reads as "Grab". */
	FName Category;

	/** The function or event name as Blueprint spells it: "EnableGrab", "OnGrabbed". */
	FString What;

	/** Where it happened -- actor label and component name. */
	FString Target;

	/** The Blueprint the call came from. Empty when the caller was C++ or the engine. */
	FString CallerBlueprint;

	/** The graph or function inside that Blueprint. */
	FString CallerFunction;

	// --- For the window's jump-to-node button ---
	//
	// The calling class rather than the calling object, and weak on purpose.
	//
	// The object would be a play-session instance, which stops existing the moment Play ends -- which
	// is precisely when a trail gets read, so the button would vanish exactly when it was wanted. The
	// generated class belongs to the Blueprint asset and outlives the session, and its default object
	// is enough to find the graph.
	TWeakObjectPtr<const UClass> CallerClass;
	TWeakObjectPtr<const UFunction> CallerUFunction;

	/** Bytecode offset of the calling node, which is what resolves back to an actual graph node. */
	int32 CallerCodeOffset = INDEX_NONE;

	/** How many identical lines in a row this one stands for. Set by the view, not by recording. */
	int32 RepeatCount = 1;

	bool HasCaller() const { return !CallerBlueprint.IsEmpty(); }
	bool CanJumpToNode() const { return CallerClass.IsValid() && CallerUFunction.IsValid() && CallerCodeOffset != INDEX_NONE; }

	/** Whether two lines are the same thing happening again, for collapsing a repeat into a count. */
	bool IsSameAs(const FAzr_DebugEntry& Other) const
	{
		return Kind == Other.Kind
			&& What == Other.What
			&& Target == Other.Target
			&& CallerBlueprint == Other.CallerBlueprint
			&& CallerFunction == Other.CallerFunction;
	}
};

/** What a component says about itself for the Components tab. */
USTRUCT()
struct FAzr_DebugComponentInfo
{
	GENERATED_BODY()

	/** The one word that matters: is this thing listening right now. */
	bool bEnabled = false;

	/** Free text for the state column: "Enabled", "Held by Right", "Step 2 of 4". */
	FString State;

	/** The zone/brain pairing number, or INDEX_NONE where the component has none. */
	int32 InteractID = INDEX_NONE;

	/** Anything else worth seeing at a glance: latch type and value, explain mode, grab mode. */
	FString Detail;
};

/**
 * Implemented by every framework component worth watching.
 *
 * The state each component keeps is private and inconsistently named -- bIsGrabEnabled, bIsActive,
 * bIsTouchEnabled -- so rather than the debugger reaching in and guessing, each component says its
 * own piece. It also means a component's own rules for "correctly set up" live with the component
 * instead of in a checker that has to be kept in step with it.
 */
UINTERFACE(MinimalAPI)
class UAzr_Debuggable : public UInterface
{
	GENERATED_BODY()
};

class AZUREALXR_API IAzr_Debuggable
{
	GENERATED_BODY()

public:
	/** Current state, for the Components tab. Called often; keep it cheap and side-effect free. */
	virtual void GetAzrDebugInfo(FAzr_DebugComponentInfo& Out) const = 0;

	/**
	 * Anything mis-wired, for the Problems tab -- one plain sentence per problem, phrased as what to
	 * go and fix.
	 *
	 * This is the half that catches the bugs a trail never will. A zone whose InteractID matches no
	 * brain, a mesh name that resolves to nothing, an unassigned Input Action: none of them fire an
	 * event when they fail, they simply never happen, so there is nothing to trace. They can only be
	 * found by looking.
	 */
	virtual void ValidateAzrSetup(TArray<FString>& OutProblems) const {}
};

/** The trail itself. One per process, for the life of the module. */
class AZUREALXR_API FAzr_DebugLog
{
public:
	static FAzr_DebugLog& Get();

	bool IsCapturing() const { return bCapturing; }
	void SetCapturing(bool bInCapturing) { bCapturing = bInCapturing; }

	/** Oldest lines are dropped once the trail is this long. */
	int32 GetCapacity() const { return Capacity; }
	void SetCapacity(int32 InCapacity);

	const TArray<FAzr_DebugEntry>& GetEntries() const { return Entries; }
	void Clear();

	/** Called by the macros below. Target is the component or actor it happened to. */
	void Record(EAzr_DebugEntryKind Kind, const UObject* Target, const TCHAR* What);

	/** Fired as each line lands, so a live view need not poll. */
	DECLARE_MULTICAST_DELEGATE_OneParam(FOnEntryRecorded, const FAzr_DebugEntry&);
	FOnEntryRecorded OnEntryRecorded;

	/** Fired when the trail is emptied, so a live view can drop what it was showing. */
	DECLARE_MULTICAST_DELEGATE(FOnCleared);
	FOnCleared OnCleared;

private:
	TArray<FAzr_DebugEntry> Entries;
	int32 Capacity = 4096;

	/**
	 * On in the editor, off everywhere else.
	 *
	 * The code stays compiled in for every configuration so behaviour never differs between what is
	 * tested and what ships -- but a packaged build has no window to read the trail in, so recording
	 * one would be pure cost: a string or two per Enable, per Disable and per event, forever, for
	 * nobody. Anything that wants it in a packaged Development build can turn it back on.
	 */
	bool bCapturing = (WITH_EDITOR != 0);
};

namespace Azr::Debug
{
	/** "UAzr_Grab::EnableGrab" becomes "EnableGrab"; the class is recorded separately as the category. */
	AZUREALXR_API const TCHAR* TrimFunctionName(const TCHAR* FullFunctionName);
}

/**
 * Compiled away entirely in Shipping and Test.
 *
 * Not merely switched off: gone. A shipped headset build has no window to read a trail in, so every
 * one of these would be a call it never needed to make and a string literal it never needed to
 * carry -- and one of them, as the debugger itself revealed on its first run, sits on a per-frame
 * path. Development keeps them, so a packaged build can still be traced when something has to be
 * chased outside the editor; it simply does not record until asked, per FAzr_DebugLog::bCapturing.
 */
#if UE_BUILD_SHIPPING || UE_BUILD_TEST

	#define AZR_TRACE()                 do {} while (0)
	#define AZR_TRACE_FOR(TargetObject) do {} while (0)
	#define AZR_TRACE_EVENT(EventName)  do {} while (0)

#else

/**
 * One line at the top of a BlueprintCallable records the call and the Blueprint that made it.
 *
 * __FUNCTION__ rather than a hand-written string, so a renamed function renames its own trace and
 * there is no second place to keep in step.
 */
#define AZR_TRACE() \
	FAzr_DebugLog::Get().Record(EAzr_DebugEntryKind::Call, this, Azr::Debug::TrimFunctionName(TEXT(__FUNCTION__)))

/** For a component recording on behalf of another object -- a zone reporting against its brain. */
#define AZR_TRACE_FOR(TargetObject) \
	FAzr_DebugLog::Get().Record(EAzr_DebugEntryKind::Call, TargetObject, Azr::Debug::TrimFunctionName(TEXT(__FUNCTION__)))

/** Placed immediately before a delegate broadcast, named as Blueprint sees it. */
#define AZR_TRACE_EVENT(EventName) \
	FAzr_DebugLog::Get().Record(EAzr_DebugEntryKind::Event, this, TEXT(EventName))

#endif
