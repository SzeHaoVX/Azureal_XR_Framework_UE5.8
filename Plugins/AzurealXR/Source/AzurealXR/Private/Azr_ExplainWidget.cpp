

#include "Azr_ExplainWidget.h"
#include "Components/Button.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "GameFramework/PlayerController.h"
#include "Engine/GameInstance.h"
#include "Azr_SessionSubsystem.h"
#include "TimerManager.h"
#include "Engine/World.h"
#include "Framework/Application/SlateApplication.h"
#include "Fonts/FontMeasure.h"
#include "Internationalization/BreakIterator.h"
#include "Internationalization/TextChar.h"
#include "Rendering/SlateRenderer.h"

void UAzr_ExplainWidget::NativeConstruct() {
    Super::NativeConstruct();

    if (InteractionButton) {
        InteractionButton->OnClicked.AddDynamic(this, &UAzr_ExplainWidget::OnInteractionButtonClicked);
        InteractionButton->OnHovered.AddDynamic(this, &UAzr_ExplainWidget::OnInteractionButtonHovered);
        InteractionButton->OnUnhovered.AddDynamic(this, &UAzr_ExplainWidget::OnInteractionButtonUnhovered);
    }

    // --- ASSIGN FALLBACK DEFAULTS IF BLANK ---
    if (Text_PlayAudio.English.IsEmpty()) {
        Text_PlayAudio.English = TEXT("PLAY AUDIO");
        Text_PlayAudio.Malay = TEXT("MAIN AUDIO");
        Text_PlayAudio.Tamil = TEXT("ஆடியோவை இயக்கு");
    }
    if (Text_PlayingAudio.English.IsEmpty()) {
        Text_PlayingAudio.English = TEXT("PLAYING AUDIO...");
        Text_PlayingAudio.Malay = TEXT("AUDIO SEDANG DIMAINKAN...");
        Text_PlayingAudio.Tamil = TEXT("ஆடியோ இயக்கப்படுகிறது...");
    }
    if (Text_Confirm.English.IsEmpty()) {
        Text_Confirm.English = TEXT("CONFIRM");
        Text_Confirm.Malay = TEXT("SAHKAN");
        Text_Confirm.Tamil = TEXT("உறுதிப்படுத்து");
    }
    if (Text_Continue.English.IsEmpty()) {
        Text_Continue.English = TEXT("CONTINUE");
        Text_Continue.Malay = TEXT("TERUSKAN");
        Text_Continue.Tamil = TEXT("தொடரவும்");
    }

    CurrentState = EAzr_ExplainWidgetState::Idle;
    bIsLeftHandHovering = false;
    bIsRightHandHovering = false;
}

void UAzr_ExplainWidget::InitializeStep(EAzr_ExplainStepType InStepType) {
    CurrentStepType = InStepType;
    CurrentState = EAzr_ExplainWidgetState::Idle;

    if (AudioProgressBar) {
        AudioProgressBar->SetPercent(0.0f);
    }

    UpdateButtonVisuals();
}

// --- INJECTS THE DEV TEXT INTO THE UI (resolved to the active language) ---
void UAzr_ExplainWidget::SetExplainText(const FAzr_MultiLangText& NewText) {
    const FText Localized = GetLocalizedText(NewText);

    // Indexed as it is set, not when a reveal starts: the reveal has to be able to rebuild this
    // sentence from the original after the block has been cleared, and this is where the language is
    // resolved. Line breaks cannot be pinned yet -- see PrepareTextReveal.
    FullExplainString = Localized.ToString();
    RevealSourceString = FullExplainString;
    RebuildRevealIndex(RevealSourceString);

    if (ExplainTextBlock) {
        ExplainTextBlock->SetText(Localized);
    }
}

// --- SPOKEN TEXT REVEAL ---

void UAzr_ExplainWidget::RebuildRevealIndex(const FString& SourceText) {
    CharEndOffsets.Reset();
    WordFirstChar.Reset();
    WordCharCounts.Reset();

    if (SourceText.IsEmpty()) {
        return;
    }

    // Grapheme boundaries rather than string indices. A Tamil syllable is a consonant plus one or more
    // combining marks stored as separate code points, so stepping an index at a time would put a bare
    // consonant on screen for a frame before its vowel arrived.
    const TSharedRef<IBreakIterator> GraphemeIterator = FBreakIterator::CreateCharacterBoundaryIterator();
    GraphemeIterator->SetStringRef(FStringView(SourceText));

    bool bInWord = false;
    int32 GraphemeStart = GraphemeIterator->ResetToBeginning();

    for (int32 GraphemeEnd = GraphemeIterator->MoveToNext();
        GraphemeEnd != INDEX_NONE;
        GraphemeStart = GraphemeEnd, GraphemeEnd = GraphemeIterator->MoveToNext()) {

        // A grapheme's first code point decides what it is; a combining mark never starts one.
        if (FTextChar::IsWhitespace(SourceText[GraphemeStart])) {
            bInWord = false;
            continue;
        }

        if (!bInWord) {
            WordFirstChar.Add(CharEndOffsets.Num());
            WordCharCounts.Add(0);
            bInWord = true;
        }

        CharEndOffsets.Add(GraphemeEnd);
        ++WordCharCounts.Last();
    }
}

void UAzr_ExplainWidget::MeasureWrapPoints(const FString& SourceText, TArray<int32>& OutBreakOffsets) const {
    OutBreakOffsets.Reset();

    if (!ExplainTextBlock || SourceText.IsEmpty() || !FSlateApplication::IsInitialized()) {
        return;
    }

    // An explicit wrap width wins; otherwise auto-wrap means the width it was last laid out at. Before
    // the widget has ever been drawn that is zero, which is the signal to leave the reveal unpinned
    // rather than invent a width.
    float WrapWidth = ExplainTextBlock->GetWrapTextAt();
    if (WrapWidth <= 0.0f && ExplainTextBlock->GetAutoWrapText()) {
        WrapWidth = ExplainTextBlock->GetCachedGeometry().GetLocalSize().X;
    }
    if (WrapWidth <= 1.0f) {
        return;
    }

    // Checked rather than assumed: there are configurations with Slate up but no renderer, and going
    // through a null one to reach the measure service would take the whole game down over a cosmetic
    // detail. Without it the reveal simply runs unpinned.
    FSlateRenderer* Renderer = FSlateApplication::Get().GetRenderer();
    if (!Renderer) {
        return;
    }

    const TSharedRef<FSlateFontMeasure> FontMeasure = Renderer->GetFontMeasureService();
    const FSlateFontInfo& Font = ExplainTextBlock->GetFont();
    const FStringView SourceView(SourceText);

    // Greedy fill: keep adding words to the line until one no longer fits, then start a new line at
    // that word. This is how Slate wraps ordinary prose, so the two agree. Slate also considers breaks
    // inside hyphenated words, which this does not -- a mid-word break opportunity would simply leave
    // that one line wrapping as Slate sees fit rather than as pinned.
    const int32 Length = SourceText.Len();
    int32 LineStart = 0;
    int32 Index = 0;
    bool bLineHasWord = false;

    while (Index < Length) {
        while (Index < Length && FTextChar::IsWhitespace(SourceText[Index])) {
            if (SourceText[Index] == TEXT('\n')) {
                // The author already broke the line here; nothing to pin and the fill starts over.
                LineStart = Index + 1;
                bLineHasWord = false;
            }
            ++Index;
        }
        if (Index >= Length) {
            break;
        }

        const int32 WordStart = Index;
        while (Index < Length && !FTextChar::IsWhitespace(SourceText[Index])) {
            ++Index;
        }

        // Measured from the start of the line so the spaces between words count towards its width.
        const double LineWidth = FontMeasure->Measure(SourceView, LineStart, Index, Font, true, 1.0f).X;

        // A word that overflows a line it is alone on has nowhere better to go, so it stays and spills.
        if (LineWidth > WrapWidth && bLineHasWord) {
            OutBreakOffsets.Add(WordStart);
            LineStart = WordStart;
        }

        bLineHasWord = true;
    }
}

void UAzr_ExplainWidget::PrepareTextReveal(bool bPinLineBreaks) {
    RevealSourceString = FullExplainString;

    if (bPinLineBreaks) {
        TArray<int32> BreakOffsets;
        MeasureWrapPoints(FullExplainString, BreakOffsets);

        if (BreakOffsets.Num() > 0) {
            FString Pinned;
            Pinned.Reserve(FullExplainString.Len() + BreakOffsets.Num());

            int32 CopiedTo = 0;
            for (const int32 BreakAt : BreakOffsets) {
                // The break replaces the run of spaces before the word rather than joining it, so the
                // line does not end on whitespace that would widen it.
                int32 WhitespaceStart = BreakAt;
                while (WhitespaceStart > CopiedTo && FTextChar::IsWhitespace(FullExplainString[WhitespaceStart - 1])) {
                    --WhitespaceStart;
                }

                Pinned.Append(FullExplainString.Mid(CopiedTo, WhitespaceStart - CopiedTo));
                Pinned.AppendChar(TEXT('\n'));
                CopiedTo = BreakAt;
            }
            Pinned.Append(FullExplainString.Mid(CopiedTo));

            RevealSourceString = MoveTemp(Pinned);
        }
    }

    RebuildRevealIndex(RevealSourceString);
}

void UAzr_ExplainWidget::SetRevealedCharCount(int32 NumChars) {
    if (!ExplainTextBlock) {
        return;
    }

    const int32 Clamped = FMath::Clamp(NumChars, 0, CharEndOffsets.Num());

    if (Clamped <= 0) {
        ExplainTextBlock->SetText(FText::GetEmpty());
        return;
    }
    if (Clamped >= CharEndOffsets.Num()) {
        ExplainTextBlock->SetText(FText::FromString(RevealSourceString));
        return;
    }

    ExplainTextBlock->SetText(FText::FromString(RevealSourceString.Left(CharEndOffsets[Clamped - 1])));
}

void UAzr_ExplainWidget::ShowFullExplainText() {
    if (ExplainTextBlock) {
        // The original, not the pinned copy. Whatever the measurement made of the paragraph, the text
        // left on screen is exactly what the author wrote.
        ExplainTextBlock->SetText(FText::FromString(FullExplainString));
    }
}

int32 UAzr_ExplainWidget::GetWordFirstCharIndex(int32 WordIndex) const {
    return WordFirstChar.IsValidIndex(WordIndex) ? WordFirstChar[WordIndex] : CharEndOffsets.Num();
}

int32 UAzr_ExplainWidget::GetWordCharCount(int32 WordIndex) const {
    return WordCharCounts.IsValidIndex(WordIndex) ? WordCharCounts[WordIndex] : 0;
}

int32 UAzr_ExplainWidget::GetCharCountForProgress(float Fraction, float WordGapWeighting) const {
    const int32 NumChars = CharEndOffsets.Num();
    const int32 NumWords = WordCharCounts.Num();

    if (NumChars <= 0) {
        return 0;
    }

    Fraction = FMath::Clamp(Fraction, 0.0f, 1.0f);
    if (Fraction >= 1.0f) {
        return NumChars;
    }
    if (NumWords <= 1) {
        return FMath::RoundToInt(Fraction * NumChars);
    }

    // A word boundary costs about as much as a couple of letters. Charging for it is what gives the
    // letters a rhythm -- the reveal holds for a beat at each gap instead of crawling at one rate from
    // the first letter to the last.
    const float GapCost = 2.5f * FMath::Clamp(WordGapWeighting, 0.0f, 1.0f);
    const float TotalCost = NumChars + GapCost * (NumWords - 1);
    if (TotalCost <= KINDA_SMALL_NUMBER) {
        return FMath::RoundToInt(Fraction * NumChars);
    }

    const float Target = Fraction * TotalCost;
    float Spent = 0.0f;
    int32 CharsShown = 0;

    for (int32 WordIndex = 0; WordIndex < NumWords; ++WordIndex) {
        if (WordIndex > 0) {
            // Charged before the word, so the pause reads as a pause before the next word starts
            // appearing rather than a stall partway through the one just finished.
            Spent += GapCost;
            if (Target <= Spent) {
                return CharsShown;
            }
        }

        const int32 Count = WordCharCounts[WordIndex];
        if (Target <= Spent + Count) {
            return CharsShown + FMath::Clamp(FMath::FloorToInt(Target - Spent), 0, Count);
        }

        Spent += Count;
        CharsShown += Count;
    }

    return NumChars;
}

void UAzr_ExplainWidget::OnInteractionButtonClicked() {
    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsLeftHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
        if (bIsRightHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);
    }

    if (CurrentState == EAzr_ExplainWidgetState::Idle) {
        CurrentState = EAzr_ExplainWidgetState::Playing;
        UpdateButtonVisuals();
        OnPlayAudioClicked.Broadcast();
    }
    else if (CurrentState == EAzr_ExplainWidgetState::Completed) {
        OnProceedClicked.Broadcast();
    }
}

// --- NATIVE HOVER EVENTS (HAPTICS ONLY) ---
void UAzr_ExplainWidget::OnInteractionButtonHovered() {
    if (CurrentState == EAzr_ExplainWidgetState::Playing) return;

    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsLeftHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
        if (bIsRightHandHovering) PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);
    }
}

void UAzr_ExplainWidget::OnInteractionButtonUnhovered() {
    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsLeftHandHovering) PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Left);
        if (bIsRightHandHovering) PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Right);
    }
}

void UAzr_ExplainWidget::SetHoveredByLeftHand(bool bIsHovering) {
    bIsLeftHandHovering = bIsHovering;

    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsHovering) {
            PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Left);
        }
        else {
            PC->SetHapticsByValue(0.0f, 0.0f, EControllerHand::Left);
        }
    }
}

void UAzr_ExplainWidget::SetHoveredByRightHand(bool bIsHovering) {
    bIsRightHandHovering = bIsHovering;

    if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
        if (bIsHovering) {
            PC->SetHapticsByValue(0.5f, 0.5f, EControllerHand::Right);
        }
        else {
            PC->SetHapticsByValue(0.0f, 0.0f, EControllerHand::Right);
        }
    }
}

void UAzr_ExplainWidget::SetAudioProgress(float Progress) {
    if (AudioProgressBar && CurrentState == EAzr_ExplainWidgetState::Playing) {
        float ClampedProgress = FMath::Clamp(Progress, 0.0f, 1.0f);

        if (ClampedProgress >= 1.0f) {
            SetPlaybackCompleted();
        }
        else {
            AudioProgressBar->SetPercent(ClampedProgress);
        }
    }
}

void UAzr_ExplainWidget::SetPlaybackCompleted() {
    if (CurrentState == EAzr_ExplainWidgetState::Playing) {
        CurrentState = EAzr_ExplainWidgetState::Completed;

        // The narration is over, so the sentence must be whole regardless of where the reveal got to.
        // Belt and braces with the component's own call: whichever runs first, the learner is never
        // left staring at a half-finished sentence with nothing left to play.
        ShowFullExplainText();

        if (APlayerController* PC = Cast<APlayerController>(GetOwningPlayer())) {
            PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Left);
            PC->SetHapticsByValue(1.0f, 1.0f, EControllerHand::Right);

            if (UWorld* World = GetWorld()) {
                FTimerHandle HapticTimerHandle;
                World->GetTimerManager().SetTimer(HapticTimerHandle, FTimerDelegate::CreateWeakLambda(this, [this]() {
                    if (APlayerController* InnerPC = Cast<APlayerController>(GetOwningPlayer())) {
                        InnerPC->SetHapticsByValue(bIsLeftHandHovering ? 0.5f : 0.0f, bIsLeftHandHovering ? 0.5f : 0.0f, EControllerHand::Left);
                        InnerPC->SetHapticsByValue(bIsRightHandHovering ? 0.5f : 0.0f, bIsRightHandHovering ? 0.5f : 0.0f, EControllerHand::Right);
                    }
                    }), 0.5f, false);
            }
        }

        if (AudioProgressBar) {
            AudioProgressBar->SetPercent(0.0f);
        }

        UpdateButtonVisuals();
    }
}

void UAzr_ExplainWidget::UpdateButtonVisuals() {
    if (!InteractionButton || !ActionText) return;

    switch (CurrentState) {
    case EAzr_ExplainWidgetState::Idle:
        InteractionButton->SetIsEnabled(true);
        ActionText->SetText(GetLocalizedText(Text_PlayAudio));
        break;

    case EAzr_ExplainWidgetState::Playing:
        InteractionButton->SetIsEnabled(false);
        ActionText->SetText(GetLocalizedText(Text_PlayingAudio));
        break;

    case EAzr_ExplainWidgetState::Completed:
        InteractionButton->SetIsEnabled(true);

        if (CurrentStepType == EAzr_ExplainStepType::Single ||
            CurrentStepType == EAzr_ExplainStepType::End) {
            ActionText->SetText(GetLocalizedText(Text_Confirm));
        }
        else {
            ActionText->SetText(GetLocalizedText(Text_Continue));
        }
        break;
    }
}

// --- VISUAL TRANSLATOR ROUTING ---
FText UAzr_ExplainWidget::GetLocalizedText(const FAzr_MultiLangText& MultiLangText) const {
    FString ActiveLanguage = TEXT("English");

    if (UGameInstance* GI = GetGameInstance()) {
        if (UAzr_SessionSubsystem* SessionSubsystem = GI->GetSubsystem<UAzr_SessionSubsystem>()) {
            ActiveLanguage = SessionSubsystem->GetSessionLanguage();
        }
    }

    if (ActiveLanguage.Equals(TEXT("Malay"), ESearchCase::IgnoreCase) || ActiveLanguage.Equals(TEXT("ms"), ESearchCase::IgnoreCase)) {
        return FText::FromString(MultiLangText.Malay.IsEmpty() ? MultiLangText.English : MultiLangText.Malay);
    }
    else if (ActiveLanguage.Equals(TEXT("Tamil"), ESearchCase::IgnoreCase) || ActiveLanguage.Equals(TEXT("ta"), ESearchCase::IgnoreCase)) {
        return FText::FromString(MultiLangText.Tamil.IsEmpty() ? MultiLangText.English : MultiLangText.Tamil);
    }

    return FText::FromString(MultiLangText.English);
}