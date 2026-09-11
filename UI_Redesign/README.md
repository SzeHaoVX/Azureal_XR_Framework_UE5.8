# UI_Redesign

A design proposal for the world-space guidance widgets — `Azr_Explain` / `Azr_Action` in `AzurealXR`,
and the chapter/step board in `Azureal_CSM` — worked in the Apple Liquid Glass language and overruled
where the headset render setup makes that necessary.

No build step, no dependencies. Serve the folder and open `final.html`, or open the files directly.

## The pages, in the order they matter

| Page | What it is |
|---|---|
| **`final.html`** | **The design.** Explain and Action in four states, the CSM board in four screens, at their real sizes. Plus the token-expand flow and the build notes. Start here. |
| `token.html` | The token, how it docks to Explain/Action, and what happens during Grab/Latch where there is no panel to dock to. |
| `engine.html` | Feasibility audit against UE 5.8 source. Mostly one question: can a world-space widget be frosted glass. |
| `placement.html` | The body-leash study — where the token lives when there is nothing to dock to. |
| `cable.html` | The cable comparison. Predates finding `WidgetAnchorPos`, which is the actual fix. |
| `index.html`, `overhaul.html` | Earlier rounds. `final.html` supersedes both. |

## The two sizes

```
Explain / Action    900 × 870 px   →  90 × 87 cm at component scale 0.1
CSM board          1220 × 870 px   → 122 × 87 cm
```

Same height on purpose: the token docks in the identical place for both, and the cable anchor is one
rule instead of two. The 1.4 ratio is not invented — the earlier CSM board already rendered at
1900 × 1347, which is 1.4105 : 1, so the board here is that design scaled by 0.642.

Every px value in the CSS is a number that can be typed straight into UMG. The pages scale the boards
down with a CSS transform to fit the column — never by changing type sizes, which would throw away the
point of checking legibility at true proportions.

**Working floor for anything interactive: 80 × 80 px (8 cm).** There is no magnetism, snapping or dwell
on this stack. Rows that are only *read* — the procedure checklist — are allowed below it.

## Fix before building anything

The widget blueprint is authored at 900 × 870, but the placed `UWidgetComponent` renders it into a
~500 × 500 render target and magnifies the result. The designer's Width/Height is `DesignTimeSize`,
which lives inside `#if WITH_EDITORONLY_DATA` (`UserWidget.h:1528`) and never reaches runtime; the root
is a Canvas Panel, and `SConstraintCanvas::ComputeDesiredSize` (`SConstraintCanvas.cpp:356`) returns the
max of the children's slot offsets rather than the canvas size. With `bDrawAtDesiredSize` on,
`CurrentDrawSize` becomes that (`WidgetComponent.cpp:1432`).

```
bDrawAtDesiredSize = false
DrawSize           = (900, 870)
```

Every other quality decision is downstream of this one.

## Deviations from the design language, and why

| Rule | What was done instead | Why |
|---|---|---|
| Hairline dividers `rgba(0,0,0,0.07)` | 3 px bands at lower contrast | MSAA does nothing for widget-internal content and there is no temporal AA, so a 1 px rule crawls with every head movement |
| Cool light ground `#f5f5f7` | Apple's dark-mode ramp | `AutoExposure=False` plus `Bloom=True` smears a bright fill into the text on it; and a large white sheet in a dim substation is a lamp |
| Content can sit anywhere | Read-critical content near the horizontal centre | `xr.VRS.FoveationLevel=2` shades the periphery coarsely, and eye tracking is off |
| Drop shadows for elevation | None | Nothing behind a floating panel catches a shadow; in stereo it reads as a sticker |

Everything else is kept: one surface instead of many, named radius and shadow tiers, hierarchy from
weight and size rather than colour, a single accent, glass only where layers actually overlap.

## Status

A proposal. Nothing in `Plugins/` has been touched.
