# Building the design by hand — where each widget's look actually lives

Companion to `final.html`. This is the map of where to click, produced by reading every widget tree
and every Blueprint graph in `Azureal_CSM` and the two guidance widgets in `AzurealXR`.

**The one thing to read first:** in several of these widgets the visuals are NOT the designer values.
The Blueprint graph overwrites them at runtime from variables. Restyling the designer on those widgets
does nothing — it looks correct in the editor and reverts the moment the widget changes state. The
table below says which is which.

---

## 1. Colours: the design is sRGB, Unreal wants linear

Every colour in `final.html` is sRGB. `FLinearColor` is linear. Pasting the hex straight in gives a
washed-out, too-bright result. Converted values:

| Token | sRGB | Linear R, G, B | A |
|---|---|---|---|
| panel fill | `#1c1c1e` | 0.01161, 0.01161, 0.01298 | 0.78 |
| primary text | `#ffffff` | 1, 1, 1 | 1 |
| secondary text `--t2` | `rgb(235,235,245)` | 0.8309, 0.8309, 0.9024 | 0.68 |
| tertiary text `--t3` | same | 0.8309, 0.8309, 0.9024 | 0.46 |
| quaternary `--t4` | same | 0.8309, 0.8309, 0.9024 | 0.26 |
| divider `--div` | `#ffffff` | 1, 1, 1 | 0.09 |
| neutral fill `--fill` | `rgb(120,120,128)` | 0.1918, 0.1918, 0.2159 | 0.20 |
| list ground `--fill2` | same | 0.1918, 0.1918, 0.2159 | 0.13 |
| track | same | 0.1918, 0.1918, 0.2159 | 0.26 |
| blue | `#0a84ff` | 0.00303, 0.2307, 1.0 | 1 |
| green | `#30d158` | 0.02955, 0.7250, 0.09765 | 1 |
| red | `#ff453a` | 1.0, 0.0595, 0.0423 | 1 |
| amber | `#ff9f0a` | 1.0, 0.3466, 0.00303 | 1 |
| on-accent (text on blue) | `#04223d` | 0.00121, 0.01599, 0.04665 | 1 |
| on-green | `#05261a` | 0.00152, 0.01940, 0.01155 | 1 |
| explain eyebrow | `#ffcf70` | 1.0, 0.6153, 0.1621 | 1 |
| action eyebrow | `#ff9b93` | 1.0, 0.3277, 0.2918 | 1 |

Formula if you need others: `c <= 0.04045 ? c/12.92 : ((c+0.055)/1.055)^2.4` on each channel of `srgb/255`.

## 2. Brushes: use Rounded Box, not a texture

Every panel, row, chip and button in the design is `FSlateBrush` with **Draw As = Rounded Box**,
**Image = None**. No nine-slice textures needed. `Corner Radii` is an `FVector4` (TL, TR, BR, BL) so
per-corner works, and `Rounding Type = Half Height Radius` gives a pill with no arithmetic. The inner
ring is the same struct's `Outline Settings` → Color + Width. It is always an *inner* stroke.

Radii used: panel 54, list 34, row 28, option 28, pill = Half Height Radius.

## 3. Where each widget's look lives

| Widget | Designer-safe? | Where the look actually is |
|---|---|---|
| **WBP_MainMenu** | **Yes, entirely** | Zero `SetBrush` / `SetStyle` / `SetFont` / `SetPadding` nodes anywhere in the asset. Every brush, font, border and button style is designer-authored. Only `Visibility` (×26), `IsEnabled` (×2), one `SetColorAndOpacity` and five `Set Text` are graph-driven. Restyle freely. |
| **WBP_SubStepRow** | **No** | Nine CDO variables drive everything, via `OnStateChanged` → `Switch on ESubStepState`: `Idle/Active/Completed Brush - GreyBox`, `… Brush - Arrow/Tick`, `… Color and Opacity`. Corner radius and outline width live inside those brushes. Designer edits are overwritten. |
| **WBP_ChapterButton** | Partly | Button look is CDO: `"Selected Style"` and `"UnSelected Style"` (`FButtonStyle`). Note the spelling — `UnSelected Style`, not `Un Selected Style`. Text colours and fonts on `ChapterTitleText` / `ProgressText` are designer and stick. Their `normalForeground` etc. are currently pure cyan `(0,1,1,1)`, almost certainly unintended — quickest visible win. |
| **WBP_QuizAnswerRow** | Partly | CDO: `"Selected Style"`, `"UnSelected Style"`, `"Correct Style"`, `"Wrong Style"`, `"Correct Image"`, `"Wrong Image"`. **For Correct/Wrong edit `.disabled`, not `.normal`** — the row is disabled when the result shows, so `.normal` is never seen. |
| **Explain_Widget** | Partly | CDO: `"Hover Brush"` and `"Un Hover Brush"` — the play/confirm pill's entire look, including its corner radii (currently `z=25, w=25` only, so bottom corners round and top square) and its yellow 2.5 px outline. Everything else (`Background`, `Border_285` title chip, `TITLE`, `ExplainTextBlock`, `AudioProgressBar`) is designer and sticks. |
| **Action_Widget** | Partly | Same shape: CDO `"Hover Brush"` / `"Un Hover Brush"` for the button face; `Background`, `Border_285`, `TITLE` designer. |
| **WBP_StepPage** | Mostly | 62 widgets, 16 graphs, but only `EventGraph` touches the tree. Six other non-empty graphs (`IsBtnPressed`, `RevealAnswer`, …) take their widgets as *function parameters* and reference nothing in this tree — they are dead here. |

## 4. Sizes

`WBP_StepPage`'s two page states are both absolutely positioned at **1900 × 2298** (read off
`CanvasPanelSlot` offsets — `DesignTimeSize` is editor-only and not readable by reflection). Both must
change together or the two pages desync.

Explain/Action are authored **900 × 870**. If `bDrawAtDesiredSize` is on with a Canvas Panel root, the
runtime render target will NOT be 900 × 870 — `SConstraintCanvas::ComputeDesiredSize` returns the max
of its children's slot offsets, not the canvas size. Set `bDrawAtDesiredSize = false` and
`DrawSize = (900, 870)`.

## 5. Two workflow traps

**Compiling a Widget Blueprint destroys its live instance in the editor world and does not rebuild it.**
The placed `WidgetComponent` goes blank and stays blank. Save, then reload the level, to see any change
in the viewport. Iterating without knowing this makes it look like your edits did nothing.

**Widget components are one-sided.** From behind, the panel is invisible — easy to mistake for a broken
widget when the camera moves.

## 6. Bind contract — never rename or delete these

`UTrainingStepPage`: `MainScrollBox`, `DynamicListContainer`, `StepProgressText`, `NextButtonText`
(required); `MainStepText`, `QuizContainerBox` (optional — deleting these compiles fine and then
silently disables the text-fade engine and quiz spawning respectively).

`UMainMenuPage`: `StartPanel`, `StepPageContainer`, `SelectChapterPanel`, `ChapterListContainer`,
`RestartChapterCompletedPanel`, `RestartMessageText`, `Btn_ConfirmRestart`, `Btn_CancelRestart`.

`UChapterSelectRow`: `ChapterNumberText`, `ChapterTitleText`, `ProgressText`, `StatusIconImage`,
`ChapterButton`, `CompletionStatusImage`.

`UQuizAnswerRow`: `AnswerButton`, `AnswerText` (required); `ResultIcon`, `ArrowTickIndicator` (optional).

`UTrainingSubStepRow`: **none** — but its graph references `BackgroundBorder`, `DescriptionText` and
`ArrowTickIndicator` by name, and deleting a widget the graph references takes the graph nodes with it.
