// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrFlowBuilder.h"
#include "AzrInteractionFlows.h"

#include "Engine/Blueprint.h"
#include "GameFramework/Actor.h"

#include "EdGraph/EdGraph.h"
#include "EdGraph/EdGraphNode.h"
#include "EdGraph/EdGraphPin.h"
#include "EdGraphSchema_K2.h"
#include "EdGraphNode_Comment.h"

#include "K2Node_CustomEvent.h"
#include "K2Node_VariableGet.h"
#include "K2Node_CallFunction.h"
#include "K2Node_ComponentBoundEvent.h"

#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "BlueprintEditor.h"

#include "SubobjectDataSubsystem.h"
#include "SubobjectDataHandle.h"
#include "SubobjectData.h"

#include "Components/WidgetComponent.h"
#include "Blueprint/UserWidget.h"

#include "ScopedTransaction.h"

namespace
{
	// Node layout (relative to a row's top Y). Event and call share a Y -> horizontal exec wire;
	// the VariableGet sits below, feeding the call's Target pin.
	constexpr int32 EventX = 0;
	constexpr int32 GetX   = 290;
	constexpr int32 CallX  = 450;
	constexpr int32 GetDropY   = 150;
	constexpr int32 EventDisableGap = 280;
	constexpr int32 BoundEventGap   = 170;

	UClass* ResolveClass(const FString& Path)
	{
		UClass* Class = FindObject<UClass>(nullptr, *Path);
		if (!Class)
		{
			Class = LoadObject<UClass>(nullptr, *Path);
		}
		return Class;
	}

	UEdGraphPin* FindExecPin(UEdGraphNode* Node, EEdGraphPinDirection Direction)
	{
		if (!Node) { return nullptr; }
		for (UEdGraphPin* Pin : Node->Pins)
		{
			if (Pin && Pin->Direction == Direction && Pin->PinType.PinCategory == UEdGraphSchema_K2::PC_Exec)
			{
				return Pin;
			}
		}
		return nullptr;
	}

	/** The single output value pin of a VariableGet (the only non-exec output). */
	UEdGraphPin* FindValueOutputPin(UEdGraphNode* Node)
	{
		if (!Node) { return nullptr; }
		for (UEdGraphPin* Pin : Node->Pins)
		{
			if (Pin && Pin->Direction == EGPD_Output && Pin->PinType.PinCategory != UEdGraphSchema_K2::PC_Exec)
			{
				return Pin;
			}
		}
		return nullptr;
	}

	bool TryConnect(UEdGraph* Graph, UEdGraphPin* A, UEdGraphPin* B)
	{
		if (!Graph || !A || !B) { return false; }
		const UEdGraphSchema* Schema = Graph->GetSchema();
		return Schema && Schema->TryCreateConnection(A, B);
	}

	/**
	 * Reflectively walk a dot-separated path on the component template and write WidgetName into the
	 * FName property it ends at — e.g. "Grab.TetherSettings.TargetWidgetName", "WidgetName", or
	 * "LabelPayloads.WidgetName" (an array member resolves to element 0, added if the array is empty).
	 * Reflection avoids #including the (CableComponent-heavy) Azr component headers, and lets one
	 * routine serve components that each name this field differently.
	 * Also switches the tether on wherever the surrounding struct exposes that flag.
	 */
	bool SetWidgetNameAtPath(UObject* CompTemplate, const FString& Path, const FName WidgetName)
	{
		if (!CompTemplate || Path.IsEmpty())
		{
			return false;
		}

		TArray<FString> Parts;
		Path.ParseIntoArray(Parts, TEXT("."));
		if (Parts.Num() == 0)
		{
			return false;
		}

		void* Container = CompTemplate;
		UStruct* Owner = CompTemplate->GetClass();

		for (int32 Index = 0; Index < Parts.Num() - 1; ++Index)
		{
			FProperty* Prop = Owner->FindPropertyByName(FName(*Parts[Index]));
			if (!Prop)
			{
				return false;
			}

			if (FArrayProperty* ArrayProp = CastField<FArrayProperty>(Prop))
			{
				FStructProperty* ElementProp = CastField<FStructProperty>(ArrayProp->Inner);
				if (!ElementProp)
				{
					return false;
				}
				FScriptArrayHelper Helper(ArrayProp, ArrayProp->ContainerPtrToValuePtr<void>(Container));
				if (Helper.Num() == 0)
				{
					Helper.AddValue(); // give the payload list a first entry to configure
				}
				Container = Helper.GetRawPtr(0);
				Owner = ElementProp->Struct;
			}
			else if (FStructProperty* StructProp = CastField<FStructProperty>(Prop))
			{
				Container = StructProp->ContainerPtrToValuePtr<void>(Container);
				Owner = StructProp->Struct;
			}
			else
			{
				return false;
			}
		}

		FNameProperty* NameProp = CastField<FNameProperty>(Owner->FindPropertyByName(FName(*Parts.Last())));
		if (!NameProp)
		{
			return false;
		}
		NameProp->SetPropertyValue_InContainer(Container, WidgetName);

		// Enable the tether: either the flag sits beside the name (FAzr_TetherConfig), or the
		// surrounding struct owns a whole TetherSettings block (Explain step, Action, Label).
		if (FBoolProperty* Flag = CastField<FBoolProperty>(Owner->FindPropertyByName(TEXT("bEnableTether"))))
		{
			Flag->SetPropertyValue_InContainer(Container, true);
		}
		else if (FStructProperty* Tether = CastField<FStructProperty>(Owner->FindPropertyByName(TEXT("TetherSettings"))))
		{
			if (FBoolProperty* Flag2 = CastField<FBoolProperty>(Tether->Struct->FindPropertyByName(TEXT("bEnableTether"))))
			{
				Flag2->SetPropertyValue_InContainer(Tether->ContainerPtrToValuePtr<void>(Container), true);
			}
		}
		return true;
	}
}

FAzrFlowBuilder::FResult FAzrFlowBuilder::BuildFlow(UBlueprint* Blueprint, const FAzrFlowDef& Def)
{
	FResult Result;

	const FString DisplayName = Def.Label.IsEmpty()
		? Def.Group
		: FString::Printf(TEXT("%s %s"), *Def.Group, *Def.Label);

	if (!Blueprint)
	{
		Result.Message = TEXT("No Blueprint is open.");
		return Result;
	}
	if (!Blueprint->ParentClass || !Blueprint->ParentClass->IsChildOf(AActor::StaticClass()))
	{
		Result.Message = FString::Printf(TEXT("%s needs an Actor Blueprint."), *DisplayName);
		return Result;
	}

	UClass* CompClass = ResolveClass(Def.ClassPath);
	if (!CompClass)
	{
		Result.Message = FString::Printf(TEXT("%s class not found (%s)."), *DisplayName, *Def.ClassPath);
		return Result;
	}

	const FScopedTransaction Transaction(FText::FromString(FString::Printf(TEXT("Add %s Flow"), *DisplayName)));
	Blueprint->Modify();

	auto SkeletonClass = [Blueprint]() -> UClass*
	{
		return Blueprint->SkeletonGeneratedClass ? Blueprint->SkeletonGeneratedClass : Blueprint->GeneratedClass;
	};
	auto PropertyExists = [&SkeletonClass](const FName Name) -> bool
	{
		UClass* Class = SkeletonClass();
		return Class && Class->FindPropertyByName(Name) != nullptr;
	};

	const bool bWantWidget = !Def.WidgetComponentName.IsEmpty() && !Def.WidgetClassPath.IsEmpty();

	// Desired unique widget name (Latch_Tag, Latch_Tag1, …), computed vs the current skeleton.
	FName DesiredWidgetName = NAME_None;
	if (bWantWidget)
	{
		DesiredWidgetName = FName(*Def.WidgetComponentName);
		if (PropertyExists(DesiredWidgetName))
		{
			for (int32 N = 1; N < 1000; ++N)
			{
				const FName Candidate(*FString::Printf(TEXT("%s%d"), *Def.WidgetComponentName, N));
				if (!PropertyExists(Candidate))
				{
					DesiredWidgetName = Candidate;
					break;
				}
			}
		}
	}

	USubobjectDataSubsystem* Subsystem = USubobjectDataSubsystem::Get();
	if (!Subsystem)
	{
		Result.Message = TEXT("SubobjectDataSubsystem unavailable.");
		return Result;
	}

	TArray<FSubobjectDataHandle> Handles;
	Subsystem->K2_GatherSubobjectDataForBlueprint(Blueprint, Handles);
	if (Handles.Num() == 0)
	{
		Result.Message = TEXT("Could not gather Blueprint subobjects.");
		return Result;
	}
	const FSubobjectDataHandle RootHandle = Handles[0];

	// Scene components (the widget) go under the actor's scene root, not the actor handle — a widget
	// parented to the bare actor context does not show up in the Blueprint viewport.
	FSubobjectDataHandle SceneRootHandle = RootHandle;
	for (const FSubobjectDataHandle& Handle : Handles)
	{
		const FSubobjectData* Data = Handle.GetData();
		if (!Data) continue;

		if (const UObject* Obj = Data->GetObject())
		{
			if (Obj->GetFName() == TEXT("SceneRoot"))
			{
				SceneRootHandle = Handle; // AAzr_Interactable's root
				break;
			}
			if (SceneRootHandle == RootHandle && Obj->IsA<USceneComponent>())
			{
				SceneRootHandle = Handle; // fall back to the first scene component
			}
		}
	}

	// ---- Add the interaction component (engine auto-uniquifies the name: Azr_Grab, Azr_Grab1, …) ----
	FSubobjectDataHandle InteractionHandle;
	{
		FAddNewSubobjectParams Params;
		Params.ParentHandle = RootHandle;
		Params.NewClass = CompClass;
		Params.BlueprintContext = Blueprint;

		FText FailReason;
		InteractionHandle = Subsystem->AddNewSubobject(Params, FailReason);
		if (!InteractionHandle.IsValid())
		{
			Result.Message = FString::Printf(TEXT("Failed to add %s component: %s"), *Def.ComponentVarName.ToString(), *FailReason.ToString());
			return Result;
		}
	}

	// ---- Add the widget component (non-fatal if it fails) ----
	FSubobjectDataHandle WidgetHandle;
	if (bWantWidget)
	{
		FAddNewSubobjectParams Params;
		Params.ParentHandle = SceneRootHandle;
		Params.NewClass = UWidgetComponent::StaticClass();
		Params.BlueprintContext = Blueprint;

		FText FailReason;
		WidgetHandle = Subsystem->AddNewSubobject(Params, FailReason);

		// Configure the widget template BEFORE the compile below. In an editor world the widget is
		// only ever created by OnRegister -> InitWidget, and InitWidget early-outs when WidgetClass
		// is still null. Set it afterwards and the preview instance has already registered empty,
		// so the viewport stays blank until something forces a re-register (which is why deleting
		// the component and undoing "fixes" it). Configuring first means the preview is built from
		// a template that already knows its class.
		if (const FSubobjectData* Data = WidgetHandle.GetData())
		{
			if (UWidgetComponent* WidgetComp = const_cast<UWidgetComponent*>(Data->GetObjectForBlueprint<UWidgetComponent>(Blueprint)))
			{
				WidgetComp->SetFlags(RF_Transactional);
				WidgetComp->Modify();

				// Written reflectively: SetWidgetClass() only rebuilds the live widget once the
				// component has begun play, so on a template it would just assign the field.
				if (UClass* WidgetClass = LoadClass<UUserWidget>(nullptr, *Def.WidgetClassPath))
				{
					if (FObjectPropertyBase* ClassProp = CastField<FObjectPropertyBase>(WidgetComp->GetClass()->FindPropertyByName(TEXT("WidgetClass"))))
					{
						ClassProp->SetObjectPropertyValue(ClassProp->ContainerPtrToValuePtr<void>(WidgetComp), WidgetClass);
					}
				}
				if (FBoolProperty* DrawProp = CastField<FBoolProperty>(WidgetComp->GetClass()->FindPropertyByName(TEXT("bDrawAtDesiredSize"))))
				{
					DrawProp->SetPropertyValue_InContainer(WidgetComp, true);
				}

				WidgetComp->SetWidgetSpace(EWidgetSpace::World);
				WidgetComp->SetRelativeScale3D(FVector(Def.WidgetScale));
			}
		}
	}

	Result.bComponentAdded = true;

	// Compile so the new members exist on the skeleton (needed for the rename + graph refs).
	FKismetEditorUtilities::CompileBlueprint(Blueprint);

	// Interaction component's actual variable name (auto-uniquified).
	FName VarName = Def.ComponentVarName;
	if (const FSubobjectData* Data = InteractionHandle.GetData())
	{
		const FName Actual = Data->GetVariableName();
		if (!Actual.IsNone())
		{
			VarName = Actual;
		}
	}

	// ---- Configure the Tag widget + point the interaction tether at it ----
	FName WidgetVarName = NAME_None;
	if (bWantWidget && WidgetHandle.IsValid())
	{
		// Rename must happen AFTER the compile above, or it doesn't stick.
		USubobjectDataSubsystem::RenameSubobjectMemberVariable(Blueprint, WidgetHandle, DesiredWidgetName);
		if (const FSubobjectData* Data = WidgetHandle.GetData())
		{
			const FName Actual = Data->GetVariableName();
			if (!Actual.IsNone())
			{
				WidgetVarName = Actual;
			}
		}

		// Interaction template: point every widget-name field this component uses at the new widget.
		if (!WidgetVarName.IsNone())
		{
			if (const FSubobjectData* Data = InteractionHandle.GetData())
			{
				if (UActorComponent* Comp = const_cast<UActorComponent*>(Data->GetObjectForBlueprint<UActorComponent>(Blueprint)))
				{
					Comp->SetFlags(RF_Transactional);
					Comp->Modify();
					for (const FString& NamePath : Def.WidgetNamePaths)
					{
						SetWidgetNameAtPath(Comp, NamePath, WidgetVarName);
					}
				}
			}
		}
	}

	FObjectProperty* CompProp = SkeletonClass() ? CastField<FObjectProperty>(SkeletonClass()->FindPropertyByName(VarName)) : nullptr;
	if (!CompProp)
	{
		Result.Message = FString::Printf(TEXT("%s property missing after component add."), *VarName.ToString());
		return Result;
	}

	// ---- Label suffix + comment number derived from the ACTUAL name ("Azr_Grab1" -> "1", 1) ----
	FString LabelSuffix;
	int32 SuffixNumber = 0;
	{
		const FString VarStr = VarName.ToString();
		const FString BaseStr = Def.ComponentVarName.ToString();
		if (!VarStr.Equals(BaseStr) && VarStr.StartsWith(BaseStr))
		{
			LabelSuffix = VarStr.RightChop(BaseStr.Len());
			SuffixNumber = FCString::Atoi(*LabelSuffix.Replace(TEXT("_"), TEXT("")));
		}
	}

	// ---- Graph work (skipped for component-only flows like Attach Target) ----
	const bool bHasGraphWork =
		(Def.EnableFunction != NAME_None) || (Def.DisableFunction != NAME_None) || (Def.EventDelegates.Num() > 0);

	if (bHasGraphWork)
	{
		UEdGraph* EventGraph = Blueprint->UbergraphPages.Num() > 0 ? Blueprint->UbergraphPages[0] : nullptr;
		if (!EventGraph)
		{
			Result.Message = TEXT("No event graph on this Blueprint.");
			return Result;
		}
		EventGraph->Modify();

		int32 StartY = 0;
		for (UEdGraphNode* Node : EventGraph->Nodes)
		{
			if (!Node) { continue; }
			const int32 Bottom = Cast<UEdGraphNode_Comment>(Node)
				? (Node->NodePosY + FMath::Max(Node->NodeHeight, 120) + 60)
				: (Node->NodePosY + 200);
			StartY = FMath::Max(StartY, Bottom);
		}

		const int32 FlowTop = StartY;
		int32 Y = StartY;

		auto BuildEventCall = [&](const FString& EventLabel, const FName FunctionName, int32 RowY)
		{
			UFunction* Function = CompClass->FindFunctionByName(FunctionName);
			if (!Function) { return; }

			FGraphNodeCreator<UK2Node_CustomEvent> EventCreator(*EventGraph);
			UK2Node_CustomEvent* EventNode = EventCreator.CreateNode();
			EventNode->CustomFunctionName = FName(*EventLabel);
			EventNode->NodePosX = EventX;
			EventNode->NodePosY = RowY;
			EventCreator.Finalize();

			FGraphNodeCreator<UK2Node_VariableGet> GetCreator(*EventGraph);
			UK2Node_VariableGet* GetNode = GetCreator.CreateNode();
			GetNode->VariableReference.SetSelfMember(VarName);
			GetNode->NodePosX = GetX;
			GetNode->NodePosY = RowY + GetDropY;
			GetCreator.Finalize();

			FGraphNodeCreator<UK2Node_CallFunction> CallCreator(*EventGraph);
			UK2Node_CallFunction* CallNode = CallCreator.CreateNode();
			CallNode->SetFromFunction(Function);
			CallNode->NodePosX = CallX;
			CallNode->NodePosY = RowY;
			CallCreator.Finalize();

			TryConnect(EventGraph, FindExecPin(EventNode, EGPD_Output), FindExecPin(CallNode, EGPD_Input));
			TryConnect(EventGraph, FindValueOutputPin(GetNode), CallNode->FindPin(UEdGraphSchema_K2::PN_Self, EGPD_Input));

			Result.NodesAdded += 3;
		};

		auto BuildBoundEvent = [&](const FName DelegateName, int32 RowY)
		{
			FMulticastDelegateProperty* DelegateProp = CastField<FMulticastDelegateProperty>(CompClass->FindPropertyByName(DelegateName));
			if (!DelegateProp) { return; }

			FGraphNodeCreator<UK2Node_ComponentBoundEvent> BoundCreator(*EventGraph);
			UK2Node_ComponentBoundEvent* BoundNode = BoundCreator.CreateNode();
			BoundNode->InitializeComponentBoundEventParams(CompProp, DelegateProp);
			BoundNode->NodePosX = EventX;
			BoundNode->NodePosY = RowY;
			BoundCreator.Finalize();

			Result.NodesAdded += 1;
		};

		if (Def.EnableFunction != NAME_None)
		{
			BuildEventCall(Def.EnableEventLabel + LabelSuffix, Def.EnableFunction, Y);
			Y += EventDisableGap;
		}
		if (Def.DisableFunction != NAME_None)
		{
			BuildEventCall(Def.DisableEventLabel + LabelSuffix, Def.DisableFunction, Y);
			Y += EventDisableGap;
		}
		for (const FName& Delegate : Def.EventDelegates)
		{
			BuildBoundEvent(Delegate, Y);
			Y += BoundEventGap;
		}

		// ---- Wrap the flow in a titled comment box (title = "Grab Attach", "Latch", …) ----
		if (Result.NodesAdded > 0)
		{
			const FString CommentTitle = (SuffixNumber > 0)
				? FString::Printf(TEXT("%s %d"), *DisplayName, SuffixNumber)
				: DisplayName;

			FGraphNodeCreator<UEdGraphNode_Comment> CommentCreator(*EventGraph);
			UEdGraphNode_Comment* Comment = CommentCreator.CreateNode();
			Comment->NodePosX = EventX - 60;
			Comment->NodePosY = FlowTop - 70;
			Comment->NodeWidth = (CallX + 260) - (EventX - 60);
			Comment->NodeHeight = (Y + 20) - (FlowTop - 70);
			CommentCreator.Finalize();

			// Set AFTER Finalize: PostPlacedNewNode() resets both of these to the engine defaults.
			Comment->NodeComment = CommentTitle;
			Comment->CommentColor = FLinearColor::White; // FFFFFFFF
		}
	}

	FBlueprintEditorUtils::MarkBlueprintAsStructurallyModified(Blueprint);
	FKismetEditorUtilities::CompileBlueprint(Blueprint);
	Blueprint->MarkPackageDirty();

	// Respawn the open editor's preview actor. Compiling rebuilds the class but leaves the viewport
	// holding the components it already spawned — and a UWidgetComponent only ever builds its widget
	// in OnRegister, so one that first registered without a widget class stays blank forever. This
	// is what deleting the component and undoing was doing by hand.
	if (TSharedPtr<IBlueprintEditor> Editor = FKismetEditorUtilities::GetIBlueprintEditorForObject(Blueprint, /*bOpenEditor=*/false))
	{
		StaticCastSharedPtr<FBlueprintEditor>(Editor)->UpdatePreviewActor(Blueprint, /*bInForceFullUpdate=*/true);
	}

	Result.bSuccess = true;
	FString Parts = VarName.ToString();
	if (bWantWidget && !WidgetVarName.IsNone())
	{
		Parts += FString::Printf(TEXT(" + %s"), *WidgetVarName.ToString());
	}
	if (Result.NodesAdded > 0)
	{
		Result.Message = FString::Printf(TEXT("%s: added %s + %d node(s)."), *DisplayName, *Parts, Result.NodesAdded);
	}
	else
	{
		Result.Message = FString::Printf(TEXT("%s: added %s."), *DisplayName, *Parts);
	}
	return Result;
}
