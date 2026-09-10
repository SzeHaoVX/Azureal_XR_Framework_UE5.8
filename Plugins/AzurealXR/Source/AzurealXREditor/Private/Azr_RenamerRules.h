
#pragma once

#include "CoreMinimal.h"
#include "AssetRegistry/AssetData.h"

/**
 * What an asset ought to be called, and whether it already is.
 *
 * Kept apart from the panel on purpose: deciding a name is the part worth getting right, and it is
 * far easier to reason about -- and to correct -- when it is not tangled up in Slate.
 */

/** One convention: assets of this class, or anything derived from it, carry this prefix. */
struct FAzr_PrefixRule
{
	/** Class name as the reflection system spells it -- "StaticMesh", "WidgetBlueprint". */
	FName ClassName;

	FString Prefix;
};

/** What the renamer proposes to do with one asset. */
struct FAzr_RenamePlan
{
	FAssetData Asset;

	FString OldName;
	FString NewName;

	/** Plain English: why this is being changed, or why it is being left alone. */
	FString Note;

	/** False when the name is already right -- these are shown greyed rather than hidden, so a scan reads as complete. */
	bool bNeedsRename = false;

	/**
	 * True when the only difference is capitalisation.
	 *
	 * Unreal does not treat this as a rename at all: asking it to turn sm_Rock into SM_Rock in one
	 * step can lose the asset, because the source and destination package names collide on a
	 * case-insensitive filesystem. These are done in two hops through a temporary name instead.
	 */
	bool bCaseOnly = false;

	/** Ticked in the panel; only ticked rows are applied. */
	bool bSelected = true;
};

class FAzr_RenamerRules
{
public:
	/** The project's conventions. Ordered most-derived first, since the lookup walks up from the asset's class. */
	static const TArray<FAzr_PrefixRule>& GetRules();

	/** Every prefix the rules know about, used to spot a wrong one rather than merely a missing one. */
	static const TArray<FString>& GetAllPrefixes();

	/**
	 * Names that are deliberate and must be left exactly as they are.
	 *
	 * These mark a role rather than a type, so no amount of looking at the class can arrive at them --
	 * and the type rules, left alone, would confidently rename them into something else. A name
	 * starting with one of these is correct by definition.
	 *
	 * Note that GM_ is deliberately NOT here: a Game Manager is an ordinary Actor Blueprint, and the
	 * project has settled on it taking the type prefix too, so GM_C1 becomes BP_GM_C1.
	 */
	static const TArray<FString>& GetRespectedPrefixes();

	/** The prefix this asset should carry, or empty when nothing in the table covers its type. */
	static FString ResolvePrefix(const FAssetData& Asset);

	/**
	 * Works out what should happen to one asset.
	 *
	 * Returns false only when the type is not covered by any rule -- an asset that is already correct
	 * still returns true, with bNeedsRename false and a note saying so.
	 */
	static bool BuildPlan(const FAssetData& Asset, FAzr_RenamePlan& OutPlan);
};
