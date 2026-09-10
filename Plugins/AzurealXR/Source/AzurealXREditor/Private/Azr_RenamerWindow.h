
#pragma once

#include "CoreMinimal.h"
#include "Azr_RenamerRules.h"
#include "Widgets/SCompoundWidget.h"
#include "Widgets/Views/SListView.h"

class IAssetTools;
class SComboButton;

/**
 * One rename that has already happened, kept so it can be put back.
 *
 * A rename moves the object rather than replacing it, so the handle usually survives -- but nothing
 * holds it between the rename and the undo, so the path is kept alongside and used to find the asset
 * again if it has been collected in the meantime.
 */
struct FAzr_RenameRecord
{
	TWeakObjectPtr<UObject> Object;

	/** The folder both names live in. The renamer only ever changes a name, never a location. */
	FString PackagePath;

	FString FromName;
	FString ToName;

	/** The two names differ only in capitalisation, which has to be renamed in two hops. */
	bool bCaseOnly = false;
};

/** One press of Rename. Undo puts the whole batch back at once, since that is how it was made. */
struct FAzr_RenameBatch
{
	TArray<FAzr_RenameRecord> Records;
};

/**
 * What the panel is about to look at.
 *
 * Sweeping a folder and fixing a hand-picked handful of assets are different jobs -- "tidy this
 * folder" against "fix these three" -- but once anything can be dragged onto the panel they arrive
 * the same way. The two are held side by side rather than as an either/or because a single drag can
 * carry both a folder and a loose asset.
 */
struct FAzr_ScanSource
{
	/** Folders to sweep, as internal paths ("/Game/Props"), never virtual ones ("/All/Game/Props"). */
	TArray<FString> Folders;

	/** Assets named individually, when a selection was dropped rather than a folder. */
	TArray<FAssetData> Assets;

	bool IsEmpty() const { return Folders.IsEmpty() && Assets.IsEmpty(); }

	/** Shown in the toolbar, so what Rename is about to touch is never left to be guessed at. */
	FString Describe(bool bRecursive) const;
};

/**
 * The Azureal Renamer.
 *
 * Point it at content and it puts the project's prefixes right: SM_ on a static mesh, M_ on a
 * material, WBP_ on a widget blueprint. Assets already named correctly are shown and skipped, not
 * touched -- the point is to fix the wrong ones, not to churn the whole folder.
 *
 * There are three ways to say what to look at, none of which involves typing a path: choose a folder
 * from the picker, drag a folder or a selection of assets onto the panel, or right-click either in the
 * Content Browser.
 *
 * Nothing renames without being seen first. The panel scans, shows every proposal with its reason, and
 * applies only the rows still ticked when Rename is pressed. Ctrl+Z then puts a batch back, for as
 * long as the panel stays open.
 */
class SAzr_RenamerWindow : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SAzr_RenamerWindow) {}
	SLATE_END_ARGS()

	void Construct(const FArguments& InArgs);

	static const FName TabId;
	static void RegisterTabSpawner();
	static void UnregisterTabSpawner();

	/** Opens the panel pointed at folders, for the Content Browser's folder right-click entry. */
	static void OpenForFolders(const TArray<FString>& Folders);

	/** Opens the panel pointed at an explicit selection, for the asset right-click entry. */
	static void OpenForAssets(const TArray<FAssetData>& Assets);

private:
	TArray<TSharedPtr<FAzr_RenamePlan>> Plans;
	TSharedPtr<SListView<TSharedPtr<FAzr_RenamePlan>>> PlanList;
	TSharedPtr<SComboButton> PathPickerButton;

	FAzr_ScanSource Source;

	/** Include assets in child folders. On by default; a content folder is usually a tree. */
	bool bRecursive = true;

	/** Show the ones already named correctly, greyed, so a scan reads as complete rather than empty. */
	bool bShowCorrect = true;

	/** Clean up the redirectors a rename leaves behind, so the folder is not littered with stubs. */
	bool bFixRedirectors = true;

	/** A drag is currently over the panel, and whether it holds anything this panel can use. */
	bool bDragHovered = false;
	bool bDragUsable = false;

	FString StatusLine;

	/** Applied batches, newest last. Ctrl+Z takes from the end. */
	TArray<FAzr_RenameBatch> UndoStack;

	/** Deep enough for a session of tidying, shallow enough that it cannot grow without bound. */
	static constexpr int32 MaxUndoDepth = 20;

	void Scan();
	FReply Apply();
	FReply Undo();

	/** Replaces what is being looked at and rescans. Every input route ends up here. */
	void SetSource(FAzr_ScanSource&& NewSource);

	/**
	 * Carries out a list of renames, reporting what moved and what could not.
	 *
	 * Both directions come through here -- Undo is the same operation with the two names swapped -- so
	 * the parts that are easy to get wrong exist once rather than twice.
	 */
	void RunRenames(const TArray<FAzr_RenameRecord>& Records, TArray<FAzr_RenameRecord>& OutDone, TArray<FString>& OutBlocked);

	/** Clears the redirectors this pass left behind, within the given folders only. */
	void FixupRedirectors(IAssetTools& AssetTools, const TArray<FString>& Folders);

	/**
	 * Which folders a redirector sweep may touch.
	 *
	 * Never returns the whole project by accident: an asset-registry filter carrying a class but no
	 * path matches every redirector there is, so a scan of three loose assets would otherwise go and
	 * rewrite references across all of /Game.
	 */
	TArray<FString> FoldersForFixup(const TArray<FAzr_RenameRecord>& Done) const;

	/** Puts the Content Browser back in step without moving the user out of the folder they are in. */
	void RefreshContentBrowser();

	void PushUndo(FAzr_RenameBatch&& Batch);

	/** How many rows are ticked and actually need doing. */
	int32 CountSelected() const;

	TSharedRef<SWidget> BuildToolbar();
	TSharedRef<SWidget> BuildList();

	/** The folder tree that drops out of the Choose Folder button. */
	TSharedRef<SWidget> BuildPathPicker();
	void HandlePathPicked(const FString& Path);

	/** Reads a drag operation into a scan source. False when the drag holds nothing usable. */
	static bool ReadDrag(const FDragDropEvent& Event, FAzr_ScanSource& OutSource);

	virtual void OnDragEnter(const FGeometry& Geometry, const FDragDropEvent& Event) override;
	virtual void OnDragLeave(const FDragDropEvent& Event) override;
	virtual FReply OnDragOver(const FGeometry& Geometry, const FDragDropEvent& Event) override;
	virtual FReply OnDrop(const FGeometry& Geometry, const FDragDropEvent& Event) override;

	virtual FReply OnKeyDown(const FGeometry& Geometry, const FKeyEvent& KeyEvent) override;
	virtual bool SupportsKeyboardFocus() const override { return true; }
};
