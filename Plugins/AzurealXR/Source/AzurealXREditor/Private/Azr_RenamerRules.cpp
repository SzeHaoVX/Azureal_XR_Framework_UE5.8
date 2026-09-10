
#include "Azr_RenamerRules.h"

#include "UObject/Class.h"

const TArray<FAzr_PrefixRule>& FAzr_RenamerRules::GetRules()
{
	// Ordered most-derived first, because the lookup walks up from the asset's own class and takes the
	// first match. WidgetBlueprint has to be seen before Blueprint, MaterialInstanceConstant before
	// MaterialInterface, or everything collapses to the base type's prefix.
	//
	// Matched by inheritance rather than by exact class name, which is what makes the project's own
	// data assets work: DA_Chapter1 is a UTrainingCurriculum and Module_1 a UChapterBundle, and
	// neither is literally a UDataAsset -- but both derive from one.
	static const TArray<FAzr_PrefixRule> Rules =
	{
		// --- Blueprints ---
		{ TEXT("WidgetBlueprint"),               TEXT("WBP_") },
		{ TEXT("AnimBlueprint"),                 TEXT("ABP_") },
		{ TEXT("Blueprint"),                     TEXT("BP_")  },

		// --- Geometry ---
		{ TEXT("StaticMesh"),                    TEXT("SM_")   },
		{ TEXT("SkeletalMesh"),                  TEXT("SK_")   },
		{ TEXT("Skeleton"),                      TEXT("SKEL_") },
		{ TEXT("PhysicsAsset"),                  TEXT("PHYS_") },

		// --- Materials ---
		{ TEXT("MaterialParameterCollection"),   TEXT("MPC_") },
		{ TEXT("MaterialInstanceConstant"),      TEXT("MI_")  },
		{ TEXT("MaterialFunction"),              TEXT("MF_")  },
		{ TEXT("Material"),                      TEXT("M_")   },

		// --- Textures ---
		{ TEXT("TextureRenderTarget2D"),         TEXT("RT_") },
		{ TEXT("TextureCube"),                   TEXT("TC_") },
		{ TEXT("Texture"),                       TEXT("T_")  },

		// --- Audio ---
		{ TEXT("SoundCue"),                      TEXT("SC_") },
		{ TEXT("SoundWave"),                     TEXT("SW_") },

		// --- Animation ---
		{ TEXT("AnimMontage"),                   TEXT("AM_") },
		{ TEXT("AnimSequence"),                  TEXT("AS_") },
		{ TEXT("BlendSpace"),                    TEXT("BS_") },

		// --- Input ---
		{ TEXT("InputMappingContext"),           TEXT("IMC_") },
		{ TEXT("InputAction"),                   TEXT("IA_")  },

		// --- Effects ---
		{ TEXT("NiagaraSystem"),                 TEXT("NS_") },
		{ TEXT("NiagaraEmitter"),                TEXT("NE_") },
		{ TEXT("ParticleSystem"),                TEXT("PS_") },

		// --- Data ---
		{ TEXT("DataTable"),                     TEXT("DT_")    },
		{ TEXT("CurveBase"),                     TEXT("Curve_") },
		{ TEXT("DataAsset"),                     TEXT("DA_")    },

		// --- Misc ---
		{ TEXT("LevelSequence"),                 TEXT("LS_")   },
		{ TEXT("HapticFeedbackEffect_Base"),     TEXT("HF_")   },
		{ TEXT("Font"),                          TEXT("Font_") },
	};

	return Rules;
}

const TArray<FString>& FAzr_RenamerRules::GetAllPrefixes()
{
	static TArray<FString> Prefixes;
	if (Prefixes.IsEmpty())
	{
		for (const FAzr_PrefixRule& Rule : GetRules())
		{
			Prefixes.AddUnique(Rule.Prefix);
		}

		// Longest first, so SKEL_ is tested before SK_ and MPC_ before M_. Without this, stripping a
		// wrong prefix would take the short one off the front of the long one and leave a stump.
		Prefixes.Sort([](const FString& A, const FString& B) { return A.Len() > B.Len(); });
	}
	return Prefixes;
}

const TArray<FString>& FAzr_RenamerRules::GetRespectedPrefixes()
{
	static const TArray<FString> Respected =
	{
		// The module's chapter registry. A UChapterBundle derives from UDataAsset, so the type rules
		// would make it DA_Module_1 -- but Module_1 is the name the authoring workflow tells people to
		// give it, and every set of instructions for building a course names it that way.
		TEXT("Module_"),
	};
	return Respected;
}

FString FAzr_RenamerRules::ResolvePrefix(const FAssetData& Asset)
{
	UClass* AssetClass = Asset.GetClass();
	if (!AssetClass) return FString();

	const TArray<FAzr_PrefixRule>& Rules = GetRules();

	// Up the inheritance chain from the asset's own class, so the most specific rule wins.
	for (const UClass* Class = AssetClass; Class; Class = Class->GetSuperClass())
	{
		const FName ClassName = Class->GetFName();
		for (const FAzr_PrefixRule& Rule : Rules)
		{
			if (Rule.ClassName == ClassName)
			{
				return Rule.Prefix;
			}
		}
	}

	return FString();
}

bool FAzr_RenamerRules::BuildPlan(const FAssetData& Asset, FAzr_RenamePlan& OutPlan)
{
	const FString Prefix = ResolvePrefix(Asset);
	if (Prefix.IsEmpty())
	{
		return false;   // nothing in the table covers this type; left entirely alone
	}

	OutPlan.Asset = Asset;
	OutPlan.OldName = Asset.AssetName.ToString();
	OutPlan.NewName = OutPlan.OldName;
	OutPlan.bSelected = false;
	OutPlan.bNeedsRename = false;

	// Already right, case included.
	if (OutPlan.OldName.StartsWith(Prefix, ESearchCase::CaseSensitive))
	{
		OutPlan.Note = TEXT("Already correct");
		return true;
	}

	// Carries a role prefix instead. Checked before the type rules, because the type rules would
	// happily turn GM_C1 into BP_GM_C1 -- the class is only an Actor Blueprint, and nothing about it
	// says the thing is a Game Manager.
	for (const FString& Respected : GetRespectedPrefixes())
	{
		if (OutPlan.OldName.StartsWith(Respected, ESearchCase::CaseSensitive))
		{
			OutPlan.Note = FString::Printf(TEXT("Project convention (%s)"), *Respected);
			return true;
		}
	}

	// The stem, once whatever prefix is currently on the front has been taken off. Matched
	// case-insensitively so a lowercase "sm_" is recognised as the wrong spelling of a right prefix
	// rather than mistaken for part of the name.
	FString Stem = OutPlan.OldName;
	FString FoundPrefix;

	for (const FString& Known : GetAllPrefixes())
	{
		if (Stem.StartsWith(Known, ESearchCase::IgnoreCase))
		{
			FoundPrefix = Stem.Left(Known.Len());
			Stem = Stem.RightChop(Known.Len());
			break;
		}
	}

	OutPlan.NewName = Prefix + Stem;
	OutPlan.bNeedsRename = !OutPlan.NewName.Equals(OutPlan.OldName, ESearchCase::CaseSensitive);

	if (!OutPlan.bNeedsRename)
	{
		OutPlan.Note = TEXT("Already correct");
		return true;
	}

	OutPlan.bCaseOnly = OutPlan.NewName.Equals(OutPlan.OldName, ESearchCase::IgnoreCase);
	OutPlan.bSelected = true;

	if (OutPlan.bCaseOnly)
	{
		OutPlan.Note = FString::Printf(TEXT("Prefix miscased (%s)"), *FoundPrefix);
	}
	else if (!FoundPrefix.IsEmpty())
	{
		OutPlan.Note = FString::Printf(TEXT("Wrong prefix (was %s)"), *FoundPrefix);
	}
	else
	{
		OutPlan.Note = TEXT("No prefix");
	}

	return true;
}
