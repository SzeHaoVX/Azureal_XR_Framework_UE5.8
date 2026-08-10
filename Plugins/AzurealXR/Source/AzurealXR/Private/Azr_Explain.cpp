

#include "Azr_Explain.h"
#include "Azr_Interactable.h"
#include "Azr_Pointer.h"
#include "Azr_SessionSubsystem.h"
#include "Engine/GameInstance.h"
#include "CableComponent.h"
#include "Components/AudioComponent.h"
#include "Components/WidgetComponent.h"
#include "Engine/StaticMesh.h"
#include "Kismet/GameplayStatics.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/KismetMathLibrary.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialParameterCollection.h"
#include "Sound/SoundBase.h"
#include "UObject/ConstructorHelpers.h"


UAzr_Explain::UAzr_Explain() {
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;

    InteractID = 1;
    bIsActive = false;
    bIsPlusMode = false;
    CurrentMiddleIndex = 0;
    StencilID = 252;
    LastHighlightValue = 0.0f;
    bWasRising = false;

    ActiveWidgetComp = nullptr;
    ActiveExplainUI = nullptr;
    ActiveAudioComp = nullptr;

    // --- INTERNAL COMPONENTS (Tether System) ---
    StartAnchor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Explain_StartAnchor"));
    StartAnchor->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    StartAnchor->SetCastShadow(false);
    StartAnchor->SetVisibility(false);

    EndAnchor = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Explain_EndAnchor"));
    EndAnchor->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    EndAnchor->SetCastShadow(false);
    EndAnchor->SetVisibility(false);

    TetherCable = CreateDefaultSubobject<UCableComponent>(TEXT("Explain_TetherCable"));
    TetherCable->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    TetherCable->SetVisibility(false);
    TetherCable->NumSegments = 20;
    TetherCable->SolverIterations = 4;
    TetherCable->CableLength = 0.0f;

    // --- ASSET INITIALIZATION ---
    static ConstructorHelpers::FObjectFinder<UMaterialParameterCollection> MPCAsset(TEXT("/AzurealXR/Interaction/Highlight/MPC_Highlight"));
    if (MPCAsset.Succeeded()) HighlightMPC = MPCAsset.Object;

    static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereMesh(TEXT("/AzurealXR/Interaction/Cable_System/CableHead"));
    if (SphereMesh.Succeeded()) {
        SingleExplainStep.TetherSettings.AnchorMesh = SphereMesh.Object;
        StartStep.TetherSettings.AnchorMesh = SphereMesh.Object;
        EndStep.TetherSettings.AnchorMesh = SphereMesh.Object;
    }

    static ConstructorHelpers::FObjectFinder<UMaterialInterface> CableMatAsset(TEXT("/AzurealXR/Interaction/Cable_System/M_Cable"));
    if (CableMatAsset.Succeeded()) {
        SingleExplainStep.TetherSettings.CableMaterial = CableMatAsset.Object;
        StartStep.TetherSettings.CableMaterial = CableMatAsset.Object;
        EndStep.TetherSettings.CableMaterial = CableMatAsset.Object;
    }

    // --- AUDIO ASSETS ---
    static ConstructorHelpers::FObjectFinder<USoundBase> StartSoundAsset(TEXT("/AzurealXR/Interaction/Highlight/SC_Highlight_Start"));
    if (StartSoundAsset.Succeeded()) SoundHighlightStart = StartSoundAsset.Object;

    static ConstructorHelpers::FObjectFinder<USoundBase> EndSoundAsset(TEXT("/AzurealXR/Interaction/Highlight/SC_Highlight_End"));
    if (EndSoundAsset.Succeeded()) SoundHighlightEnd = EndSoundAsset.Object;
}

void UAzr_Explain::BeginPlay() {
    Super::BeginPlay();
    EnsureInitialized();
    HideAllWidgets();
}

void UAzr_Explain::EndPlay(const EEndPlayReason::Type EndPlayReason) {
    if (bIsActive) DisableExplain();
    Super::EndPlay(EndPlayReason);
}

// --- INTERFACE ---

void UAzr_Explain::EnableExplain() {
    if (bIsActive) return;

    EnsureInitialized();
    HideAllWidgets();

    bIsActive = true;
    bIsPlusMode = false;

    if (GetWorld()) {
        LastHighlightValue = 0.0f;
        bWasRising = true;
    }

    // Load Step dynamically applies the Mesh, Highlights, and Tethers for this specific step
    LoadStep(SingleExplainStep, EAzr_ExplainStepType::Single);
    SetComponentTickEnabled(true);
}

void UAzr_Explain::EnableExplainPlus() {
    if (bIsActive) return;

    EnsureInitialized();
    HideAllWidgets();

    bIsActive = true;
    bIsPlusMode = true;
    CurrentMiddleIndex = 0;

    if (GetWorld()) {
        LastHighlightValue = 0.0f;
        bWasRising = true;
    }

    // Load Step dynamically applies the Mesh, Highlights, and Tethers for this specific step
    LoadStep(StartStep, EAzr_ExplainStepType::Start);
    SetComponentTickEnabled(true);
}

void UAzr_Explain::DisableExplain() {
    if (!bIsActive) return;

    bIsActive = false;

    if (ActiveAudioComp) ActiveAudioComp->Stop();

    bRevealActive = false;

    // --- THE FIX: UNHOOK EARS FROM THE WIDGET ---
    if (ActiveExplainUI) {
        ActiveExplainUI->ShowFullExplainText();

        ActiveExplainUI->OnPlayAudioClicked.RemoveDynamic(this, &UAzr_Explain::HandlePlayAudioClicked);
        ActiveExplainUI->OnProceedClicked.RemoveDynamic(this, &UAzr_Explain::HandleProceedClicked);
        ActiveExplainUI = nullptr;
    }

    HideAllWidgets();

    // Clean up the visuals from whichever step was currently active
    ToggleTether(false);
    ToggleHighlight(false);
    UpdatePointer(false);

    // FIX: Only broadcast the generic event if this was a Single Explain
    if (!bIsPlusMode) {
        OnExplainCompleted.Broadcast();
    }

    SetComponentTickEnabled(false);
}

// --- CORE LOGIC ---

void UAzr_Explain::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) {
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!bIsActive) return;

    // --- 1. INDEPENDENT PROGRESS MATH ---
    if (bIsStepRunning && ActiveExplainUI) {
        float Elapsed = GetWorld()->GetTimeSeconds() - StepStartTime;

        if (StepDuration > 0.0f) {
            float Progress = Elapsed / StepDuration;
            ActiveExplainUI->SetAudioProgress(Progress);

            UpdateTextReveal(DeltaTime, Elapsed);

            if (Progress >= 1.0f) {
                bIsStepRunning = false;

                if (bRevealActive) {
                    if (bLogRevealDiagnostics) {
                        if (ExactWordTimes.Num() > 0) {
                            UE_LOG(LogTemp, Warning,
                                TEXT("[Azr Reveal] EXACT timings | %d words over %.2fs (last word at %.2fs) | revealed %d/%d"),
                                ExactWordTimes.Num(), StepDuration, ExactWordTimes.Last(), RevealedWords, TotalRevealWords);
                        }
                        else {
                            const float SpeechPct = (DiagTotalFrames > 0)
                                ? (100.0f * DiagSpeechFrames / DiagTotalFrames) : 0.0f;
                            UE_LOG(LogTemp, Warning,
                                TEXT("[Azr Reveal] ESTIMATED (no timings) envelope=%s peak=%.4f cutoff=%.4f | speech %.1f%% of clip (%.2fs of %.2fs) | words %d/%d"),
                                bEnvelopeReceived ? TEXT("YES") : TEXT("NEVER ARRIVED"),
                                PeakEnvelope, FMath::Max(PeakEnvelope * SilenceLevel, 0.0015f),
                                SpeechPct, SpeechSeconds, StepDuration, RevealedWords, TotalRevealWords);
                        }
                    }

                    bRevealActive = false;
                    ActiveExplainUI->ShowFullExplainText();
                }

                ActiveExplainUI->SetPlaybackCompleted();

                // If they used a custom timer that ended BEFORE the audio finished, gracefully stop the audio
                if (ActiveAudioComp && ActiveAudioComp->IsPlaying()) {
                    ActiveAudioComp->Stop();
                }
            }
        }
    }

    // --- 2. DYNAMIC TETHER (Using Step-Specific Config) ---
    if (ActiveWidgetComp && CurrentActiveStep.TetherSettings.bEnableTether && EndAnchor) {
        if (APlayerCameraManager* CamManager = UGameplayStatics::GetPlayerCameraManager(this, 0)) {
            FVector StartLoc = ActiveWidgetComp->GetComponentLocation();
            FRotator NewRot = UKismetMathLibrary::FindLookAtRotation(StartLoc, CamManager->GetCameraLocation());
            ActiveWidgetComp->SetWorldRotation(NewRot);
        }

        FVector DynamicEndPos = CalculateSurfaceAnchor(ActiveWidgetComp, CurrentActiveStep.TetherSettings.WidgetAnchorPos, CurrentActiveStep.TetherSettings);
        EndAnchor->SetWorldLocation(DynamicEndPos);

        // --- THE FIX: EXACT DISTANCE, NO TENSION ---
        float ActualDistance = FVector::Dist(StartAnchor->GetComponentLocation(), DynamicEndPos);
        float Slack = CurrentActiveStep.TetherSettings.CableHang;

        if (Slack <= 0.1f) {
            // Set it to the EXACT distance. No pulling, no slack.
            // Gravity is 0 so it perfectly connects A to B without drooping.
            TetherCable->CableLength = ActualDistance;
            TetherCable->CableGravityScale = 0.0f;
        }
        else {
            TetherCable->CableLength = ActualDistance + Slack;
            TetherCable->CableGravityScale = 1.0f;
        }
    }

    // --- 3. HIGHLIGHT PULSE ---
    if (HighlightMPC) {
        if (UWorld* World = GetWorld()) {
            float CurrentSpeed = AAzr_Interactable::GetGlobalHiveSpeed();
            float Phase = (World->GetTimeSeconds() * CurrentSpeed * UE_TWO_PI) - UE_HALF_PI;
            float CurrentValue = (FMath::Sin(Phase) + 1.0f) / 2.0f;
            UKismetMaterialLibrary::SetScalarParameterValue(World, HighlightMPC, FName("Alpha"), CurrentValue);

            bool bIsNowRising = (CurrentValue > LastHighlightValue);

            if (CurrentValue < 0.05f && bIsNowRising && !bWasRising && SoundHighlightStart) {
                UGameplayStatics::SpawnSoundAttached(SoundHighlightStart, GetOwner()->GetRootComponent());
            }

            if (bWasRising && !bIsNowRising && SoundHighlightEnd) {
                UGameplayStatics::SpawnSoundAttached(SoundHighlightEnd, GetOwner()->GetRootComponent());
            }

            LastHighlightValue = CurrentValue;
            bWasRising = bIsNowRising;
        }
    }
}

// --- STEP MANAGEMENT ---

void UAzr_Explain::HideAllWidgets() {
    TArray<UWidgetComponent*> Comps;
    if (GetOwner()) GetOwner()->GetComponents<UWidgetComponent>(Comps);

    for (UWidgetComponent* Comp : Comps) {
        // Check against Single, Start, and End steps
        if (Comp->GetFName() == SingleExplainStep.WidgetName ||
            Comp->GetFName() == StartStep.WidgetName ||
            Comp->GetFName() == EndStep.WidgetName) {
            Comp->SetVisibility(false);
            Comp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
            Comp->SetCollisionProfileName(FName("NoCollision"));
        }

        // Check against the Middle steps array
        for (const FAzr_ExplainStep& Middle : MiddleSteps) {
            if (Comp->GetFName() == Middle.WidgetName) {
                Comp->SetVisibility(false);
                Comp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
                Comp->SetCollisionProfileName(FName("NoCollision"));
            }
        }
    }
}

void UAzr_Explain::LoadStep(const FAzr_ExplainStep& StepData, EAzr_ExplainStepType StepType) {
    // 1. Clean up visuals from the previous step
    ToggleTether(false);
    ToggleHighlight(false);
    UpdatePointer(false);

    // A reveal left running from a skipped step would keep writing words into the widget this step is
    // about to take over. SetExplainText below puts the new sentence up whole, as it should be before
    // the learner presses Play.
    bRevealActive = false;
    RevealedWords = 0;
    TotalRevealWords = 0;

    // 2. Set the new active data
    CurrentStepType = StepType;
    CurrentActiveStep = StepData;

    // 3. Dynamically update the Target Mesh for this specific step
    TargetMesh = FindMeshByName(CurrentActiveStep.TargetMeshName);
    AAzr_Interactable::SetGlobalHiveSpeed(CurrentActiveStep.HighlightSpeed);

    // 4. Teardown old widget
    if (ActiveWidgetComp) {
        ActiveWidgetComp->SetVisibility(false);
        ActiveWidgetComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
        ActiveWidgetComp->SetCollisionProfileName(FName("NoCollision"));
    }

    if (ActiveExplainUI) {
        ActiveExplainUI->OnPlayAudioClicked.RemoveDynamic(this, &UAzr_Explain::HandlePlayAudioClicked);
        ActiveExplainUI->OnProceedClicked.RemoveDynamic(this, &UAzr_Explain::HandleProceedClicked);
    }

    // 5. Setup new widget
    ActiveWidgetComp = FindWidgetByName(CurrentActiveStep.WidgetName);
    if (ActiveWidgetComp) {
        ActiveExplainUI = Cast<UAzr_ExplainWidget>(ActiveWidgetComp->GetUserWidgetObject());
        if (ActiveExplainUI) {
            ActiveExplainUI->InitializeStep(StepType);

            ActiveExplainUI->SetExplainText(CurrentActiveStep.ExplainText);

            ActiveExplainUI->OnPlayAudioClicked.AddDynamic(this, &UAzr_Explain::HandlePlayAudioClicked);
            ActiveExplainUI->OnProceedClicked.AddDynamic(this, &UAzr_Explain::HandleProceedClicked);

            // --- ACTIVATE VISIBILITY AND COLLISION ---
            ActiveWidgetComp->SetVisibility(true);
            ActiveWidgetComp->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
            ActiveWidgetComp->SetCollisionProfileName(FName("Azr_Collision"));

            // 6. Turn the visuals back on using the NEW step's data
            ToggleHighlight(true);
            UpdatePointer(true);
            ToggleTether(true);
        }
    }
}

void UAzr_Explain::HandlePlayAudioClicked() {

    if (!bIsActive) return;
    
    if (CurrentStepType == EAzr_ExplainStepType::Single) OnExplainStarted.Broadcast();
    else if (CurrentStepType == EAzr_ExplainStepType::Start) OnExplainPlusStarted.Broadcast(1);
    else if (CurrentStepType == EAzr_ExplainStepType::Middle) OnExplainPlusStarted.Broadcast(2 + CurrentMiddleIndex);
    else if (CurrentStepType == EAzr_ExplainStepType::End) OnExplainPlusStarted.Broadcast(2 + MiddleSteps.Num());

    
    StepStartTime = GetWorld()->GetTimeSeconds();
    bIsStepRunning = true;
    USoundBase* TrackToPlay = CurrentActiveStep.AudioTrack;

    
    if (CurrentActiveStep.ExplainMode == EAzr_ExplainMode::CustomTimer) {
        StepDuration = CurrentActiveStep.CustomTimerDuration;
    }
    else {
        StepDuration = TrackToPlay ? TrackToPlay->GetDuration() : 0.0f;
    }

    // Start the reveal from nothing. Done before Play so the sentence is already cleared by the time
    // the first word is spoken, rather than blinking away a frame into the narration.
    bRevealActive = false;
    LatestEnvelope = 0.0f;
    ExactWordTimes.Reset();
    bEnvelopeReceived = false;
    SpeechSeconds = 0.0f;
    SpeechHoldRemaining = 0.0f;
    PeakEnvelope = 0.0f;
    DiagSpeechFrames = 0;
    DiagTotalFrames = 0;
    RevealedWords = 0;
    TotalRevealWords = 0;

    if (bRevealTextWithAudio && ActiveExplainUI && TrackToPlay) {
        TotalRevealWords = ActiveExplainUI->GetExplainWordCount();
        if (TotalRevealWords > 0) {
            bRevealActive = true;
            ParseExactWordTimes(TotalRevealWords);
            ActiveExplainUI->SetRevealedWordCount(0);
        }
    }

    if (TrackToPlay && ActiveWidgetComp) {
        EnsureAudioComponent();

        if (ActiveAudioComp) {
            ActiveAudioComp->SetSound(TrackToPlay);
            ActiveAudioComp->Play();
        }
    }
    else if (StepDuration <= 0.0f) {

        bIsStepRunning = false;
        if (ActiveExplainUI) ActiveExplainUI->SetPlaybackCompleted();
    }
}

void UAzr_Explain::EnsureAudioComponent() {
    if (!ActiveWidgetComp) {
        return;
    }

    if (ActiveAudioComp) {
        // An Explain+ chain narrates through a different widget each step, so the one audio component
        // follows whichever is current -- otherwise later steps play from the first step's location.
        if (ActiveAudioComp->GetAttachParent() != ActiveWidgetComp) {
            ActiveAudioComp->AttachToComponent(ActiveWidgetComp, FAttachmentTransformRules::SnapToTargetIncludingScale);
        }
        return;
    }

    ActiveAudioComp = NewObject<UAudioComponent>(GetOwner());
    if (!ActiveAudioComp) {
        return;
    }

    // Built by hand rather than through SpawnSoundAttached, which starts the sound as it creates the
    // component. The envelope feed is decided when a sound starts, from whether the delegate is bound
    // at that instant, so it has to be bound while the component is still silent.
    ActiveAudioComp->bAutoActivate = false;
    ActiveAudioComp->bAutoDestroy = false;
    ActiveAudioComp->SetupAttachment(ActiveWidgetComp);
    ActiveAudioComp->RegisterComponent();

    ActiveAudioComp->OnAudioSingleEnvelopeValue.RemoveDynamic(this, &UAzr_Explain::HandleAudioEnvelope);
    ActiveAudioComp->OnAudioSingleEnvelopeValue.AddDynamic(this, &UAzr_Explain::HandleAudioEnvelope);
}

FString UAzr_Explain::ResolveLanguageString(const FAzr_MultiLangText& MultiLangText) const {
    FString ActiveLanguage = TEXT("English");

    if (UGameInstance* GI = GetWorld() ? GetWorld()->GetGameInstance() : nullptr) {
        if (UAzr_SessionSubsystem* SessionSubsystem = GI->GetSubsystem<UAzr_SessionSubsystem>()) {
            ActiveLanguage = SessionSubsystem->GetSessionLanguage();
        }
    }

    if (ActiveLanguage.Equals(TEXT("Malay"), ESearchCase::IgnoreCase) || ActiveLanguage.Equals(TEXT("ms"), ESearchCase::IgnoreCase)) {
        return MultiLangText.Malay.IsEmpty() ? MultiLangText.English : MultiLangText.Malay;
    }
    if (ActiveLanguage.Equals(TEXT("Tamil"), ESearchCase::IgnoreCase) || ActiveLanguage.Equals(TEXT("ta"), ESearchCase::IgnoreCase)) {
        return MultiLangText.Tamil.IsEmpty() ? MultiLangText.English : MultiLangText.Tamil;
    }

    return MultiLangText.English;
}

void UAzr_Explain::ParseExactWordTimes(int32 ExpectedWordCount) {
    ExactWordTimes.Reset();

    const FString Raw = ResolveLanguageString(CurrentActiveStep.WordTimings);
    if (Raw.TrimStartAndEnd().IsEmpty()) {
        return;
    }

    TArray<FString> Parts;
    Raw.ParseIntoArray(Parts, TEXT(","), true);

    ExactWordTimes.Reserve(Parts.Num());
    for (const FString& Part : Parts) {
        const FString Trimmed = Part.TrimStartAndEnd();
        if (!Trimmed.IsNumeric()) {
            UE_LOG(LogTemp, Warning,
                TEXT("[Azr Reveal] Word Timings contain a non-number ('%s') -- ignoring them and estimating instead."),
                *Trimmed);
            ExactWordTimes.Reset();
            return;
        }
        ExactWordTimes.Add(FCString::Atof(*Trimmed));
    }

    // A count that does not match the sentence on screen means the text was edited after the timings
    // were generated. Using them anyway would put every word after the edit against the wrong sound.
    if (ExactWordTimes.Num() != ExpectedWordCount) {
        UE_LOG(LogTemp, Warning,
            TEXT("[Azr Reveal] Word Timings list has %d entries but the sentence has %d words -- ignoring them and estimating instead. Re-generate the timings for this text."),
            ExactWordTimes.Num(), ExpectedWordCount);
        ExactWordTimes.Reset();
        return;
    }

    for (int32 i = 1; i < ExactWordTimes.Num(); ++i) {
        if (ExactWordTimes[i] < ExactWordTimes[i - 1]) {
            UE_LOG(LogTemp, Warning,
                TEXT("[Azr Reveal] Word Timings go backwards at entry %d -- ignoring them and estimating instead."), i);
            ExactWordTimes.Reset();
            return;
        }
    }
}

void UAzr_Explain::HandleAudioEnvelope(const USoundWave* PlayingSoundWave, const float EnvelopeValue) {
    // Only stored, never acted on here: this arrives on the audio thread's schedule, which is neither
    // the game thread nor a steady rate. The reveal reads it on tick, where DeltaTime is meaningful.
    LatestEnvelope = EnvelopeValue;
    bEnvelopeReceived = true;
}

void UAzr_Explain::UpdateTextReveal(float DeltaTime, float Elapsed) {
    if (!bRevealActive || !ActiveExplainUI || TotalRevealWords <= 0 || StepDuration <= 0.0f) {
        return;
    }

    // With authored timings there is nothing to work out: each word has a moment, and playback either
    // has reached it or has not. Everything below this point exists only to estimate what these
    // timings state outright.
    if (ExactWordTimes.Num() > 0) {
        int32 TargetWords = 0;
        while (TargetWords < ExactWordTimes.Num() && Elapsed >= ExactWordTimes[TargetWords]) {
            ++TargetWords;
        }

        if (TargetWords > RevealedWords) {
            RevealedWords = FMath::Min(TargetWords, TotalRevealWords);
            ActiveExplainUI->SetRevealedWordCount(RevealedWords);
        }
        return;
    }

    // The reveal runs on a clock that only ticks while something is being said. A pause in the
    // narration is a pause in the text, which is what makes the two feel locked together rather than
    // merely finishing at the same time.

    // Quiet is judged against the loudest this clip has been, not a fixed number. Speech envelopes
    // peak nowhere near 1 -- a normal read measures around 0.1 -- so a fixed cutoff generous enough
    // for one asset silences most of the next one.
    PeakEnvelope = FMath::Max(PeakEnvelope, LatestEnvelope);

    // The floor keeps a clip that has only ever been near-silent from treating its own noise as speech.
    const float SilenceCutoff = FMath::Max(PeakEnvelope * SilenceLevel, 0.0015f);
    const bool bSpeaking = (LatestEnvelope > SilenceCutoff);

    // The hold is what keeps this from being twitchy: loudness drops to nothing in the middle of a
    // word every time a stop consonant closes, and reacting to each of those would stutter the text.
    if (bSpeaking) {
        SpeechHoldRemaining = SpeechHoldTime;
    }

    if (bSpeaking || SpeechHoldRemaining > 0.0f) {
        SpeechSeconds += DeltaTime;
        SpeechHoldRemaining = FMath::Max(0.0f, SpeechHoldRemaining - DeltaTime);
        ++DiagSpeechFrames;
    }
    ++DiagTotalFrames;

    const float ElapsedFraction = FMath::Clamp(Elapsed / StepDuration, 0.0f, 1.0f);

    // No loudness readings well after playback began means this platform is not feeding them. Pace on
    // the clip's length instead: evenly spread rather than speech-shaped, but still readable.
    if (!bEnvelopeReceived && Elapsed > 0.5f) {
        // Still length-weighted: without loudness the reveal cannot follow pauses, but it can at least
        // keep giving longer words longer on screen.
        const int32 EvenTarget = ActiveExplainUI->GetWordCountForProgress(ElapsedFraction, WordLengthWeighting);
        if (EvenTarget > RevealedWords) {
            RevealedWords = FMath::Min(EvenTarget, TotalRevealWords);
            ActiveExplainUI->SetRevealedWordCount(RevealedWords);
        }
        return;
    }

    // How much of this clip is speech is not knowable up front, so start from the assumption and hand
    // over to the measured figure across the opening quarter, by which point it has settled.
    const float MeasuredRatio = (Elapsed > KINDA_SMALL_NUMBER) ? (SpeechSeconds / Elapsed) : AssumedSpeechRatio;
    const float SpeechRatio = FMath::Lerp(AssumedSpeechRatio, MeasuredRatio, FMath::Clamp(ElapsedFraction * 4.0f, 0.0f, 1.0f));

    const float TotalSpeechSeconds = StepDuration * FMath::Max(SpeechRatio, KINDA_SMALL_NUMBER);
    float RevealFraction = FMath::Clamp(SpeechSeconds / TotalSpeechSeconds, 0.0f, 1.0f);

    // Pull towards the clip's own clock as it runs out, so the final word lands with the final sound
    // even if the speech estimate drifted. Confined to the closing stretch: applied any earlier it
    // competes with the speech clock through the body of the sentence and visibly hurries the text.
    const float EndPull = FMath::SmoothStep(0.85f, 1.0f, ElapsedFraction);
    RevealFraction = FMath::Lerp(RevealFraction, ElapsedFraction, EndPull);

    const int32 TargetWords = ActiveExplainUI->GetWordCountForProgress(RevealFraction, WordLengthWeighting);
    if (TargetWords > RevealedWords) {
        RevealedWords = FMath::Min(TargetWords, TotalRevealWords);
        ActiveExplainUI->SetRevealedWordCount(RevealedWords);
    }
}

void UAzr_Explain::HandleProceedClicked() {

    if (!bIsActive) return;

    // 1. Single Explain (No Output)
    if (CurrentStepType == EAzr_ExplainStepType::Single) {
        DisableExplain();
    }
    // 2. Start Step (Outputs 1)
    else if (CurrentStepType == EAzr_ExplainStepType::Start) {
        OnExplainPlusCompleted.Broadcast(1);

        if (MiddleSteps.Num() > 0) {
            CurrentMiddleIndex = 0;
            LoadStep(MiddleSteps[CurrentMiddleIndex], EAzr_ExplainStepType::Middle);
        }
        else {
            LoadStep(EndStep, EAzr_ExplainStepType::End); // Safe fallback if no middle steps exist!
        }
    }
    // 3. Middle Steps (Outputs 2, 3, 4...)
    else if (CurrentStepType == EAzr_ExplainStepType::Middle) {
        OnExplainPlusCompleted.Broadcast(2 + CurrentMiddleIndex);

        CurrentMiddleIndex++;
        if (CurrentMiddleIndex < MiddleSteps.Num()) {
            LoadStep(MiddleSteps[CurrentMiddleIndex], EAzr_ExplainStepType::Middle);
        }
        else {
            LoadStep(EndStep, EAzr_ExplainStepType::End);
        }
    }
    // 4. End Step (Outputs Final Count)
    else if (CurrentStepType == EAzr_ExplainStepType::End) {
        OnExplainPlusCompleted.Broadcast(2 + MiddleSteps.Num());
        DisableExplain();
    }
}

// --- VISUAL HELPERS ---

void UAzr_Explain::EnsureInitialized() {
    if (!GetOwner() || !GetOwner()->GetRootComponent()) return;

    if (StartAnchor->GetAttachParent() == nullptr) {
        StartAnchor->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
        EndAnchor->AttachToComponent(GetOwner()->GetRootComponent(), FAttachmentTransformRules::SnapToTargetNotIncludingScale);
        TetherCable->AttachToComponent(StartAnchor, FAttachmentTransformRules::SnapToTargetNotIncludingScale);
    }
}

void UAzr_Explain::UpdatePointer(bool bIsActiveMode) {
    if (UAzr_Pointer* Pointer = FindPlayerPointer()) {
        if (bIsActiveMode) {
            USceneComponent* Target = nullptr;

            // --- THE FIX: ROUTE THE POINTER BASED ON THE CURRENT STEP'S ENUM ---
            if (CurrentActiveStep.PointerTarget == EAzr_PointerTarget::Widget && ActiveWidgetComp)
            {
                Target = ActiveWidgetComp;
            }
            else
            {
                Target = TargetMesh ? Cast<USceneComponent>(TargetMesh) : GetOwner()->GetRootComponent();
            }

            Pointer->EnablePointer_TargetComponent(Target);
        }
        else {
            Pointer->DisablePointer();
        }
    }
}

void UAzr_Explain::ToggleTether(bool bState) {
    if (!bState || !CurrentActiveStep.TetherSettings.bEnableTether) {
        StartAnchor->SetVisibility(false);
        EndAnchor->SetVisibility(false);
        TetherCable->SetVisibility(false);
        return;
    }

    USceneComponent* MeshTarget = TargetMesh ? Cast<USceneComponent>(TargetMesh) : GetOwner()->GetRootComponent();
    USceneComponent* WidgetTarget = ActiveWidgetComp;

    if (!MeshTarget || !WidgetTarget) return;

    if (CurrentActiveStep.TetherSettings.AnchorMesh) {
        StartAnchor->SetStaticMesh(CurrentActiveStep.TetherSettings.AnchorMesh);
        EndAnchor->SetStaticMesh(CurrentActiveStep.TetherSettings.AnchorMesh);
    }

    StartAnchor->SetWorldScale3D(FVector(CurrentActiveStep.TetherSettings.AnchorScale));
    EndAnchor->SetWorldScale3D(FVector(CurrentActiveStep.TetherSettings.AnchorScale));

    if (CurrentActiveStep.TetherSettings.CableMaterial) {
        TetherCable->SetMaterial(0, CurrentActiveStep.TetherSettings.CableMaterial);
    }

    // Assign the Width
    TetherCable->CableWidth = CurrentActiveStep.TetherSettings.CableWidth;

    bool bStartCorrect = (StartAnchor->GetAttachParent() == MeshTarget);
    bool bEndCorrect = (EndAnchor->GetAttachParent() == WidgetTarget);

    if (!bStartCorrect || !bEndCorrect) {
        FVector StartPos = CalculateSurfaceAnchor(MeshTarget, CurrentActiveStep.TetherSettings.MeshAnchorPos, CurrentActiveStep.TetherSettings);
        FVector EndPos = CalculateSurfaceAnchor(WidgetTarget, CurrentActiveStep.TetherSettings.WidgetAnchorPos, CurrentActiveStep.TetherSettings);

        if (!bStartCorrect) StartAnchor->AttachToComponent(MeshTarget, FAttachmentTransformRules::KeepWorldTransform);
        if (!bEndCorrect) EndAnchor->AttachToComponent(WidgetTarget, FAttachmentTransformRules::KeepWorldTransform);

        StartAnchor->SetWorldLocation(StartPos);
        EndAnchor->SetWorldLocation(EndPos);
    }

    
    TetherCable->SetAttachEndToComponent(EndAnchor);
    TetherCable->SetRelativeLocation(FVector::ZeroVector);
    TetherCable->EndLocation = FVector::ZeroVector;

    // --- THE FIX: NUKE ALL COLLISION ---
    TetherCable->SetCollisionEnabled(ECollisionEnabled::NoCollision);
    TetherCable->SetCollisionResponseToAllChannels(ECR_Ignore);
    TetherCable->bEnableCollision = false;

    // --- NEW: PERCENTAGE MATH & STIFF HANG ---
    float HangPercentage = CurrentActiveStep.TetherSettings.CableHang / 100.0f;
    float InitialDist = FVector::Dist(StartAnchor->GetComponentLocation(), EndAnchor->GetComponentLocation());

    if (HangPercentage <= 0.001f) {
        // 0% Hang = 1 Segment Straight Line
        TetherCable->NumSegments = 1;
        TetherCable->CableLength = InitialDist;
        TetherCable->CableGravityScale = 0.0f;
        TetherCable->bEnableStiffness = false;
    }
    else {
        // > 0% Hang = 20 Segments
        TetherCable->NumSegments = 20;

        // Calculate slack based on the percentage of the distance!
        float SlackAmount = InitialDist * HangPercentage;
        TetherCable->CableLength = InitialDist + SlackAmount;

        // Gentle gravity scaling based on percentage
        TetherCable->CableGravityScale = FMath::Clamp(HangPercentage * 0.5f, 0.01f, 0.5f);

        // --- THE STIFF HANG FIX ---
        // Force the cable to act like a solid bendable wire instead of a bouncy string
        TetherCable->bEnableStiffness = true;

        // Crank the solver to instantly resolve physics and kill momentum/wobble
        TetherCable->SolverIterations = 16;
    }

    TetherCable->RecreatePhysicsState();

    // Turn on the Anchors immediately
    StartAnchor->SetVisibility(true);
    EndAnchor->SetVisibility(true);

    // --- THE FIX: THE INVISIBILITY CLOAK ---
    // Keep the cable hidden while the physics solver settles the initial teleport momentum
    TetherCable->SetVisibility(false);

    if (UWorld* World = GetWorld()) {
        FTimerHandle SettleTimer;
        World->GetTimerManager().SetTimer(SettleTimer, FTimerDelegate::CreateWeakLambda(this, [this]() {
            // Only turn it on if the Explain UI is still active (prevents bugs if player closed it instantly)
            if (bIsActive && TetherCable) {
                TetherCable->SetVisibility(true);
            }
            }), 0.20f, false);
    }
}

void UAzr_Explain::ToggleHighlight(bool bState) {
    if (CurrentActiveStep.HighlightMode == EAzr_HighlightMode::None) return;

    TArray<UMeshComponent*> Meshes;
    if (CurrentActiveStep.HighlightMode == EAzr_HighlightMode::AllComponents) {
        AActor* SearchActor = CurrentActiveStep.ExternalTargetActor.IsValid() ? CurrentActiveStep.ExternalTargetActor.Get() : GetOwner();

        if (SearchActor) {
            SearchActor->GetComponents(Meshes);
        }
    }
    else if (TargetMesh) {
        Meshes.Add(Cast<UMeshComponent>(TargetMesh));
    }

    if (ActiveWidgetComp) {
        Meshes.AddUnique(ActiveWidgetComp);
    }

    for (UMeshComponent* Mesh : Meshes) {
        if (Mesh && Mesh != StartAnchor && Mesh != EndAnchor) {
            Mesh->SetRenderCustomDepth(bState);
            Mesh->SetCustomDepthStencilValue(StencilID);
        }
    }
}

// --- MATH & UTILS ---

FVector UAzr_Explain::CalculateSurfaceAnchor(USceneComponent* Target, EAzr_TetherPos Pos, const FAzr_TetherConfig& Config) {
    if (!Target) return FVector::ZeroVector;

    if (UWidgetComponent* WidgetComp = Cast<UWidgetComponent>(Target)) {
        FVector2D DrawSize = WidgetComp->GetCurrentDrawSize();
        FVector Scale = WidgetComp->GetComponentScale();
        FVector2D Pivot = WidgetComp->GetPivot();

        float WorldHalfWidth = (DrawSize.X * 0.5f) * Scale.Y;
        float WorldHalfHeight = (DrawSize.Y * 0.5f) * Scale.Z;

        FVector Center = WidgetComp->GetComponentLocation();
        FVector RightVec = WidgetComp->GetRightVector();
        FVector UpVec = WidgetComp->GetUpVector();
        FVector ForwardVec = WidgetComp->GetForwardVector();

        float PivotShiftX = (0.5f - Pivot.X) * (DrawSize.X * Scale.Y);
        float PivotShiftY = (0.5f - Pivot.Y) * (DrawSize.Y * Scale.Z);
        FVector VisualCenter = Center + (RightVec * PivotShiftX) + (UpVec * PivotShiftY);

        switch (Pos) {
        case EAzr_TetherPos::Top: return VisualCenter + (UpVec * (WorldHalfHeight + Config.WidgetGap_Vertical));
        case EAzr_TetherPos::Bottom: return VisualCenter - (UpVec * (WorldHalfHeight + Config.WidgetGap_Vertical));
        case EAzr_TetherPos::Right: return VisualCenter + (RightVec * (WorldHalfWidth + Config.WidgetGap_Horizontal));
        case EAzr_TetherPos::Left: return VisualCenter - (RightVec * (WorldHalfWidth + Config.WidgetGap_Horizontal));
        case EAzr_TetherPos::Front: return VisualCenter + (ForwardVec * 1.0f);
        case EAzr_TetherPos::Back: return VisualCenter - (ForwardVec * 1.0f);
        default: return VisualCenter;
        }
    }

    FBoxSphereBounds LocalBounds = Target->CalcLocalBounds();
    FVector WorldCenter = Target->GetComponentTransform().TransformPosition(LocalBounds.Origin);
    FVector ForwardVec = Target->GetForwardVector();
    FVector RightVec = Target->GetRightVector();
    FVector UpVec = Target->GetUpVector();
    FVector Scale = Target->GetComponentScale();

    float WorldHalfDepth = LocalBounds.BoxExtent.X * FMath::Abs(Scale.X);
    float WorldHalfWidth = LocalBounds.BoxExtent.Y * FMath::Abs(Scale.Y);
    float WorldHalfHeight = LocalBounds.BoxExtent.Z * FMath::Abs(Scale.Z);

    FVector SurfacePush = FVector::ZeroVector;

    switch (Pos) {
    case EAzr_TetherPos::Top: SurfacePush = UpVec * (WorldHalfHeight + Config.MeshSurfaceOffset); break;
    case EAzr_TetherPos::Bottom: SurfacePush = -UpVec * (WorldHalfHeight + Config.MeshSurfaceOffset); break;
    case EAzr_TetherPos::Right: SurfacePush = RightVec * (WorldHalfWidth + Config.MeshSurfaceOffset); break;
    case EAzr_TetherPos::Left: SurfacePush = -RightVec * (WorldHalfWidth + Config.MeshSurfaceOffset); break;
    case EAzr_TetherPos::Front: SurfacePush = ForwardVec * (WorldHalfDepth + Config.MeshSurfaceOffset); break;
    case EAzr_TetherPos::Back: SurfacePush = -ForwardVec * (WorldHalfDepth + Config.MeshSurfaceOffset); break;
    default: break;
    }

    return WorldCenter + SurfacePush + (UpVec * Config.MeshOffset_Vertical) + (RightVec * Config.MeshOffset_Horizontal);
}

UPrimitiveComponent* UAzr_Explain::FindMeshByName(FName Name) {
    if (Name.IsNone()) return nullptr;

    // THE FIX: Use .Get() to resolve the Soft Pointer safely
    AActor* SearchActor = CurrentActiveStep.ExternalTargetActor.IsValid() ? CurrentActiveStep.ExternalTargetActor.Get() : GetOwner();

    if (!SearchActor) return nullptr;

    return Azr::FindComponentByName<UPrimitiveComponent>(SearchActor, Name);
}

UWidgetComponent* UAzr_Explain::FindWidgetByName(FName Name) {
    if (Name.IsNone() || !GetOwner()) return nullptr;
    return Azr::FindComponentByName<UWidgetComponent>(GetOwner(), Name);
}

UAzr_Pointer* UAzr_Explain::FindPlayerPointer() const {
    if (APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(this, 0)) {
        return PlayerPawn->FindComponentByClass<UAzr_Pointer>();
    }
    return nullptr;
}
