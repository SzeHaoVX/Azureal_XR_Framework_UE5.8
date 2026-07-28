// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "AzrHandScannerVisualizer.h"
#include "Azr_HandScanner.h"

#include "SceneManagement.h"
#include "PrimitiveDrawingUtils.h"

namespace
{
	constexpr int32 CapsuleSides = 16;

	// Match the runtime colours in UAzr_HandScanner::TickComponent's debug draw.
	const FLinearColor InteractColor(1.0f, 0.15f, 0.15f);  // red   = close-range interact capsule
	const FLinearColor DistanceColor(1.0f, 0.85f, 0.10f);  // yellow= distance-grab capsule
	const FLinearColor GrabFrameColor(0.15f, 0.9f, 1.0f);  // cyan  = the grab snap frame
}

void FAzrHandScannerVisualizer::DrawVisualization(const UActorComponent* Component, const FSceneView* View, FPrimitiveDrawInterface* PDI)
{
	const UAzr_HandScanner* Scanner = Cast<UAzr_HandScanner>(Component);
	if (!Scanner || !PDI)
	{
		return;
	}

	const FTransform ScannerXf = Scanner->GetComponentTransform();
	const FVector Origin = ScannerXf.GetLocation();

	// --- Close-range interact capsule (red): centred on the scanner, unrotated ---
	DrawWireCapsule(PDI, Origin,
		ScannerXf.GetUnitAxis(EAxis::X), ScannerXf.GetUnitAxis(EAxis::Y), ScannerXf.GetUnitAxis(EAxis::Z),
		InteractColor, Scanner->InteractCapsuleRadius, Scanner->InteractCapsuleHalfHeight,
		CapsuleSides, SDPG_Foreground);

	// --- Distance-grab capsule (yellow): aimed by DistanceCapsuleAim ---
	// Mirrors UpdateDistanceCapsuleShape(): direction = aim applied to hand-forward, capsule laid
	// along it (long axis = local +Z) and pushed out by half its length so it starts at the hand.
	const FVector LocalDir = Scanner->DistanceCapsuleAim.RotateVector(FVector::ForwardVector).GetSafeNormal();
	if (!LocalDir.IsNearlyZero())
	{
		const FVector WorldDir = ScannerXf.TransformVectorNoScale(LocalDir).GetSafeNormal();
		const float HalfLen = Scanner->DistanceCapsuleLength;
		const FVector Base = Origin + WorldDir * HalfLen;

		const FMatrix Basis = FRotationMatrix::MakeFromZ(WorldDir);
		DrawWireCapsule(PDI, Base,
			Basis.GetUnitAxis(EAxis::X), Basis.GetUnitAxis(EAxis::Y), Basis.GetUnitAxis(EAxis::Z),
			DistanceColor, Scanner->DistanceCapsuleRadius, HalfLen,
			CapsuleSides, SDPG_Foreground);

		// Centre line from the hand to the tip — makes the aim direction obvious while tuning.
		PDI->DrawLine(Origin, Origin + WorldDir * (HalfLen * 2.0f), DistanceColor, SDPG_Foreground, 1.5f);
	}

	// --- Grab snap frame (cyan axes): the frame Azr_Grab aligns the ghost hand to ---
	// Drawn as a reminder that the SCANNER's own rotation is the grab frame; steer the beam with
	// DistanceCapsuleAim instead of rotating this component.
	const float AxisLen = FMath::Max(Scanner->InteractCapsuleRadius * 2.0f, 10.0f);
	PDI->DrawLine(Origin, Origin + ScannerXf.GetUnitAxis(EAxis::X) * AxisLen, GrabFrameColor, SDPG_Foreground, 1.0f);
	PDI->DrawLine(Origin, Origin + ScannerXf.GetUnitAxis(EAxis::Y) * AxisLen, GrabFrameColor * 0.6f, SDPG_Foreground, 1.0f);
	PDI->DrawLine(Origin, Origin + ScannerXf.GetUnitAxis(EAxis::Z) * AxisLen, GrabFrameColor * 0.3f, SDPG_Foreground, 1.0f);
}
