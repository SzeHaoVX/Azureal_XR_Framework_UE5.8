
#pragma once

#include "CoreMinimal.h"
#include "Azr_Debug.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"

class UActorComponent;

/**
 * The Azureal Debugger window.
 *
 * Three tabs, because a broken interaction raises three different questions and only one of them is
 * about events:
 *
 *   Components -- what exists and what state is it in right now. The commonest failure in this
 *   framework is not a wrong event but a missing one: nothing was ever enabled, or something
 *   disabled it first. There is no event to catch for that, only a state to look at.
 *
 *   Trail      -- what fired, in frame order, and which Blueprint node called it. This is the half
 *   that cannot be worked out by reading a graph, which is why each row carries a button that opens
 *   the Blueprint and puts the node on screen.
 *
 *   Problems   -- what is mis-wired, found by looking rather than by waiting. A zone whose
 *   InteractID matches no brain, a mesh name that resolves to nothing: they never fire an event when
 *   they fail, they simply never happen.
 */

/** One row of the Components tab. */
struct FAzr_ComponentRow
{
	TWeakObjectPtr<UActorComponent> Component;
	FString ActorName;
	FString ComponentName;
	FName Category;
	FAzr_DebugComponentInfo Info;
};

/** One row of the Problems tab. */
struct FAzr_ProblemRow
{
	TWeakObjectPtr<UObject> Subject;
	FString Where;
	FString Problem;
};

class SAzr_DebuggerWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SAzr_DebuggerWindow) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);
	virtual ~SAzr_DebuggerWindow() override;

	/** Keeps the Components tab live. State changes as a session runs, and pressing Refresh to see it is no way to watch. */
	virtual void Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime) override;

	/** Registered by the module so the tab survives layout saves. */
	static const FName TabId;
	static void RegisterTabSpawner();
	static void UnregisterTabSpawner();

private:
	enum class ETab : uint8 { Components, Trail, Problems };

	ETab ActiveTab = ETab::Trail;

	// --- data ---
	TArray<TSharedPtr<FAzr_ComponentRow>> ComponentRows;
	TArray<TSharedPtr<FAzr_DebugEntry>> TrailRows;
	TArray<TSharedPtr<FAzr_ProblemRow>> ProblemRows;

	TSharedPtr<SListView<TSharedPtr<FAzr_ComponentRow>>> ComponentList;
	TSharedPtr<SListView<TSharedPtr<FAzr_DebugEntry>>> TrailList;
	TSharedPtr<SListView<TSharedPtr<FAzr_ProblemRow>>> ProblemList;

	/** Detail lines are hidden by default; per-frame calls would bury everything that explains a bug. */
	bool bShowDetailLines = false;

	/**
	 * Show only lines a Blueprint asked for.
	 *
	 * Off by default, and worth understanding before turning on: every framework *event* is broadcast
	 * from C++, so OnGrabbed, OnLatched and OnTouched all read as "C++" and this hides every one of
	 * them. Useful for reading a Game Manager's own sequence; not for seeing what the framework
	 * answered back.
	 */
	bool bBlueprintCallsOnly = false;

	/** Appends one line, folding it into the last row when it is the same thing happening again. */
	void AppendTrailRow(const FAzr_DebugEntry& Entry);
	bool PassesTrailFilter(const FAzr_DebugEntry& Entry) const;

	/** Emptied at the start of each PIE session, so a run is read on its own rather than after the last one. */
	bool bResetOnPlay = true;

	// --- build ---
	TSharedRef<SWidget> BuildToolbar();
	TSharedRef<SWidget> BuildBody();
	TSharedRef<SWidget> BuildComponentsTab();
	TSharedRef<SWidget> BuildTrailTab();
	TSharedRef<SWidget> BuildProblemsTab();

	/** Seconds between component sweeps. Four times a second reads as live without walking every actor every frame. */
	static constexpr double ComponentRefreshInterval = 0.25;
	double NextComponentRefresh = 0.0;

	// --- refresh ---
	void RefreshComponents();
	void RefreshTrail();
	void RefreshProblems();

	/** PIE's world while playing, the editor's the rest of the time. */
	static UWorld* GetInspectedWorld();

	// --- hooks ---
	void HandleEntryRecorded(const FAzr_DebugEntry& Entry);
	void HandleLogCleared();
	void HandleBeginPIE(bool bIsSimulating);

	FDelegateHandle EntryHandle;
	FDelegateHandle ClearedHandle;
	FDelegateHandle BeginPIEHandle;

	/** Opens the Blueprint the row came from and puts the calling node on screen. */
	static FReply JumpToNode(TSharedPtr<FAzr_DebugEntry> Entry);
};
