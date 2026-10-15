// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ComponentVisualizer.h"

struct FAzr_TetherPreview;

/**
 * Draws each tethered component's guidance tether in the editor viewport: in the Blueprint editor
 * while the component is selected, in the level while its actor is.
 *
 * The real cable only exists in play -- its anchors are attached and placed when the interaction is
 * enabled -- so this is where its anchor sides, gaps and offsets can be tuned without playing. Every
 * point comes from the component's own GetTetherPreviews(), i.e. the same mesh/widget lookup and
 * CalculateSurfaceAnchor that play uses. The sag is approximate (see DrawCable). The widget end is
 * measured on the widget as authored, while play turns the widget to face the camera every frame
 * and re-measures it there.
 */
class FAzrTetherVisualizer : public FComponentVisualizer
{
public:
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
	virtual void DrawVisualizationHUD(const UActorComponent* Component, const FViewport* Viewport, const FSceneView* View, FCanvas* Canvas) override;

	/**
	 * The classes to register this visualizer for: every class in GetTetheredClasses (in the .cpp),
	 * the one list a new tethered component is added to.
	 */
	static TArray<UClass*> GetVisualizedClasses();

private:
	/** The component's previews, with tethers that land on the same two points merged into one labelled line. */
	static TArray<FAzr_TetherPreview> GatherPreviews(const UActorComponent* Component);

	/**
	 * The label layout for the viewport being drawn: which viewport and frame it belongs to, the
	 * components already labelled in it, and the screen boxes their labels took. Only compared and
	 * cleared, never dereferenced.
	 */
	const FViewport* LabelViewport = nullptr;
	uint64 LabelFrame = 0;
	TArray<const UActorComponent*> LabelledComponents;
	TArray<FBox2D> PlacedLabels;
};
