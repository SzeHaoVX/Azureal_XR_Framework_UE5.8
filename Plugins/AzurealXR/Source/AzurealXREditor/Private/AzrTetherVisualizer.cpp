// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrTetherVisualizer.h"

#include "Azr_Types.h"
#include "Azr_Grab.h"
#include "Azr_Latch.h"
#include "Azr_Touch.h"
#include "Azr_AttachTarget.h"
#include "Azr_Explain.h"
#include "Azr_Action.h"

#include "CanvasTypes.h"
#include "Engine/Engine.h"
#include "Engine/Font.h"
#include "PrimitiveDrawingUtils.h"
#include "SceneManagement.h"
#include "SceneView.h"

namespace
{
	constexpr int32 CableSegments = 20;   // what the runtime cable uses whenever it has any hang
	constexpr float AnchorRadius = 1.5f;

	const FLinearColor CableColor(0.15f, 0.85f, 1.0f);
	const FLinearColor AnchorColor(1.0f, 1.0f, 1.0f);
	const FLinearColor ProblemColor(1.0f, 0.2f, 0.2f);

	/**
	 * The cable from Start to End with its hang.
	 *
	 * What the learner sees is the tick's length, not ToggleTether's: ToggleTether sets
	 * distance * (1 + CableHang %), but every tethered component's TickComponent overwrites that from
	 * the next frame on -- before the 0.2 s settle reveal -- with distance + CableHang read as
	 * centimetres, under full gravity, or the bare distance when CableHang is 0.1 or less. This draws the
	 * parabola with that arc length (extra length e gives sag = sqrt(3 * d * e / 8), the small-sag
	 * approximation), hanging straight down. Close to where the simulated cable comes to rest, which is
	 * what matters for placing the anchors.
	 */
	void DrawCable(FPrimitiveDrawInterface* PDI, const FVector& Start, const FVector& End, float CableHang)
	{
		const float Dist = FVector::Dist(Start, End);
		const float Sag = (CableHang <= 0.1f || Dist <= KINDA_SMALL_NUMBER) ? 0.0f : FMath::Sqrt(3.0f * Dist * CableHang / 8.0f);

		FVector Prev = Start;
		for (int32 i = 1; i <= CableSegments; i++)
		{
			const float T = static_cast<float>(i) / CableSegments;
			const FVector Point = FMath::Lerp(Start, End, T) - FVector::UpVector * (4.0f * Sag * T * (1.0f - T));
			PDI->DrawLine(Prev, Point, CableColor, SDPG_Foreground, 2.0f, 0.0f, true);
			Prev = Point;
		}
	}

	/**
	 * Text beside a world point. A label that would overlap one already drawn -- several tethers
	 * ending at one widget anchor -- moves down a line at a time until it is clear; Placed holds the
	 * screen boxes of the labels drawn so far.
	 */
	void DrawLabel(FCanvas* Canvas, const FSceneView* View, const FVector& WorldPos, const FString& Text, const FLinearColor& Color, TArray<FBox2D>& Placed)
	{
		// Not WorldToPixel alone: for a point behind the camera it mirrors the point onto the screen
		// rather than failing (it is written for gizmo handles), which pinned labels to the view.
		const FVector4 Screen = View->WorldToScreen(WorldPos);
		FVector2D Pixel;
		if (Text.IsEmpty() || Screen.W <= 0.0f || !View->ScreenToPixel(Screen, Pixel)) return;

		// WorldToPixel is in render pixels; the canvas draws in DPI-scaled units.
		const float DPIScale = FMath::Max(Canvas->GetDPIScale(), KINDA_SMALL_NUMBER);
		FVector2D At(Pixel.X / DPIScale + 6.0f, Pixel.Y / DPIScale - 6.0f);

		const UFont* Font = GEngine->GetSmallFont();
		constexpr float LineHeight = 14.0f;
		const FVector2D Size(Font->GetStringSize(*Text), LineHeight);

		// Strict comparisons, so a label exactly one line below another does not count as touching it.
		auto Overlaps = [&At, &Size](const FBox2D& Other)
		{
			return At.X < Other.Max.X && Other.Min.X < At.X + Size.X
				&& At.Y < Other.Max.Y && Other.Min.Y < At.Y + Size.Y;
		};
		while (Placed.ContainsByPredicate(Overlaps))
		{
			At.Y += LineHeight;
		}
		Placed.Add(FBox2D(At, At + Size));

		Canvas->DrawShadowedString(At.X, At.Y, *Text, Font, Color);
	}

	/** One tethered component class, and how to read the previews of a component of that class. */
	struct FTetheredClass
	{
		UClass* Class;
		void (*GetPreviews)(UActorComponent* Component, TArray<FAzr_TetherPreview>& Out);
	};

	template <typename ComponentType>
	void GetPreviewsOf(UActorComponent* Component, TArray<FAzr_TetherPreview>& Out)
	{
		CastChecked<ComponentType>(Component)->GetTetherPreviews(Out);
	}

	/**
	 * Every component class with a guidance tether. Registration and drawing both read this one
	 * list, so a new tethered component is added here and nowhere else.
	 */
	TArray<FTetheredClass> GetTetheredClasses()
	{
		return {
			{ UAzr_Grab::StaticClass(),         &GetPreviewsOf<UAzr_Grab> },
			{ UAzr_Latch::StaticClass(),        &GetPreviewsOf<UAzr_Latch> },
			{ UAzr_Touch::StaticClass(),        &GetPreviewsOf<UAzr_Touch> },
			{ UAzr_AttachTarget::StaticClass(), &GetPreviewsOf<UAzr_AttachTarget> },
			{ UAzr_Explain::StaticClass(),      &GetPreviewsOf<UAzr_Explain> },
			{ UAzr_Action::StaticClass(),       &GetPreviewsOf<UAzr_Action> },
		};
	}
}

TArray<UClass*> FAzrTetherVisualizer::GetVisualizedClasses()
{
	TArray<UClass*> Classes;
	for (const FTetheredClass& Tethered : GetTetheredClasses())
	{
		Classes.Add(Tethered.Class);
	}
	return Classes;
}

TArray<FAzr_TetherPreview> FAzrTetherVisualizer::GatherPreviews(const UActorComponent* Component)
{
	TArray<FAzr_TetherPreview> Raw;

	// The lookups are not const on the components, but nothing they call changes state.
	UActorComponent* Mutable = const_cast<UActorComponent*>(Component);
	for (const FTetheredClass& Tethered : GetTetheredClasses())
	{
		if (Mutable->IsA(Tethered.Class))
		{
			Tethered.GetPreviews(Mutable, Raw);
			break;
		}
	}

	// Explain steps often share one mesh and one widget, which would stack identical lines and labels
	// on top of each other. One line, every name on it.
	TArray<FAzr_TetherPreview> Merged;
	for (const FAzr_TetherPreview& Preview : Raw)
	{
		FAzr_TetherPreview* Same = Merged.FindByPredicate([&Preview](const FAzr_TetherPreview& Other)
		{
			return Other.Problem == Preview.Problem
				&& Other.Start.Equals(Preview.Start, 0.5f)
				&& Other.End.Equals(Preview.End, 0.5f)
				&& FMath::IsNearlyEqual(Other.CableHang, Preview.CableHang);
		});

		if (Same) Same->Label += TEXT(" / ") + Preview.Label;
		else Merged.Add(Preview);
	}
	return Merged;
}

void FAzrTetherVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	if (!Component || !PDI) return;

	for (const FAzr_TetherPreview& Preview : GatherPreviews(Component))
	{
		if (!Preview.Problem.IsEmpty())
		{
			// A cross at Start, so an unresolved tether is visible rather than just absent.
			const float S = 6.0f;
			PDI->DrawLine(Preview.Start + FVector(-S, -S, 0), Preview.Start + FVector(S, S, 0), ProblemColor, SDPG_Foreground, 2.5f, 0.0f, true);
			PDI->DrawLine(Preview.Start + FVector(-S, S, 0), Preview.Start + FVector(S, -S, 0), ProblemColor, SDPG_Foreground, 2.5f, 0.0f, true);
			continue;
		}

		DrawCable(PDI, Preview.Start, Preview.End, Preview.CableHang);
		DrawWireSphere(PDI, Preview.Start, AnchorColor, AnchorRadius, 12, SDPG_Foreground);
		DrawWireSphere(PDI, Preview.End, AnchorColor, AnchorRadius, 12, SDPG_Foreground);
	}
}

void FAzrTetherVisualizer::DrawVisualizationHUD(const UActorComponent* Component, const FViewport* Viewport, const FSceneView* View, FCanvas* Canvas)
{
	if (!Component || !View || !Canvas) return;

	// The engine calls this once per component, but in the level every tethered component of a
	// selected actor is drawn, and several of them can end at the same widget. So the labels are
	// laid out across all components drawn into this viewport this frame. Meeting a component again
	// means the viewport is being drawn again, which starts the layout afresh.
	if (Viewport != LabelViewport || GFrameCounter != LabelFrame || LabelledComponents.Contains(Component))
	{
		LabelViewport = Viewport;
		LabelFrame = GFrameCounter;
		LabelledComponents.Reset();
		PlacedLabels.Reset();
	}
	LabelledComponents.Add(Component);

	// The component's own name, as the Components panel shows it, so a renamed component reads as
	// its new name and two of the same type can be told apart. Which of its tethers a line is gets
	// added only when the component draws more than one.
	const FString Name = Component->GetName();
	const TArray<FAzr_TetherPreview> Previews = GatherPreviews(Component);

	for (const FAzr_TetherPreview& Preview : Previews)
	{
		const FString Title = (Previews.Num() > 1 && !Preview.Label.IsEmpty())
			? FString::Printf(TEXT("%s (%s)"), *Name, *Preview.Label)
			: Name;

		if (!Preview.Problem.IsEmpty())
		{
			DrawLabel(Canvas, View, Preview.Start, FString::Printf(TEXT("%s: %s"), *Title, *Preview.Problem), ProblemColor, PlacedLabels);
			continue;
		}

		DrawLabel(Canvas, View, Preview.End, Title, CableColor, PlacedLabels);
	}
}
