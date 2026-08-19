

#include "Azr_DesktopHUD.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"
#include "CanvasItem.h"
#include "RenderUtils.h"
#include "StereoRendering.h"

bool AAzr_DesktopHUD::IsStereoActive()
{
    return GEngine
        && GEngine->StereoRenderingDevice.IsValid()
        && GEngine->StereoRenderingDevice->IsStereoEnabled();
}

void AAzr_DesktopHUD::DrawHUD()
{
    Super::DrawHUD();

    if (!bShowReticle || !Canvas) return;

    // Checked every frame, not just at install: a flat dot pasted over a stereo view is drawn once into
    // a two-eye target, so it lands off-centre and at the wrong depth -- it reads as a smudge on the
    // lens. The pawn already declines to install this HUD in VR; this is the guard for the case where
    // the headset comes up after it was installed, and for any project that installs it by hand.
    if (IsStereoActive()) return;

    // Dead centre of whatever the viewport currently is, recomputed every frame so the dot stays put
    // through a resize or a change of aspect.
    const FVector2D Centre(Canvas->SizeX * 0.5f, Canvas->SizeY * 0.5f);

    // GWhiteTexture rather than an asset: an n-gon of flat white tinted to the wanted colour is a
    // filled circle, and it means desktop mode draws its crosshair with nothing authored anywhere.
    if (ReticleOutlineColor.A > 0.0f && ReticleOutlineThickness > 0.0f)
    {
        const float OuterRadius = ReticleRadius + ReticleOutlineThickness;
        FCanvasNGonItem Outline(Centre, FVector2D(OuterRadius, OuterRadius), ReticleSides, GWhiteTexture, ReticleOutlineColor);
        Canvas->DrawItem(Outline);
    }

    FCanvasNGonItem Dot(Centre, FVector2D(ReticleRadius, ReticleRadius), ReticleSides, GWhiteTexture, ReticleColor);
    Canvas->DrawItem(Dot);
}
