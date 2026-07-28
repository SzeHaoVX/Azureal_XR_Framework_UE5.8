// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "ComponentVisualizer.h"

/**
 * Draws UAzr_HandScanner's two overlap capsules in the editor viewport (Blueprint editor and level)
 * whenever the scanner component is selected.
 *
 * The capsules only exist at runtime (they are created in BeginPlay to dodge the UE 5.8 nested
 * default-subobject ensure), so without this there is nothing to see or aim at while authoring.
 * This mirrors exactly what UAzr_HandScanner::CreateScanCapsules/UpdateDistanceCapsuleShape build,
 * so what you see here is what you get in play.
 */
class FAzrHandScannerVisualizer : public FComponentVisualizer
{
public:
	virtual void DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI) override;
};
