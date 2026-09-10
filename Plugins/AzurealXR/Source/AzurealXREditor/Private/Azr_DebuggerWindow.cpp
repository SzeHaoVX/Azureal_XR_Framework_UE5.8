
#include "Azr_DebuggerWindow.h"

#include "Components/ActorComponent.h"
#include "EngineUtils.h"
#include "Editor.h"
#include "Framework/Application/SlateApplication.h"
#include "Kismet2/KismetDebugUtilities.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Misc/ConfigCacheIni.h"
#include "Styling/AppStyle.h"
#include "Widgets/Input/SButton.h"
#include "Widgets/Input/SCheckBox.h"
#include "Widgets/Layout/SBorder.h"
#include "Widgets/Layout/SScrollBox.h"
#include "Widgets/Layout/SSeparator.h"
#include "Widgets/Layout/SWidgetSwitcher.h"
#include "Widgets/Text/STextBlock.h"
#include "Widgets/Docking/SDockTab.h"
#include "WorkspaceMenuStructure.h"
#include "WorkspaceMenuStructureModule.h"

#define LOCTEXT_NAMESPACE "AzurealDebugger"

const FName SAzr_DebuggerWindow::TabId(TEXT("AzurealDebugger"));

namespace
{
	const TCHAR* ConfigSection = TEXT("AzurealDebugger");

	FSlateColor StateColour(bool bEnabled)
	{
		// Green reads as "listening", grey as "asleep". The distinction is the single most useful thing
		// on the Components tab, so it is carried by colour rather than only by a word.
		return bEnabled ? FSlateColor(FLinearColor(0.35f, 0.85f, 0.4f))
						: FSlateColor(FLinearColor(0.55f, 0.55f, 0.55f));
	}

	FSlateColor KindColour(EAzr_DebugEntryKind Kind)
	{
		return Kind == EAzr_DebugEntryKind::Event
			? FSlateColor(FLinearColor(0.45f, 0.75f, 1.0f))     // something happened
			: FSlateColor(FLinearColor(0.95f, 0.80f, 0.45f));   // something was asked for
	}
}

// ============================================================================
//  Tab registration
// ============================================================================

void SAzr_DebuggerWindow::RegisterTabSpawner()
{
	FGlobalTabmanager::Get()
		->RegisterNomadTabSpawner(TabId, FOnSpawnTab::CreateLambda([](const FSpawnTabArgs&)
			{
				return SNew(SDockTab)
					.TabRole(ETabRole::NomadTab)
					[
						SNew(SAzr_DebuggerWindow)
					];
			}))
		.SetDisplayName(LOCTEXT("TabTitle", "Azureal Debugger"))
		.SetTooltipText(LOCTEXT("TabTooltip", "What the Azureal framework did, what state it is in, and what is mis-wired."))
		.SetGroup(WorkspaceMenu::GetMenuStructure().GetDeveloperToolsDebugCategory())
		.SetIcon(FSlateIcon(FAppStyle::GetAppStyleSetName(), "Icons.Bug"));
}

void SAzr_DebuggerWindow::UnregisterTabSpawner()
{
	FGlobalTabmanager::Get()->UnregisterNomadTabSpawner(TabId);
}

// ============================================================================
//  Construction
// ============================================================================

void SAzr_DebuggerWindow::Construct(const FArguments& InArgs)
{
	GConfig->GetBool(ConfigSection, TEXT("bResetOnPlay"), bResetOnPlay, GEditorPerProjectIni);
	GConfig->GetBool(ConfigSection, TEXT("bShowDetailLines"), bShowDetailLines, GEditorPerProjectIni);
	GConfig->GetBool(ConfigSection, TEXT("bBlueprintCallsOnly"), bBlueprintCallsOnly, GEditorPerProjectIni);

	EntryHandle = FAzr_DebugLog::Get().OnEntryRecorded.AddRaw(this, &SAzr_DebuggerWindow::HandleEntryRecorded);
	ClearedHandle = FAzr_DebugLog::Get().OnCleared.AddRaw(this, &SAzr_DebuggerWindow::HandleLogCleared);
	BeginPIEHandle = FEditorDelegates::BeginPIE.AddRaw(this, &SAzr_DebuggerWindow::HandleBeginPIE);

	RefreshTrail();

	ChildSlot
	[
		SNew(SVerticalBox)

		+ SVerticalBox::Slot().AutoHeight()
		[
			BuildToolbar()
		]

		+ SVerticalBox::Slot().AutoHeight()
		[
			SNew(SSeparator)
		]

		+ SVerticalBox::Slot().FillHeight(1.0f)
		[
			SNew(SBorder)
			.BorderImage(FAppStyle::GetBrush("ToolPanel.GroupBorder"))
			[
				BuildBody()
			]
		]
	];
}

SAzr_DebuggerWindow::~SAzr_DebuggerWindow()
{
	FAzr_DebugLog::Get().OnEntryRecorded.Remove(EntryHandle);
	FAzr_DebugLog::Get().OnCleared.Remove(ClearedHandle);
	FEditorDelegates::BeginPIE.Remove(BeginPIEHandle);
}

// ============================================================================
//  Toolbar
// ============================================================================

TSharedRef<SWidget> SAzr_DebuggerWindow::BuildToolbar()
{
	auto TabButton = [this](ETab Tab, FText Label)
	{
		return SNew(SCheckBox)
			.Style(FAppStyle::Get(), "ToggleButtonCheckbox")
			.Padding(FMargin(10.0f, 4.0f))
			.IsChecked_Lambda([this, Tab]() { return ActiveTab == Tab ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
			.OnCheckStateChanged_Lambda([this, Tab](ECheckBoxState)
				{
					ActiveTab = Tab;
					if (Tab == ETab::Components) RefreshComponents();
					if (Tab == ETab::Problems)   RefreshProblems();
				})
			[
				SNew(STextBlock).Text(Label)
			];
	};

	return SNew(SHorizontalBox)

		+ SHorizontalBox::Slot().AutoWidth().Padding(4, 4)[ TabButton(ETab::Components, LOCTEXT("TabComponents", "Components")) ]
		+ SHorizontalBox::Slot().AutoWidth().Padding(2, 4)[ TabButton(ETab::Trail,      LOCTEXT("TabTrail",      "Trail")) ]
		+ SHorizontalBox::Slot().AutoWidth().Padding(2, 4)[ TabButton(ETab::Problems,   LOCTEXT("TabProblems",   "Problems")) ]

		+ SHorizontalBox::Slot().AutoWidth().Padding(12, 4)[ SNew(SSeparator).Orientation(Orient_Vertical) ]

		// Recording can be paused without losing what is already there -- useful when a run is about to
		// do something noisy and the interesting part has already happened.
		+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(4, 4)
		[
			SNew(SCheckBox)
			.IsChecked_Lambda([]() { return FAzr_DebugLog::Get().IsCapturing() ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
			.OnCheckStateChanged_Lambda([](ECheckBoxState State) { FAzr_DebugLog::Get().SetCapturing(State == ECheckBoxState::Checked); })
			[
				SNew(STextBlock).Text(LOCTEXT("Capture", "Capture"))
			]
		]

		+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(8, 4)
		[
			SNew(SCheckBox)
			.ToolTipText(LOCTEXT("ResetOnPlayTip", "Empty the trail when Play begins, so each run is read on its own."))
			.IsChecked_Lambda([this]() { return bResetOnPlay ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
			.OnCheckStateChanged_Lambda([this](ECheckBoxState State)
				{
					bResetOnPlay = (State == ECheckBoxState::Checked);
					GConfig->SetBool(ConfigSection, TEXT("bResetOnPlay"), bResetOnPlay, GEditorPerProjectIni);
				})
			[
				SNew(STextBlock).Text(LOCTEXT("ResetOnPlay", "Reset on Play"))
			]
		]

		+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(8, 4)
		[
			SNew(SCheckBox)
			.ToolTipText(LOCTEXT("DetailTip", "Also show the per-frame calls. Off by default because they bury everything else."))
			.IsChecked_Lambda([this]() { return bShowDetailLines ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
			.OnCheckStateChanged_Lambda([this](ECheckBoxState State)
				{
					bShowDetailLines = (State == ECheckBoxState::Checked);
					GConfig->SetBool(ConfigSection, TEXT("bShowDetailLines"), bShowDetailLines, GEditorPerProjectIni);
					RefreshTrail();
				})
			[
				SNew(STextBlock).Text(LOCTEXT("Detail", "Show detail"))
			]
		]

		+ SHorizontalBox::Slot().AutoWidth().VAlign(VAlign_Center).Padding(8, 4)
		[
			SNew(SCheckBox)
			.ToolTipText(LOCTEXT("BpOnlyTip", "Show only what a Blueprint asked for. Note this hides every event: OnGrabbed, OnLatched and the rest are broadcast from C++."))
			.IsChecked_Lambda([this]() { return bBlueprintCallsOnly ? ECheckBoxState::Checked : ECheckBoxState::Unchecked; })
			.OnCheckStateChanged_Lambda([this](ECheckBoxState State)
				{
					bBlueprintCallsOnly = (State == ECheckBoxState::Checked);
					GConfig->SetBool(ConfigSection, TEXT("bBlueprintCallsOnly"), bBlueprintCallsOnly, GEditorPerProjectIni);
					RefreshTrail();
				})
			[
				SNew(STextBlock).Text(LOCTEXT("BpOnly", "Blueprint calls only"))
			]
		]

		+ SHorizontalBox::Slot().FillWidth(1.0f)[ SNullWidget::NullWidget ]

		+ SHorizontalBox::Slot().AutoWidth().Padding(4, 4)
		[
			SNew(SButton)
			.Text(LOCTEXT("Refresh", "Refresh"))
			.OnClicked_Lambda([this]()
				{
					RefreshComponents();
					RefreshTrail();
					RefreshProblems();
					return FReply::Handled();
				})
		]

		+ SHorizontalBox::Slot().AutoWidth().Padding(4, 4)
		[
			SNew(SButton)
			.Text(LOCTEXT("Clear", "Clear"))
			.OnClicked_Lambda([]() { FAzr_DebugLog::Get().Clear(); return FReply::Handled(); })
		];
}

TSharedRef<SWidget> SAzr_DebuggerWindow::BuildBody()
{
	return SNew(SWidgetSwitcher)
		.WidgetIndex_Lambda([this]() { return static_cast<int32>(ActiveTab); })
		+ SWidgetSwitcher::Slot()[ BuildComponentsTab() ]
		+ SWidgetSwitcher::Slot()[ BuildTrailTab() ]
		+ SWidgetSwitcher::Slot()[ BuildProblemsTab() ];
}

// ============================================================================
//  Components
// ============================================================================

UWorld* SAzr_DebuggerWindow::GetInspectedWorld()
{
	if (!GEditor) return nullptr;

	// While playing, the PIE world is the one with live state; otherwise the editor world still shows
	// how everything is wired, which is what the Problems tab needs before Play is ever pressed.
	if (UWorld* PlayWorld = GEditor->PlayWorld)
	{
		return PlayWorld;
	}
	return GEditor->GetEditorWorldContext().World();
}

void SAzr_DebuggerWindow::Tick(const FGeometry& AllottedGeometry, const double InCurrentTime, const float InDeltaTime)
{
	SCompoundWidget::Tick(AllottedGeometry, InCurrentTime, InDeltaTime);

	if (ActiveTab == ETab::Components && InCurrentTime >= NextComponentRefresh)
	{
		NextComponentRefresh = InCurrentTime + ComponentRefreshInterval;
		RefreshComponents();
	}
}

void SAzr_DebuggerWindow::RefreshComponents()
{
	// Reconciled rather than rebuilt. The rows bind their text to the row object, so refreshing state
	// is a matter of updating what is already there -- rebuilding the array every quarter second would
	// throw away the selection and the scroll position while someone was reading.
	TMap<UActorComponent*, TSharedPtr<FAzr_ComponentRow>> Existing;
	for (const TSharedPtr<FAzr_ComponentRow>& Row : ComponentRows)
	{
		if (Row.IsValid() && Row->Component.IsValid())
		{
			Existing.Add(Row->Component.Get(), Row);
		}
	}

	TArray<TSharedPtr<FAzr_ComponentRow>> Rebuilt;
	bool bSetChanged = false;

	if (UWorld* World = GetInspectedWorld())
	{
		for (TActorIterator<AActor> It(World); It; ++It)
		{
			AActor* Actor = *It;
			if (!Actor) continue;

			for (UActorComponent* Component : Actor->GetComponents())
			{
				IAzr_Debuggable* Debuggable = Cast<IAzr_Debuggable>(Component);
				if (!Debuggable) continue;

				TSharedPtr<FAzr_ComponentRow> Row;
				if (TSharedPtr<FAzr_ComponentRow>* Found = Existing.Find(Component))
				{
					Row = *Found;
				}
				else
				{
					Row = MakeShared<FAzr_ComponentRow>();
					Row->Component = Component;
					Row->ActorName = Actor->GetActorNameOrLabel();
					Row->ComponentName = Component->GetName();

					FString ClassName = Component->GetClass()->GetName();
					ClassName.RemoveFromStart(TEXT("Azr_"));
					Row->Category = FName(*ClassName);

					bSetChanged = true;
				}

				Debuggable->GetAzrDebugInfo(Row->Info);
				Rebuilt.Add(Row);
			}
		}
	}

	if (Rebuilt.Num() != ComponentRows.Num())
	{
		bSetChanged = true;
	}

	// Sorted by where it lives, not by whether it is on. A live view that re-ordered itself every time
	// something was enabled would move the row out from under whoever was watching it; the state is
	// carried by colour instead, which needs no movement to be seen.
	Rebuilt.Sort([](const TSharedPtr<FAzr_ComponentRow>& A, const TSharedPtr<FAzr_ComponentRow>& B)
		{
			if (A->ActorName != B->ActorName) return A->ActorName < B->ActorName;
			return A->ComponentName < B->ComponentName;
		});

	ComponentRows = MoveTemp(Rebuilt);

	// Only when rows came or went. The text itself is bound, so state changes need no refresh at all.
	if (bSetChanged && ComponentList.IsValid())
	{
		ComponentList->RequestListRefresh();
	}
}

TSharedRef<SWidget> SAzr_DebuggerWindow::BuildComponentsTab()
{
	return SAssignNew(ComponentList, SListView<TSharedPtr<FAzr_ComponentRow>>)
		.ListItemsSource(&ComponentRows)
		.SelectionMode(ESelectionMode::Single)
		.OnMouseButtonDoubleClick_Lambda([](TSharedPtr<FAzr_ComponentRow> Row)
			{
				if (Row.IsValid() && Row->Component.IsValid())
				{
					if (AActor* Owner = Row->Component->GetOwner())
					{
						GEditor->SelectNone(false, true);
						GEditor->SelectActor(Owner, true, true);
					}
				}
			})
		.HeaderRow
		(
			SNew(SHeaderRow)
			+ SHeaderRow::Column("State").DefaultLabel(LOCTEXT("ColState", "State")).FillWidth(0.20f)
			+ SHeaderRow::Column("Kind").DefaultLabel(LOCTEXT("ColKind", "Component")).FillWidth(0.15f)
			+ SHeaderRow::Column("Actor").DefaultLabel(LOCTEXT("ColActor", "Actor")).FillWidth(0.25f)
			+ SHeaderRow::Column("ID").DefaultLabel(LOCTEXT("ColID", "ID")).FillWidth(0.07f)
			+ SHeaderRow::Column("Detail").DefaultLabel(LOCTEXT("ColDetail", "Detail")).FillWidth(0.33f)
		)
		.OnGenerateRow_Lambda([](TSharedPtr<FAzr_ComponentRow> Row, const TSharedRef<STableViewBase>& Owner)
			{
				class SRow : public SMultiColumnTableRow<TSharedPtr<FAzr_ComponentRow>>
				{
				public:
					SLATE_BEGIN_ARGS(SRow) {}
					SLATE_END_ARGS()
					TSharedPtr<FAzr_ComponentRow> Item;

					void Construct(const FArguments&, const TSharedRef<STableViewBase>& InOwner, TSharedPtr<FAzr_ComponentRow> InItem)
					{
						Item = InItem;
						SMultiColumnTableRow::Construct(FSuperRowType::FArguments(), InOwner);
					}

					virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& Column) override
					{
						// Bound, not baked. The sweep updates Item->Info in place, so these read the new
						// state on the next paint without the row being rebuilt underneath the reader.
						TSharedPtr<FAzr_ComponentRow> Row = Item;

						return SNew(SBox).Padding(FMargin(6, 2))
							[
								SNew(STextBlock)
								.Text_Lambda([Row, Column]()
									{
										if (!Row.IsValid()) return FText::GetEmpty();

										if (Column == "State")      return FText::FromString(Row->Info.State);
										if (Column == "Kind")       return FText::FromString(Row->Category.ToString());
										if (Column == "Actor")      return FText::FromString(Row->ActorName);
										if (Column == "ID")         return FText::FromString(
											Row->Info.InteractID == INDEX_NONE ? TEXT("-") : *FString::FromInt(Row->Info.InteractID));
										return FText::FromString(Row->Info.Detail);
									})
								.ColorAndOpacity_Lambda([Row, Column]()
									{
										if (Row.IsValid() && Column == "State") return StateColour(Row->Info.bEnabled);
										return FSlateColor::UseForeground();
									})
							];
					}
				};

				return SNew(SRow, Owner, Row);
			});
}

// ============================================================================
//  Trail
// ============================================================================

bool SAzr_DebuggerWindow::PassesTrailFilter(const FAzr_DebugEntry& Entry) const
{
	if (!bShowDetailLines && Entry.Importance == EAzr_DebugImportance::Detail) return false;
	if (bBlueprintCallsOnly && !Entry.HasCaller()) return false;
	return true;
}

void SAzr_DebuggerWindow::AppendTrailRow(const FAzr_DebugEntry& Entry)
{
	// The same call from the same place, again, is one fact -- not fifty. Something driven from a
	// per-frame update would otherwise fill the whole window and push everything that mattered off
	// the top, which is exactly what a per-frame EnablePointer did the first time this ran.
	if (TrailRows.Num() > 0 && TrailRows.Last()->IsSameAs(Entry))
	{
		TrailRows.Last()->RepeatCount++;
		TrailRows.Last()->FrameNumber = Entry.FrameNumber;   // the run's latest frame
		TrailRows.Last()->TimeSeconds = Entry.TimeSeconds;
		return;
	}

	TrailRows.Add(MakeShared<FAzr_DebugEntry>(Entry));
}

void SAzr_DebuggerWindow::RefreshTrail()
{
	TrailRows.Reset();

	for (const FAzr_DebugEntry& Entry : FAzr_DebugLog::Get().GetEntries())
	{
		if (!PassesTrailFilter(Entry)) continue;
		AppendTrailRow(Entry);
	}

	if (TrailList.IsValid())
	{
		TrailList->RequestListRefresh();
		if (TrailRows.Num() > 0)
		{
			TrailList->RequestScrollIntoView(TrailRows.Last());
		}
	}
}

void SAzr_DebuggerWindow::HandleEntryRecorded(const FAzr_DebugEntry& Entry)
{
	if (!PassesTrailFilter(Entry)) return;

	const int32 CountBefore = TrailRows.Num();
	AppendTrailRow(Entry);

	if (TrailList.IsValid())
	{
		TrailList->RequestListRefresh();

		// Only chase the bottom when a genuinely new line appeared; a repeat merely ticking up its
		// count should not yank the view away from whatever is being read.
		if (TrailRows.Num() > CountBefore)
		{
			TrailList->RequestScrollIntoView(TrailRows.Last());
		}
	}
}

void SAzr_DebuggerWindow::HandleLogCleared()
{
	TrailRows.Reset();
	if (TrailList.IsValid()) TrailList->RequestListRefresh();
}

void SAzr_DebuggerWindow::HandleBeginPIE(bool bIsSimulating)
{
	if (bResetOnPlay)
	{
		FAzr_DebugLog::Get().Clear();
	}
}

FReply SAzr_DebuggerWindow::JumpToNode(TSharedPtr<FAzr_DebugEntry> Entry)
{
	if (!Entry.IsValid() || !Entry->CanJumpToNode()) return FReply::Handled();

	const UClass* Class = Entry->CallerClass.Get();
	const UFunction* Function = Entry->CallerUFunction.Get();
	if (!Class || !Function) return FReply::Handled();

	// The class default object stands in for whatever instance made the call. The lookup only uses it
	// to reach the Blueprint the function belongs to, and the CDO is still there after Play has ended.
	const UObject* Object = Class->GetDefaultObject();
	if (!Object) return FReply::Handled();

	// Imprecise on purpose. The recorded offset is where the bytecode pointer had already advanced to
	// by the time our native call ran, which is a step past the node's own opcode -- an exact lookup
	// would find nothing, while the nearest hit is the node that made the call.
	if (UEdGraphNode* Node = FKismetDebugUtilities::FindSourceNodeForCodeLocation(
			Object, Function, Entry->CallerCodeOffset, /*bAllowImpreciseHit*/ true))
	{
		FKismetEditorUtilities::BringKismetToFocusAttentionOnObject(Node);
	}

	return FReply::Handled();
}

TSharedRef<SWidget> SAzr_DebuggerWindow::BuildTrailTab()
{
	return SAssignNew(TrailList, SListView<TSharedPtr<FAzr_DebugEntry>>)
		.ListItemsSource(&TrailRows)
		.SelectionMode(ESelectionMode::Single)
		.HeaderRow
		(
			SNew(SHeaderRow)
			+ SHeaderRow::Column("Frame").DefaultLabel(LOCTEXT("ColFrame", "Frame")).FillWidth(0.08f)
			+ SHeaderRow::Column("What").DefaultLabel(LOCTEXT("ColWhat", "What")).FillWidth(0.21f)
			+ SHeaderRow::Column("Count").DefaultLabel(LOCTEXT("ColCount", "Repeat"))
				.DefaultTooltip(LOCTEXT("ColCountTip", "How many times in a row this same call happened. Identical consecutive lines are folded into one so a per-frame call cannot bury the trail."))
				.FillWidth(0.07f)
			+ SHeaderRow::Column("Target").DefaultLabel(LOCTEXT("ColTarget", "On")).FillWidth(0.24f)
			+ SHeaderRow::Column("Caller").DefaultLabel(LOCTEXT("ColCaller", "Called from")).FillWidth(0.32f)
			+ SHeaderRow::Column("Jump").DefaultLabel(LOCTEXT("ColJump", "Node")).FillWidth(0.10f)
		)
		.OnGenerateRow_Lambda([this](TSharedPtr<FAzr_DebugEntry> Row, const TSharedRef<STableViewBase>& Owner)
			{
				// Whether this row starts a new frame, so the number is printed once per burst rather
				// than on every line -- which is what makes "these all happened together" visible.
				const int32 Index = TrailRows.IndexOfByKey(Row);
				const bool bNewFrame = (Index <= 0) || (TrailRows[Index - 1]->FrameNumber != Row->FrameNumber);

				class SRow : public SMultiColumnTableRow<TSharedPtr<FAzr_DebugEntry>>
				{
				public:
					SLATE_BEGIN_ARGS(SRow) {}
					SLATE_END_ARGS()
					TSharedPtr<FAzr_DebugEntry> Item;
					bool bNewFrame = true;

					void Construct(const FArguments&, const TSharedRef<STableViewBase>& InOwner, TSharedPtr<FAzr_DebugEntry> InItem, bool bInNewFrame)
					{
						Item = InItem;
						bNewFrame = bInNewFrame;
						SMultiColumnTableRow::Construct(FSuperRowType::FArguments(), InOwner);
					}

					virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& Column) override
					{
						if (Column == "Jump")
						{
							if (!Item->CanJumpToNode())
							{
								return SNew(SBox);
							}

							return SNew(SBox).Padding(FMargin(4, 1))
								[
									SNew(SButton)
									.Text(LOCTEXT("Open", "Open"))
									.ToolTipText(LOCTEXT("OpenTip", "Open the Blueprint and show the node that made this call."))
									.OnClicked_Lambda([Item = Item]() { return SAzr_DebuggerWindow::JumpToNode(Item); })
								];
						}

						FString Text;
						FSlateColor Colour = FSlateColor::UseForeground();

						if (Column == "Frame")
						{
							// Blank on a continuation line, so a burst reads as one block.
							Text = bNewFrame ? FString::Printf(TEXT("%llu"), Item->FrameNumber) : FString();
							Colour = FSlateColor(FLinearColor(0.6f, 0.6f, 0.6f));
						}
						else if (Column == "What")    { Text = Item->What; Colour = KindColour(Item->Kind); }
						else if (Column == "Count")
						{
							Text = Item->RepeatCount > 1 ? FString::Printf(TEXT("%d times"), Item->RepeatCount) : FString();
							Colour = FSlateColor(FLinearColor(1.0f, 0.6f, 0.35f));
						}
						else if (Column == "Target")  { Text = Item->Target; }
						else
						{
							Text = Item->HasCaller()
								? FString::Printf(TEXT("%s :: %s"), *Item->CallerBlueprint, *Item->CallerFunction)
								: TEXT("C++");

							if (!Item->HasCaller())
							{
								Colour = FSlateColor(FLinearColor(0.5f, 0.5f, 0.5f));
							}
						}

						return SNew(SBox).Padding(FMargin(6, 2))
							[ SNew(STextBlock).Text(FText::FromString(Text)).ColorAndOpacity(Colour) ];
					}
				};

				return SNew(SRow, Owner, Row, bNewFrame);
			});
}

// ============================================================================
//  Problems
// ============================================================================

void SAzr_DebuggerWindow::RefreshProblems()
{
	ProblemRows.Reset();

	UWorld* World = GetInspectedWorld();
	if (!World)
	{
		if (ProblemList.IsValid()) ProblemList->RequestListRefresh();
		return;
	}

	for (TActorIterator<AActor> It(World); It; ++It)
	{
		AActor* Actor = *It;
		if (!Actor) continue;

		for (UActorComponent* Component : Actor->GetComponents())
		{
			IAzr_Debuggable* Debuggable = Cast<IAzr_Debuggable>(Component);
			if (!Debuggable) continue;

			TArray<FString> Problems;
			Debuggable->ValidateAzrSetup(Problems);

			for (const FString& Problem : Problems)
			{
				TSharedPtr<FAzr_ProblemRow> Row = MakeShared<FAzr_ProblemRow>();
				Row->Subject = Component;
				Row->Where = FString::Printf(TEXT("%s.%s"), *Actor->GetActorNameOrLabel(), *Component->GetName());
				Row->Problem = Problem;
				ProblemRows.Add(Row);
			}
		}
	}

	if (ProblemList.IsValid()) ProblemList->RequestListRefresh();
}

TSharedRef<SWidget> SAzr_DebuggerWindow::BuildProblemsTab()
{
	return SNew(SVerticalBox)

		+ SVerticalBox::Slot().AutoHeight().Padding(8, 6)
		[
			SNew(STextBlock)
			.AutoWrapText(true)
			.Text_Lambda([this]()
				{
					return ProblemRows.Num() == 0
						? LOCTEXT("NoProblems", "Nothing mis-wired was found. This checks setup, not behaviour -- press Refresh after changing anything.")
						: FText::Format(LOCTEXT("ProblemCount", "{0} problem(s). Double-click a row to select the actor."), FText::AsNumber(ProblemRows.Num()));
				})
		]

		+ SVerticalBox::Slot().FillHeight(1.0f)
		[
			SAssignNew(ProblemList, SListView<TSharedPtr<FAzr_ProblemRow>>)
			.ListItemsSource(&ProblemRows)
			.SelectionMode(ESelectionMode::Single)
			.OnMouseButtonDoubleClick_Lambda([](TSharedPtr<FAzr_ProblemRow> Row)
				{
					if (Row.IsValid() && Row->Subject.IsValid())
					{
						if (const UActorComponent* Component = Cast<UActorComponent>(Row->Subject.Get()))
						{
							if (AActor* Owner = Component->GetOwner())
							{
								GEditor->SelectNone(false, true);
								GEditor->SelectActor(Owner, true, true);
							}
						}
					}
				})
			.HeaderRow
			(
				SNew(SHeaderRow)
				+ SHeaderRow::Column("Where").DefaultLabel(LOCTEXT("ColWhere", "Where")).FillWidth(0.32f)
				+ SHeaderRow::Column("Problem").DefaultLabel(LOCTEXT("ColProblem", "Problem")).FillWidth(0.68f)
			)
			.OnGenerateRow_Lambda([](TSharedPtr<FAzr_ProblemRow> Row, const TSharedRef<STableViewBase>& Owner)
				{
					class SRow : public SMultiColumnTableRow<TSharedPtr<FAzr_ProblemRow>>
					{
					public:
						SLATE_BEGIN_ARGS(SRow) {}
						SLATE_END_ARGS()
						TSharedPtr<FAzr_ProblemRow> Item;

						void Construct(const FArguments&, const TSharedRef<STableViewBase>& InOwner, TSharedPtr<FAzr_ProblemRow> InItem)
						{
							Item = InItem;
							SMultiColumnTableRow::Construct(FSuperRowType::FArguments(), InOwner);
						}

						virtual TSharedRef<SWidget> GenerateWidgetForColumn(const FName& Column) override
						{
							const FString Text = (Column == "Where") ? Item->Where : Item->Problem;
							const FSlateColor Colour = (Column == "Where")
								? FSlateColor::UseForeground()
								: FSlateColor(FLinearColor(1.0f, 0.72f, 0.4f));

							return SNew(SBox).Padding(FMargin(6, 2))
								[ SNew(STextBlock).Text(FText::FromString(Text)).ColorAndOpacity(Colour).AutoWrapText(true) ];
						}
					};

					return SNew(SRow, Owner, Row);
				})
		];
}

#undef LOCTEXT_NAMESPACE
