
#include "Azr_RenamerWindow.h"

#include "AssetRegistry/AssetRegistryModule.h"
#include "AssetToolsModule.h"
#include "ContentBrowserItemPath.h"
#include "ContentBrowserModule.h"
#include "DragAndDrop/AssetDragDropOp.h"
#include "DragAndDrop/DecoratedDragDropOp.h"
#include "IAssetTools.h"
#include "IContentBrowserSingleton.h"
#include "Misc/MessageDialog.h"
#include "Misc/PackageName.h"
#include "Misc/ScopedSlowTask.h"
#include "ObjectTools.h"
#include "Styling/AppStyle.h"
#include "UObject/ObjectRedirector.h"
#include "Widgets/Docking/SDockTab.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Input/SComboButton.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Text/STextBlock.h"
#include "WorkspaceMenuStructure.h"
#include "WorkspaceMenuStructureModule.h"

#define LOCTEXT_NAMESPACE "AzurealRenamer"

const FName SAzr_RenamerWindow::TabId(TEXT("AzurealRenamer"));

namespace
{
	/** Kept as a weak handle so the Content Browser entries reuse the open panel rather than stacking them. */
	TWeakPtr<SAzr_RenamerWindow> GOpenRenamer;

	FSlateColor NoteColour(const FAzr_RenamePlan& Plan)
	{
		if (!Plan.bNeedsRename) return FSlateColor(FLinearColor(0.5f, 0.5f, 0.5f));
		if (Plan.bCaseOnly)     return FSlateColor(FLinearColor(1.0f, 0.72f, 0.4f));
		return FSlateColor(FLinearColor(0.45f, 0.75f, 1.0f));
	}

	/** The redirectors, if any, currently sitting at a package name. */
	TArray<UObjectRedirector*> RedirectorsAt(const FString& PackageName)
	{
		FAssetRegistryModule& Registry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

		TArray<FAssetData> AtName;
		Registry.Get().GetAssetsByPackageName(FName(*PackageName), AtName, /*bIncludeOnlyOnDiskAssets*/ false);

		TArray<UObjectRedirector*> Stubs;
		for (const FAssetData& Data : AtName)
		{
			if (!Data.IsRedirector()) continue;

			if (UObjectRedirector* Stub = Cast<UObjectRedirector>(Data.GetAsset()))
			{
				Stubs.Add(Stub);
			}
		}
		return Stubs;
	}

	/**
	 * Clears the redirectors squatting on the names a batch is about to rename onto.
	 *
	 * Nothing in the AssetTools rename path removes a redirector at the destination, so renaming onto a
	 * name that still holds one puts the asset into a package that already contains the stub. The stub
	 * destination then resolves to the package rather than to an object inside it, and because a
	 * package is a private object Unreal will not write a reference to one: the asset looks perfectly
	 * fine in the editor and every save of it fails with "Illegal reference to private object".
	 *
	 * Getting there takes nothing more than renaming A to B and then B back to A -- which is exactly
	 * what Undo does, and what anyone reversing a rename by hand does.
	 *
	 * They are cleared by fixing them up rather than by deleting them, so whatever still points at the
	 * old name is rewritten first and nothing is left dangling. One call for the whole batch, because
	 * fixing up is the slow part. A real asset at a destination is left strictly alone -- the rename is
	 * allowed to fail on it instead.
	 */
	void ClearDestinations(IAssetTools& AssetTools, const TArray<FAzr_RenameRecord>& Records)
	{
		TArray<UObjectRedirector*> Stubs;
		for (const FAzr_RenameRecord& Record : Records)
		{
			Stubs.Append(RedirectorsAt(Record.PackagePath / Record.ToName));
		}

		if (Stubs.Num() > 0)
		{
			AssetTools.FixupReferencers(Stubs, /*bCheckoutDialogPrompt*/ false);
		}
	}

	/**
	 * Whether a string from a drag operation really names a content folder.
	 *
	 * FAssetDragDropOp::GetAssetPaths holds folder paths when the drag came from the Content Browser,
	 * but the array is generic and other producers put object paths in it. Checking rather than
	 * trusting keeps anything that is not a folder out of the asset-registry filter: IsValidPath
	 * rejects a virtual "/All/Game/..." path because /All is not a mount root, and the dot test throws
	 * out "/Game/Foo.Foo", which would otherwise look like a folder called Foo.Foo.
	 */
	bool LooksLikeContentFolder(const FString& Path)
	{
		return !Path.IsEmpty() && !Path.Contains(TEXT(".")) && FPackageName::IsValidPath(Path);
	}
}

FString FAzr_ScanSource::Describe(bool bRecursive) const
{
	if (IsEmpty())
	{
		return TEXT("nothing yet  --  choose a folder, or drag one here from the Content Browser");
	}

	const TCHAR* Below = bRecursive ? TEXT(" and below") : TEXT("");

	TArray<FString> Parts;

	if (Folders.Num() == 1)
	{
		Parts.Add(Folders[0] + Below);
	}
	else if (Folders.Num() > 1)
	{
		Parts.Add(FString::Printf(TEXT("%d folders%s"), Folders.Num(), Below));
	}

	if (Assets.Num() == 1)
	{
		Parts.Add(Assets[0].AssetName.ToString());
	}
	else if (Assets.Num() > 1)
	{
		Parts.Add(FString::Printf(TEXT("%d assets"), Assets.Num()));
	}

	return FString::Join(Parts, TEXT("  +  "));
}

// ============================================================================
//  Tab
// ============================================================================

void SAzr_RenamerWindow::RegisterTabSpawner()
{
	FGlobalTabmanager::Get()
		->RegisterNomadTabSpawner(TabId, FOnSpawnTab::CreateLambda([](const FSpawnTabArgs&)
			{
				TSharedRef<SAzr_RenamerWindow> Panel = SNew(SAzr_RenamerWindow);
				GOpenRenamer = Panel;

				return SNew(SDockTab).TabRole(ETabRole::NomadTab)[ Panel ];
			}))
		.SetDisplayName(LOCTEXT("TabTitle", "Azureal Renamer"))
		.SetTooltipText(LOCTEXT("TabTooltip", "Put the project's asset prefixes right."))
		.SetGroup(WorkspaceMenu::GetMenuStructure().GetDeveloperToolsMiscCategory())
		.SetIcon(FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Adjust"));
}

void SAzr_RenamerWindow::UnregisterTabSpawner()
{
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(TabId);
}

void SAzr_RenamerWindow::OpenForFolders(const TArray<FString>& Folders)
{
	FGlobalTabmanager::Get()->TryInvokeTab(TabId);

	if (TSharedPtr<SAzr_RenamerWindow> Panel = GOpenRenamer.Pin())
	{
		FAzr_ScanSource NewSource;
		NewSource.Folders = Folders;
		Panel->SetSource(MoveTemp(NewSource));
	}
}

void SAzr_RenamerWindow::OpenForAssets(const TArray<FAssetData>& Assets)
{
	FGlobalTabmanager::Get()->TryInvokeTab(TabId);

	if (TSharedPtr<SAzr_RenamerWindow> Panel = GOpenRenamer.Pin())
	{
		FAzr_ScanSource NewSource;
		NewSource.Assets = Assets;
		Panel->SetSource(MoveTemp(NewSource));
	}
}

// ============================================================================
//  Layout
// ============================================================================

void SAzr_RenamerWindow::Construct(const FArguments& InArgs)
{
	// The whole panel is wrapped so that a drop anywhere on it counts, not only on the list. Slate
	// routes a drag to whatever is under the cursor and lets it bubble up from there, so without an
	// outer widget spanning the panel the gaps between the toolbar controls would swallow drops.
	ChildSlot
	[
		SNew(SBorder)
		.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
		.BorderBackgroundColor_Lambda([this]()
			{
				if (!bDragHovered) return FSlateColor(FLinearColor::White);
				return bDragUsable
					? FSlateColor(FLinearColor(0.35f, 0.85f, 0.45f))
					: FSlateColor(FLinearColor(0.9f, 0.35f, 0.35f));
			})
		[
			SNew(SVerticalBox)

			+ SVerticalBox::Slot().AutoHeight()[ BuildToolbar() ]
			+ SVerticalBox::Slot().AutoHeight()[ SNew(SSeparator) ]

			+ SVerticalBox::Slot().FillHeight(1.0f)[ BuildList() ]

			+ SVerticalBox::Slot().AutoHeight().Padding(8, 6)
			[
				SNew(STextBlock)
				.AutoWrapText(true)
				.Text_Lambda([this]() { return FText::FromString(StatusLine); })
			]
		]
	];

	Scan();
}

TSharedRef<SWidget> SAzr_RenamerWindow::BuildToolbar()
{
	return SNew(SVerticalBox)

		+ SVerticalBox::Slot().AutoHeight()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(8, 6, 4, 6)
			[ SNew(STextBlock).Text(LOCTEXT("SourceLabel", "Scanning")) ]

			+ SHorizontalBox::Slot().FillWidth(1.0f).VAlign(VAlign_Center).Padding(4, 6)
			[
				SNew(STextBlock)
				.Text_Lambda([this]() { return FText::FromString(Source.Describe(bRecursive)); })
				.ToolTipText(LOCTEXT("SourceTip",
					"What the next scan will look at.\n\n"
					"Change it with Choose Folder, by dragging a folder or a selection of assets onto "
					"this panel, or by right-clicking either in the Content Browser."))
			]

			+ SHorizontalBox::Slot().AutoWidth().Padding(4, 6)
			[
				SAssignNew(PathPickerButton, SComboButton)
				.ToolTipText(LOCTEXT("BrowseTip", "Pick a content folder to scan."))
				.OnGetMenuContent(this, &SAzr_RenamerWindow::BuildPathPicker)
				.ButtonContent()
				[ SNew(STextBlock).Text(LOCTEXT("Browse", "Choose Folder")) ]
			]

			+ SHorizontalBox::Slot().AutoWidth().Padding(4, 6)
			[
				SNew(SButton)
				.Text(LOCTEXT("Scan", "Rescan"))
				.ToolTipText(LOCTEXT("ScanTip", "Look again, in case the content changed underneath."))
				.IsEnabled_Lambda([this]() { return !Source.IsEmpty(); })
				.OnClicked_Lambda([this]() { Scan(); return FReply::Handled(); })
			]

			+ SHorizontalBox::Slot().AutoWidth().Padding(4, 6)
			[
				SNew(SButton)
				.Text_Lambda([this]()
					{
						const int32 N = CountSelected();
						return N > 0
							? FText::Format(LOCTEXT("ApplyN", "Rename {0}"), FText::AsNumber(N))
							: LOCTEXT("ApplyNone", "Rename");
					})
				.IsEnabled_Lambda([this]() { return CountSelected() > 0; })
				.OnClicked(this, &SAzr_RenamerWindow::Apply)
			]

			+ SHorizontalBox::Slot().AutoWidth().Padding(4, 6, 8, 6)
			[
				SNew(SButton)
				.Text(LOCTEXT("Undo", "Undo"))
				.ToolTipText(LOCTEXT("UndoTip",
					"Put the last batch of renames back (Ctrl+Z).\n\n"
					"This is the panel's own history and lasts only while the panel is open -- the "
					"editor's Ctrl+Z has never covered asset renames."))
				.IsEnabled_Lambda([this]() { return UndoStack.Num() > 0; })
				.OnClicked(this, &SAzr_RenamerWindow::Undo)
			]
		]

		+ SVerticalBox::Slot().AutoHeight()
		[
			SNew(SHorizontalBox)

			+ SHorizontalBox::Slot().AutoWidth().Padding(8, 0, 8, 6)
			[
				SNew(SCheckBox)
				.IsChecked_Lambda([this]() { return bRecursive ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
				.OnCheckStateChanged_Lambda([this](ECheckBoxState S) { bRecursive = (S == ECheckBoxState::Checked); Scan(); })
				[ SNew(STextBlock).Text(LOCTEXT("Recursive", "Include subfolders")) ]
			]

			+ SHorizontalBox::Slot().AutoWidth().Padding(0, 0, 8, 6)
			[
				SNew(SCheckBox)
				.IsChecked_Lambda([this]() { return bShowCorrect ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
				.OnCheckStateChanged_Lambda([this](ECheckBoxState S) { bShowCorrect = (S == ECheckBoxState::Checked); Scan(); })
				[ SNew(STextBlock).Text(LOCTEXT("ShowCorrect", "Show already-correct")) ]
			]

			+ SHorizontalBox::Slot().AutoWidth().Padding(0, 0, 8, 6)
			[
				SNew(SCheckBox)
				.ToolTipText(LOCTEXT("RedirTip", "A rename leaves a redirector behind. Clean them up so the folder is not left full of stubs."))
				.IsChecked_Lambda([this]() { return bFixRedirectors ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
				.OnCheckStateChanged_Lambda([this](ECheckBoxState S) { bFixRedirectors = (S == ECheckBoxState::Checked); })
				[ SNew(STextBlock).Text(LOCTEXT("FixRedir", "Fix up redirectors")) ]
			]
		];
}

TSharedRef<SWidget> SAzr_RenamerWindow::BuildPathPicker()
{
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));

	FPathPickerConfig Config;

	// DefaultPath is deliberately left empty. SPathPicker seeds its LastSelectedPath from it and only
	// fires OnPathSelected when the clicked path differs from that -- so opening the picker on the
	// folder already being scanned would make the most likely click of all, the one on that folder, do
	// nothing whatsoever.
	Config.bAllowContextMenu = false;
	Config.bAllowClassesFolder = false;
	Config.OnPathSelected = FOnPathSelected::CreateSP(this, &SAzr_RenamerWindow::HandlePathPicked);

	return SNew(SBox)
		.WidthOverride(320.0f)
		.HeightOverride(420.0f)
		[ ContentBrowserModule.Get().CreatePathPicker(Config) ];
}

void SAzr_RenamerWindow::HandlePathPicked(const FString& Path)
{
	// An internal path, not a virtual one: FPathPickerConfig::bOnPathSelectedPassesVirtualPaths is left
	// at its default of false, so this arrives as "/Game/Props" rather than "/All/Game/Props".
	FAzr_ScanSource Picked;
	Picked.Folders.Add(Path);
	SetSource(MoveTemp(Picked));

	if (PathPickerButton.IsValid())
	{
		PathPickerButton->SetIsOpen(false);
	}
}

// ============================================================================
//  Drag and drop
// ============================================================================

bool SAzr_RenamerWindow::ReadDrag(const FDragDropEvent& Event, FAzr_ScanSource& OutSource)
{
	// Content Browser drags arrive as FContentBrowserDataDragDropOp, which derives from this, so asking
	// for the base covers both a folder drag and an asset drag. Collections use a different operation
	// that does not derive from it and are simply not accepted.
	TSharedPtr<FAssetDragDropOp> Op = Event.GetOperationAs<FAssetDragDropOp>();
	if (!Op.IsValid())
	{
		return false;
	}

	for (const FString& Path : Op->GetAssetPaths())
	{
		if (LooksLikeContentFolder(Path))
		{
			OutSource.Folders.AddUnique(Path);
		}
	}

	for (const FAssetData& Asset : Op->GetAssets())
	{
		if (Asset.IsValid())
		{
			OutSource.Assets.Add(Asset);
		}
	}

	return !OutSource.IsEmpty();
}

void SAzr_RenamerWindow::OnDragEnter(const FGeometry& Geometry, const FDragDropEvent& Event)
{
	FAzr_ScanSource Peek;
	bDragUsable = ReadDrag(Event, Peek);
	bDragHovered = true;

	if (TSharedPtr<FDecoratedDragDropOp> Op = Event.GetOperationAs<FDecoratedDragDropOp>())
	{
		Op->SetToolTip(
			bDragUsable
				? LOCTEXT("DropOk", "Scan this with the Azureal Renamer")
				: LOCTEXT("DropNo", "The Azureal Renamer cannot use this"),
			FAppStyle::GetBrush(bDragUsable ? "Icons.Adjust" : "Icons.Error"));
	}

	SCompoundWidget::OnDragEnter(Geometry, Event);
}

void SAzr_RenamerWindow::OnDragLeave(const FDragDropEvent& Event)
{
	bDragHovered = false;
	bDragUsable = false;

	// Slate resets the cursor override on its own, but the decorator text is ours to put back --
	// otherwise it follows the drag onto whatever the cursor moves to next.
	if (TSharedPtr<FDecoratedDragDropOp> Op = Event.GetOperationAs<FDecoratedDragDropOp>())
	{
		Op->ResetToDefaultToolTip();
	}

	SCompoundWidget::OnDragLeave(Event);
}

FReply SAzr_RenamerWindow::OnDragOver(const FGeometry& Geometry, const FDragDropEvent& Event)
{
	// Recomputed rather than relying on what OnDragEnter worked out: a drag can begin over a child
	// widget and reach the panel without an enter of its own, and Slate routes one last synthetic move
	// through here immediately before the drop.
	FAzr_ScanSource Peek;
	bDragUsable = ReadDrag(Event, Peek);
	bDragHovered = true;

	return bDragUsable ? FReply::Handled() : FReply::Unhandled();
}

FReply SAzr_RenamerWindow::OnDrop(const FGeometry& Geometry, const FDragDropEvent& Event)
{
	bDragHovered = false;
	bDragUsable = false;

	FAzr_ScanSource Dropped;
	if (!ReadDrag(Event, Dropped))
	{
		return FReply::Unhandled();
	}

	// A drop replaces rather than adds to what is already there. Dragging something onto the panel
	// reads as "look at this", and a source that quietly grew every time something was dropped would
	// make it impossible to be sure what Rename is about to touch.
	SetSource(MoveTemp(Dropped));

	return FReply::Handled();
}

// ============================================================================
//  Scan
// ============================================================================

void SAzr_RenamerWindow::SetSource(FAzr_ScanSource&& NewSource)
{
	Source = MoveTemp(NewSource);
	Scan();
}

void SAzr_RenamerWindow::Scan()
{
	Plans.Reset();

	if (Source.IsEmpty())
	{
		StatusLine = TEXT("Choose a folder, or drag one from the Content Browser onto this panel. A selection of assets works too.");
		if (PlanList.IsValid()) PlanList->RequestListRefresh();
		return;
	}

	FAssetRegistryModule& Registry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	TArray<FAssetData> Assets;

	for (const FString& Folder : Source.Folders)
	{
		FARFilter Filter;
		Filter.PackagePaths.Add(FName(*Folder));
		Filter.bRecursivePaths = bRecursive;

		// One filter per folder rather than one filter listing them all: the paths within a single
		// filter are OR-ed, which would be right here, but a filter is also intersected component by
		// component, and keeping them separate leaves no room for that to surprise anyone later.
		TArray<FAssetData> InFolder;
		Registry.Get().GetAssets(Filter, InFolder);
		Assets.Append(MoveTemp(InFolder));
	}

	Assets.Append(Source.Assets);

	// Folders can overlap, and one drag can carry both a folder and an asset that lives inside it.
	// A duplicate would be planned twice and renamed twice -- the second time against an object that
	// has already moved -- and would go onto the undo stack twice.
	{
		TSet<FSoftObjectPath> Seen;
		Assets.RemoveAll([&Seen](const FAssetData& Asset)
			{
				bool bAlreadyThere = false;
				Seen.Add(Asset.GetSoftObjectPath(), &bAlreadyThere);
				return bAlreadyThere;
			});
	}

	int32 Correct = 0;
	int32 Uncovered = 0;

	for (const FAssetData& Asset : Assets)
	{
		// Maps are left alone. They are named by chapter and module rather than by type, and a level
		// is the one asset whose name other things reach for by string.
		if (Asset.AssetClassPath.GetAssetName() == TEXT("World")) continue;

		FAzr_RenamePlan Plan;
		if (!FAzr_RenamerRules::BuildPlan(Asset, Plan))
		{
			++Uncovered;
			continue;
		}

		if (!Plan.bNeedsRename)
		{
			++Correct;
			if (!bShowCorrect) continue;
		}

		Plans.Add(MakeShared<FAzr_RenamePlan>(MoveTemp(Plan)));
	}

	// Needs-renaming first, then alphabetical, so the work is at the top.
	Plans.Sort([](const TSharedPtr<FAzr_RenamePlan>& A, const TSharedPtr<FAzr_RenamePlan>& B)
		{
			if (A->bNeedsRename != B->bNeedsRename) return A->bNeedsRename;
			return A->OldName < B->OldName;
		});

	StatusLine = FString::Printf(
		TEXT("%d asset(s) in %s  --  %d to rename, %d already correct, %d of a type with no rule."),
		Assets.Num(), *Source.Describe(bRecursive), CountSelected(), Correct, Uncovered);

	if (PlanList.IsValid()) PlanList->RequestListRefresh();
}

int32 SAzr_RenamerWindow::CountSelected() const
{
	int32 Count = 0;
	for (const TSharedPtr<FAzr_RenamePlan>& Plan : Plans)
	{
		if (Plan.IsValid() && Plan->bNeedsRename && Plan->bSelected) ++Count;
	}
	return Count;
}

// ============================================================================
//  Renaming
// ============================================================================

void SAzr_RenamerWindow::RunRenames(const TArray<FAzr_RenameRecord>& Records, TArray<FAzr_RenameRecord>& OutDone, TArray<FString>& OutBlocked)
{
	if (Records.IsEmpty()) return;

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));
	IAssetTools& AssetTools = AssetToolsModule.Get();

	ClearDestinations(AssetTools, Records);

	FScopedSlowTask SlowTask(static_cast<float>(Records.Num()), LOCTEXT("Renaming", "Renaming assets..."));
	SlowTask.MakeDialog();

	for (const FAzr_RenameRecord& Record : Records)
	{
		SlowTask.EnterProgressFrame(1.0f);

		UObject* Object = Record.Object.Get();
		if (!Object)
		{
			// A rename moves the object rather than replacing it, so the handle normally survives --
			// but nothing here holds it, so it can be collected between a rename and its undo.
			const FString Path = FString::Printf(TEXT("%s/%s.%s"), *Record.PackagePath, *Record.FromName, *Record.FromName);
			Object = LoadObject<UObject>(nullptr, *Path);
		}

		if (!Object)
		{
			OutBlocked.Add(FString::Printf(TEXT("%s (could not be found)"), *Record.FromName));
			continue;
		}

		// Asked again after the fixup rather than assumed: a redirector whose referencers could not be
		// rewritten survives it, and renaming onto one anyway is what produces an asset that will not
		// save. Better to leave this row alone and say so.
		if (RedirectorsAt(Record.PackagePath / Record.ToName).Num() > 0)
		{
			OutBlocked.Add(FString::Printf(TEXT("%s (a redirector still holds that name)"), *Record.ToName));
			continue;
		}

		// A rename that only changes capitalisation has to go the long way round.
		//
		// Package names are compared without regard to case, so asking to turn sm_Rock into SM_Rock in
		// one step is asking to rename something onto itself: the operation is either refused or, on a
		// case-insensitive filesystem, leaves the asset in a state it does not recover from. Going via
		// a name that differs by more than case makes each hop a real move.
		bool bOk = true;
		if (Record.bCaseOnly)
		{
			const FString TempName = Record.ToName + TEXT("__AzrRenameTmp");

			TArray<FAssetRenameData> Hop;
			Hop.Emplace(Object, Record.PackagePath, TempName);
			bOk = AssetTools.RenameAssets(Hop);
		}

		if (bOk)
		{
			TArray<FAssetRenameData> Final;
			Final.Emplace(Object, Record.PackagePath, Record.ToName);
			bOk = AssetTools.RenameAssets(Final);
		}

		if (bOk)
		{
			OutDone.Add(Record);
		}
		else
		{
			OutBlocked.Add(FString::Printf(TEXT("%s (rename refused)"), *Record.FromName));
		}
	}
}

TArray<FString> SAzr_RenamerWindow::FoldersForFixup(const TArray<FAzr_RenameRecord>& Done) const
{
	TArray<FString> Folders = Source.Folders;

	// The folders of whatever actually moved, so a scan of a few loose assets still gets its
	// redirectors cleaned up without the sweep being allowed to widen to the whole project.
	for (const FAzr_RenameRecord& Record : Done)
	{
		Folders.AddUnique(Record.PackagePath);
	}

	return Folders;
}

void SAzr_RenamerWindow::FixupRedirectors(IAssetTools& AssetTools, const TArray<FString>& Folders)
{
	// An asset-registry filter carrying a class but no path matches everything of that class in the
	// project, so an empty folder list here would quietly turn a three-asset tidy-up into a
	// project-wide reference rewrite. Doing nothing is the only safe reading of "nowhere".
	if (Folders.IsEmpty())
	{
		return;
	}

	// Every rename leaves a redirector where the asset used to be. Left alone they pile up, and a
	// later rename of the same asset starts chaining them.
	FAssetRegistryModule& Registry = FModuleManager::LoadModuleChecked<FAssetRegistryModule>(TEXT("AssetRegistry"));

	FARFilter Filter;
	for (const FString& Folder : Folders)
	{
		Filter.PackagePaths.Add(FName(*Folder));
	}
	Filter.bRecursivePaths = bRecursive;
	Filter.ClassPaths.Add(UObjectRedirector::StaticClass()->GetClassPathName());

	TArray<FAssetData> RedirectorAssets;
	Registry.Get().GetAssets(Filter, RedirectorAssets);

	TArray<UObjectRedirector*> Redirectors;
	for (const FAssetData& Data : RedirectorAssets)
	{
		if (UObjectRedirector* Redirector = Cast<UObjectRedirector>(Data.GetAsset()))
		{
			Redirectors.Add(Redirector);
		}
	}

	if (Redirectors.Num() > 0)
	{
		AssetTools.FixupReferencers(Redirectors, /*bCheckoutDialogPrompt*/ false);
	}
}

void SAzr_RenamerWindow::RefreshContentBrowser()
{
	// The Content Browser keeps its own view of a folder and does not always notice assets renamed from
	// outside it -- the folder had to be left and re-entered before the new names showed up.
	//
	// Re-selecting the path it is already on forces that refresh without moving anyone. Deliberately
	// not SyncBrowserToAssets, which was tried first: that navigates to the renamed assets and *adds*
	// their folder to whatever was already selected, so renaming inside a subfolder left the browser
	// listing two folders at once -- assets appearing to sit outside the folder they are really in --
	// until it was clicked again.
	FContentBrowserModule& ContentBrowserModule = FModuleManager::LoadModuleChecked<FContentBrowserModule>(TEXT("ContentBrowser"));
	IContentBrowserSingleton& ContentBrowser = ContentBrowserModule.Get();

	const FContentBrowserItemPath Current = ContentBrowser.GetCurrentPath();

	// HasInternalPath is not politeness: GetInternalPathString asserts rather than returning empty, and
	// GetCurrentPath hands back a default-constructed path when there is no primary Content Browser.
	const FString PathToShow = Current.HasInternalPath()
		? Current.GetInternalPathString()
		: (Source.Folders.Num() > 0 ? Source.Folders[0] : FString());

	if (!PathToShow.IsEmpty())
	{
		ContentBrowser.SetSelectedPaths({ PathToShow }, /*bNeedsRefresh*/ true);
	}
}

void SAzr_RenamerWindow::PushUndo(FAzr_RenameBatch&& Batch)
{
	UndoStack.Add(MoveTemp(Batch));

	while (UndoStack.Num() > MaxUndoDepth)
	{
		UndoStack.RemoveAt(0);
	}
}

// ============================================================================
//  Apply / Undo
// ============================================================================

FReply SAzr_RenamerWindow::Apply()
{
	TArray<FAzr_RenameRecord> Records;
	for (const TSharedPtr<FAzr_RenamePlan>& Plan : Plans)
	{
		if (!Plan.IsValid() || !Plan->bNeedsRename || !Plan->bSelected) continue;

		UObject* Object = Plan->Asset.GetAsset();
		if (!Object) continue;

		FAzr_RenameRecord& Record = Records.AddDefaulted_GetRef();
		Record.Object      = Object;
		Record.PackagePath = FPackageName::GetLongPackagePath(Plan->Asset.PackageName.ToString());
		Record.FromName    = Plan->OldName;
		Record.ToName      = Plan->NewName;
		Record.bCaseOnly   = Plan->bCaseOnly;
	}

	if (Records.IsEmpty()) return FReply::Handled();

	const FText Question = FText::Format(
		LOCTEXT("Confirm", "Rename {0} asset(s)?\n\nThis rewrites the assets on disk. Ctrl+Z here puts them back, but only while this panel stays open."),
		FText::AsNumber(Records.Num()));

	if (FMessageDialog::Open(EAppMsgType::YesNo, Question) != EAppReturnType::Yes)
	{
		return FReply::Handled();
	}

	TArray<FAzr_RenameRecord> Done;
	TArray<FString> Blocked;
	RunRenames(Records, Done, Blocked);

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));
	if (bFixRedirectors && Done.Num() > 0)
	{
		FixupRedirectors(AssetToolsModule.Get(), FoldersForFixup(Done));
	}

	// Only what actually moved goes on the stack. A row that was blocked must never be put back onto a
	// name it never had.
	if (Done.Num() > 0)
	{
		FAzr_RenameBatch Batch;
		Batch.Records = Done;
		PushUndo(MoveTemp(Batch));
	}

	RefreshContentBrowser();
	Scan();

	StatusLine = Blocked.IsEmpty()
		? FString::Printf(TEXT("Renamed %d asset(s).  Ctrl+Z puts them back."), Done.Num())
		: FString::Printf(TEXT("Renamed %d asset(s); %d left alone: %s"), Done.Num(), Blocked.Num(), *FString::Join(Blocked, TEXT(", ")));

	return FReply::Handled();
}

FReply SAzr_RenamerWindow::Undo()
{
	if (UndoStack.IsEmpty()) return FReply::Handled();

	const FAzr_RenameBatch Batch = UndoStack.Pop();

	// The same renames with the two names the other way round.
	TArray<FAzr_RenameRecord> Reversed;
	Reversed.Reserve(Batch.Records.Num());
	for (const FAzr_RenameRecord& Record : Batch.Records)
	{
		FAzr_RenameRecord& Back = Reversed.Add_GetRef(Record);
		Swap(Back.FromName, Back.ToName);
	}

	TArray<FAzr_RenameRecord> Done;
	TArray<FString> Blocked;
	RunRenames(Reversed, Done, Blocked);

	// Going back leaves redirectors of its own, at the names the forward pass created. Cleared on the
	// same terms, so an undone batch leaves the folder as it was found.
	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));
	if (bFixRedirectors && Done.Num() > 0)
	{
		FixupRedirectors(AssetToolsModule.Get(), FoldersForFixup(Done));
	}

	RefreshContentBrowser();
	Scan();

	StatusLine = Blocked.IsEmpty()
		? FString::Printf(TEXT("Put %d asset(s) back."), Done.Num())
		: FString::Printf(TEXT("Put %d asset(s) back; %d could not be: %s"), Done.Num(), Blocked.Num(), *FString::Join(Blocked, TEXT(", ")));

	return FReply::Handled();
}

FReply SAzr_RenamerWindow::OnKeyDown(const FGeometry& Geometry, const FKeyEvent& KeyEvent)
{
	// Reaching here means no child wanted the key first.
	//
	// The editor's undo is not used, and could not be: asset renames are not transactions, which is why
	// Ctrl+Z has never put one back anywhere else in the editor either. This is the panel's own
	// history, and it goes when the panel does.
	if (KeyEvent.GetKey() == EKeys::Z
		&& KeyEvent.IsControlDown()
		&& !KeyEvent.IsShiftDown()
		&& !KeyEvent.IsAltDown()
		&& !UndoStack.IsEmpty())
	{
		return Undo();
	}

	return SCompoundWidget::OnKeyDown(Geometry, KeyEvent);
}

// ============================================================================
//  List
// ============================================================================

TSharedRef<SWidget> SAzr_RenamerWindow::BuildList()
{
	return SAssignNew(PlanList, SListView<TSharedPtr<FAzr_RenamePlan>>)
		.ListItemsSource(&Plans)
		.SelectionMode(ESelectionMode::Single)
		.HeaderRow
		(
			SNew(SHeaderRow)
			+ SHeaderRow::Column("On").DefaultLabel(FText::GetEmpty()).FixedWidth(28.0f)
			+ SHeaderRow::Column("Old").DefaultLabel(LOCTEXT("ColOld", "Current name")).FillWidth(0.30f)
			+ SHeaderRow::Column("New").DefaultLabel(LOCTEXT("ColNew", "New name")).FillWidth(0.30f)
			+ SHeaderRow::Column("Type").DefaultLabel(LOCTEXT("ColType", "Type")).FillWidth(0.18f)
			+ SHeaderRow::Column("Note").DefaultLabel(LOCTEXT("ColNote", "Why")).FillWidth(0.22f)
		)
		.OnGenerateRow_Lambda([](TSharedPtr<FAzr_RenamePlan> Row, const TSharedRef<STableViewBase>& Owner)
			{
				class SRow : public SMultiColumnTableRow<TSharedPtr<FAzr_RenamePlan>>
				{
				public:
					SLATE_BEGIN_ARGS(SRow) {}
					SLATE_END_ARGS()
					TSharedPtr<FAzr_RenamePlan> Item;

					void Construct(const FArguments&, const TSharedRef<STableViewBase>& InOwner, TSharedPtr<FAzr_RenamePlan> InItem)
					{
						Item = InItem;
						SMultiColumnTableRow::Construct(FSuperRowType::FArguments(), InOwner);
					}

					virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& Column) override
					{
						if (Column == "On")
						{
							if (!Item->bNeedsRename) return SNew(SBox);

							return SNew(SBox).Padding(FMargin(6, 2))
								[
									SNew(SCheckBox)
									.IsChecked_Lambda([Item = Item]() { return Item->bSelected ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
									.OnCheckStateChanged_Lambda([Item = Item](ECheckBoxState S) { Item->bSelected = (S == ECheckBoxState::Checked); })
								];
						}

						FString Text;
						FSlateColor Colour = FSlateColor::UseForeground();

						if (Column == "Old")       { Text = Item->OldName; }
						else if (Column == "New")  { Text = Item->bNeedsRename ? Item->NewName : FString(); }
						else if (Column == "Type") { Text = Item->Asset.AssetClassPath.GetAssetName().ToString(); Colour = FSlateColor(FLinearColor(0.6f, 0.6f, 0.6f)); }
						else                       { Text = Item->Note; Colour = NoteColour(*Item); }

						if (!Item->bNeedsRename && Column != "Note")
						{
							Colour = FSlateColor(FLinearColor(0.5f, 0.5f, 0.5f));
						}

						return SNew(SBox).Padding(FMargin(6, 2))
							[ SNew(STextBlock).Text(FText::FromString(Text)).ColorAndOpacity(Colour) ];
					}
				};

				return SNew(SRow, Owner, Row);
			});
}

#undef LOCTEXT_NAMESPACE
