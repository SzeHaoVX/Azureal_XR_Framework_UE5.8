

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "Azr_DesktopHUD.generated.h"

/**
 * AAzr_DesktopHUD
 * The aiming dot for desktop play, drawn flat on the screen.
 *
 * Screen space on purpose. A dot placed in the world has to be given a position, a facing and a size,
 * and all three then have to be kept honest against whatever it is hovering over -- which makes it
 * drift, tilt and snap as the thing under it changes. A crosshair does none of that: it sits in the
 * middle of the screen and never moves. What it is over is a separate question, answered by the pawn.
 *
 * Drawn rather than authored, so desktop mode needs no widget asset to work in a fresh project. The
 * pawn installs this through ClientSetHUD, so a project's own GameMode and HUD are left alone.
 */
UCLASS()
class AZUREALXR_API AAzr_DesktopHUD : public AHUD
{
	GENERATED_BODY()

public:
	/** Radius of the dot in pixels. The pawn keeps its interaction volume matched to whatever this is. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "1.0"))
	float ReticleRadius = 4.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
	FLinearColor ReticleColor = FLinearColor(1.0f, 1.0f, 1.0f, 0.9f);

	/**
	 * A darker ring drawn behind the dot.
	 *
	 * Without it a white dot disappears against anything pale, and a training scene is mostly pale
	 * walls and panels. Set the alpha to zero to drop it.
	 */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
	FLinearColor ReticleOutlineColor = FLinearColor(0.0f, 0.0f, 0.0f, 0.55f);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "0.0"))
	float ReticleOutlineThickness = 1.5f;

	/** Sides of the polygon standing in for a circle. Twenty-four is round to the eye at any sane size. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop", meta = (ClampMin = "3", ClampMax = "64"))
	int32 ReticleSides = 24;

	/** Hide the dot without swapping the HUD out, e.g. during a cutscene. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Azureal|Desktop")
	bool bShowReticle = true;

	/**
	 * True when a headset is driving the view, so nothing here should be drawn.
	 *
	 * Asked of the stereo device rather than of head tracking: tracking drops out whenever the headset
	 * is off the head or the session goes idle, and a crosshair blinking on at those moments is worse
	 * than one that is simply never there. Static because the pawn asks the same question when
	 * deciding whether to install this HUD at all.
	 */
	static bool IsStereoActive();

	virtual void DrawHUD() override;
};
