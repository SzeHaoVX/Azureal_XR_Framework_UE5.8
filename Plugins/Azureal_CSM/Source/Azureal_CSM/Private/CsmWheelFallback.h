#pragma once

#include "CoreMinimal.h"
#include "Components/ScrollBox.h"
#include "Components/Widget.h"
#include "Components/WidgetSwitcher.h"
#include "Input/Events.h"
#include "Types/SlateConstants.h"

// The page-level half of CSM scrolling. A wheel that lands inside a list is handled by the list and
// never bubbles this far; these are for a wheel that lands anywhere else on the page, which in a
// headset is most of the time -- a laser resting a few pixels above or beside a list at a metre
// scrolled nothing while looking like it should.
namespace CsmWheel
{
    /** The nearest ScrollBox at or above Widget, inside the widget tree that owns it. */
    inline UScrollBox* FindScrollBox(UWidget* Widget)
    {
        for (UWidget* W = Widget; W; W = W->GetParent())
        {
            if (UScrollBox* Scroll = Cast<UScrollBox>(W)) return Scroll;
        }
        return nullptr;
    }

    /**
     * Whether Widget is actually on screen as far as its own tree can tell: nothing on the way up is
     * collapsed or hidden, and no widget switcher above it has another page showing.
     */
    inline bool IsShown(const UWidget* Widget)
    {
        for (const UWidget* W = Widget; W; W = W->GetParent())
        {
            if (!W->IsVisible()) return false;

            if (const UWidgetSwitcher* Switcher = Cast<UWidgetSwitcher>(W->GetParent()))
            {
                if (Switcher->GetActiveWidget() != W) return false;
            }
        }
        return true;
    }

    /**
     * Scrolls the list holding ListOrChild by one wheel event, the same distance the list would have
     * gone had the wheel landed on it. Returns false when that list is not on screen or has nowhere
     * to scroll, so the caller can try another or let the event carry on.
     */
    inline bool ScrollShownList(UWidget* ListOrChild, const FPointerEvent& Event)
    {
        UScrollBox* List = FindScrollBox(ListOrChild);
        if (!List || !IsShown(List)) return false;

        const float End = List->GetScrollOffsetOfEnd();
        if (End <= 0.f) return false;

        // SScrollBox::OnMouseWheel's own step, so aiming at the list and aiming beside it feel the same.
        const float Step = Event.GetWheelDelta() * GetGlobalScrollAmount() * List->GetWheelScrollMultiplier();
        List->SetScrollOffset(FMath::Clamp(List->GetScrollOffset() - Step, 0.f, End));
        return true;
    }
}
