// Copyright Virtual X Sdn Bhd. All Rights Reserved.

#include "Azr_NarrationGenerator.h"

#include "Azr_NarrationSettings.h"
#include "Azr_Types.h"

#include "AssetImportTask.h"
#include "AssetToolsModule.h"
#include "Dom/JsonObject.h"
#include "HttpModule.h"
#include "HttpManager.h"
#include "IAssetTools.h"
#include "Interfaces/IHttpRequest.h"
#include "Interfaces/IHttpResponse.h"
#include "Internationalization/TextChar.h"
#include "Misc/Base64.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"
#include "ObjectTools.h"
#include "PropertyHandle.h"
#include "Serialization/JsonReader.h"
#include "Serialization/JsonSerializer.h"
#include "Sound/SoundBase.h"

#define LOCTEXT_NAMESPACE "AzurealXREditor"

namespace
{
	/**
	 * Best quality first, ending on an mp3 that every subscription tier allows.
	 *
	 * Which formats a key may use depends on its subscription, and that is not knowable without asking,
	 * so rather than make the developer guess we walk down until one is granted. Unreal 5.8 imports mp3
	 * directly, so the last rung needs no conversion step, and the timings are unaffected either way --
	 * they come from the alignment data, not from the audio file.
	 */
	const TCHAR* const FormatLadder[] =
	{
		TEXT("pcm_44100"),
		TEXT("pcm_24000"),
		TEXT("pcm_22050"),
		TEXT("pcm_16000"),
		TEXT("mp3_44100_128"),
	};

	void AppendUInt32(TArray<uint8>& Bytes, uint32 Value)
	{
		Bytes.Add(static_cast<uint8>(Value & 0xFF));
		Bytes.Add(static_cast<uint8>((Value >> 8) & 0xFF));
		Bytes.Add(static_cast<uint8>((Value >> 16) & 0xFF));
		Bytes.Add(static_cast<uint8>((Value >> 24) & 0xFF));
	}

	void AppendUInt16(TArray<uint8>& Bytes, uint16 Value)
	{
		Bytes.Add(static_cast<uint8>(Value & 0xFF));
		Bytes.Add(static_cast<uint8>((Value >> 8) & 0xFF));
	}

	void AppendTag(TArray<uint8>& Bytes, const ANSICHAR* Tag)
	{
		for (int32 i = 0; i < 4; ++i)
		{
			Bytes.Add(static_cast<uint8>(Tag[i]));
		}
	}

	/** A single alignment entry is one character; anything blank counts as a word separator. */
	bool IsSeparator(const FString& Character)
	{
		return Character.IsEmpty() || FTextChar::IsWhitespace(Character[0]);
	}

	/** How a run down the format ladder ended. */
	enum class ELadderOutcome : uint8
	{
		Success,
		/** The account has no voice with that id -- worth trying to read it as a name instead. */
		VoiceNotFound,
		/** Failed for a reason retrying cannot help with; the message has already been written. */
		Aborted
	};

	/** One voice on the account. Category matters: only premade voices work on a free subscription. */
	struct FVoiceEntry
	{
		FString Name;
		FString Id;
		FString Category;
	};

	/**
	 * Ask the account what voices it has.
	 *
	 * The API addresses voices by id, but the id is a token nobody can recognise and the dashboard puts
	 * the name front and centre -- so a name in the settings box is the expected mistake, not an odd
	 * one. This costs one request and only runs once something has already gone wrong.
	 */
	bool FetchVoices(const FString& ApiKey, TArray<FVoiceEntry>& OutVoices)
	{
		OutVoices.Reset();

		const TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
		Request->SetVerb(TEXT("GET"));
		Request->SetURL(TEXT("https://api.elevenlabs.io/v1/voices"));
		Request->SetHeader(TEXT("xi-api-key"), ApiKey);
		Request->SetTimeout(30.0f);

		if (!Request->ProcessRequest())
		{
			return false;
		}
		FHttpModule::Get().GetHttpManager().Flush(EHttpFlushReason::FullFlush);

		const FHttpResponsePtr Response = Request->GetResponse();
		if (!Response.IsValid() || Response->GetResponseCode() != 200)
		{
			return false;
		}

		TSharedPtr<FJsonObject> Root;
		const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
		if (!FJsonSerializer::Deserialize(Reader, Root) || !Root.IsValid())
		{
			return false;
		}

		const TArray<TSharedPtr<FJsonValue>>* Voices = nullptr;
		if (!Root->TryGetArrayField(TEXT("voices"), Voices))
		{
			return false;
		}

		for (const TSharedPtr<FJsonValue>& Value : *Voices)
		{
			const TSharedPtr<FJsonObject> VoiceObject = Value.IsValid() ? Value->AsObject() : nullptr;
			if (!VoiceObject.IsValid())
			{
				continue;
			}

			FVoiceEntry Entry;
			VoiceObject->TryGetStringField(TEXT("name"), Entry.Name);
			VoiceObject->TryGetStringField(TEXT("voice_id"), Entry.Id);
			VoiceObject->TryGetStringField(TEXT("category"), Entry.Category);

			if (!Entry.Name.IsEmpty())
			{
				OutVoices.Add(MoveTemp(Entry));
			}
		}

		return OutVoices.Num() > 0;
	}

	/** Names of the voices a free subscription may actually drive through the API. */
	FString DescribePremadeVoices(const TArray<FVoiceEntry>& Voices)
	{
		TArray<FString> Names;
		for (const FVoiceEntry& Entry : Voices)
		{
			if (Entry.Category.Equals(TEXT("premade"), ESearchCase::IgnoreCase))
			{
				Names.Add(Entry.Name);
			}
		}

		return Names.Num() > 0 ? FString::Join(Names, TEXT(", ")) : FString();
	}
}

int32 FAzr_NarrationGenerator::CountWords(const FString& Text)
{
	int32 Count = 0;
	bool bInWord = false;

	for (int32 i = 0; i < Text.Len(); ++i)
	{
		if (FTextChar::IsWhitespace(Text[i]))
		{
			bInWord = false;
		}
		else if (!bInWord)
		{
			++Count;
			bInWord = true;
		}
	}

	return Count;
}

FString FAzr_NarrationGenerator::MakeWordTimingsCsv(const TArray<FString>& Characters, const TArray<double>& StartTimes, const TArray<double>& EndTimes, int32& OutWordCount)
{
	FString Csv;
	OutWordCount = 0;

	bool bInWord = false;
	double WordStart = 0.0;
	double WordEnd = 0.0;

	// Both ends of a word are recorded, not just where it begins. The gap to the next word is not the
	// same as the word's own length -- the difference is any pause after it -- and the reveal cannot
	// tell those apart from start times alone.
	auto FinishWord = [&Csv, &OutWordCount, &bInWord, &WordStart, &WordEnd]()
	{
		if (!bInWord)
		{
			return;
		}

		if (OutWordCount > 0)
		{
			Csv.AppendChar(TEXT(','));
		}
		Csv.Append(FString::Printf(TEXT("%.3f:%.3f"), WordStart, WordEnd));

		++OutWordCount;
		bInWord = false;
	};

	for (int32 i = 0; i < Characters.Num(); ++i)
	{
		if (IsSeparator(Characters[i]))
		{
			FinishWord();
			continue;
		}

		if (!bInWord)
		{
			// The first character of a word is the instant that word begins being spoken.
			WordStart = StartTimes.IsValidIndex(i) ? StartTimes[i] : 0.0;
			bInWord = true;
		}

		// Carried forward so that whichever character turns out to be the word's last leaves its end
		// time behind.
		WordEnd = EndTimes.IsValidIndex(i) ? EndTimes[i] : WordStart;
	}

	FinishWord();

	return Csv;
}

void FAzr_NarrationGenerator::WrapPcmAsWav(const TArray<uint8>& PcmBytes, int32 SampleRate, TArray<uint8>& OutWavBytes)
{
	const uint32 DataSize = static_cast<uint32>(PcmBytes.Num());
	const uint16 Channels = 1;
	const uint16 BitsPerSample = 16;
	const uint16 BlockAlign = Channels * BitsPerSample / 8;

	OutWavBytes.Reset(44 + PcmBytes.Num());

	AppendTag(OutWavBytes, "RIFF");
	AppendUInt32(OutWavBytes, 36 + DataSize);
	AppendTag(OutWavBytes, "WAVE");

	AppendTag(OutWavBytes, "fmt ");
	AppendUInt32(OutWavBytes, 16);                                  // size of this chunk
	AppendUInt16(OutWavBytes, 1);                                   // uncompressed PCM
	AppendUInt16(OutWavBytes, Channels);
	AppendUInt32(OutWavBytes, static_cast<uint32>(SampleRate));
	AppendUInt32(OutWavBytes, static_cast<uint32>(SampleRate) * BlockAlign);
	AppendUInt16(OutWavBytes, BlockAlign);
	AppendUInt16(OutWavBytes, BitsPerSample);

	AppendTag(OutWavBytes, "data");
	AppendUInt32(OutWavBytes, DataSize);

	OutWavBytes.Append(PcmBytes);
}

FAzr_NarrationResult FAzr_NarrationGenerator::Generate(const FString& Text, const FString& AssetBaseName)
{
	FAzr_NarrationResult Result;

	const FString Trimmed = Text.TrimStartAndEnd();
	if (Trimmed.IsEmpty())
	{
		Result.Outcome = EAzr_NarrationOutcome::NoText;
		Result.Message = LOCTEXT("NoText", "This step has no English text to narrate.");
		return Result;
	}

	// Voice comes from the project so every developer generates the same read; the key comes from the
	// developer, so it never reaches the repository.
	const UAzr_NarrationProjectSettings* Voice = GetDefault<UAzr_NarrationProjectSettings>();
	const UAzr_NarrationSettings* Settings = GetDefault<UAzr_NarrationSettings>();

	const FString ApiKey = Settings->ResolveApiKey();
	if (ApiKey.IsEmpty())
	{
		Result.Message = LOCTEXT("NoApiKey",
			"No ElevenLabs API key. Set the ELEVENLABS_API_KEY environment variable, or fill it in under Edit, Editor Preferences, Plugins, AzurealXR Narration (API Key).");
		return Result;
	}

	// --- REQUEST BODY ---
	const TSharedRef<FJsonObject> VoiceSettings = MakeShared<FJsonObject>();
	VoiceSettings->SetNumberField(TEXT("stability"), Voice->Stability);
	VoiceSettings->SetNumberField(TEXT("similarity_boost"), Voice->SimilarityBoost);
	VoiceSettings->SetNumberField(TEXT("style"), Voice->Style);
	VoiceSettings->SetNumberField(TEXT("speed"), Voice->Speed);
	VoiceSettings->SetBoolField(TEXT("use_speaker_boost"), Voice->bUseSpeakerBoost);

	const TSharedRef<FJsonObject> Payload = MakeShared<FJsonObject>();
	Payload->SetStringField(TEXT("text"), Trimmed);
	Payload->SetStringField(TEXT("model_id"), Voice->ModelId);
	Payload->SetObjectField(TEXT("voice_settings"), VoiceSettings);
	if (Voice->Seed > 0)
	{
		Payload->SetNumberField(TEXT("seed"), Voice->Seed);
	}

	FString Body;
	const TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
	FJsonSerializer::Serialize(Payload, Writer);

	// --- CALL, WALKING DOWN THE FORMAT LADDER ---
	FString ResponseBody;
	FString GrantedFormat;
	FString LastError;

	auto RunFormatLadder = [&](const FString& VoiceIdToUse) -> ELadderOutcome
	{
		ResponseBody.Reset();
		GrantedFormat.Reset();
		LastError.Reset();

		for (const TCHAR* const Format : FormatLadder)
		{
			const FString Url = FString::Printf(
				TEXT("https://api.elevenlabs.io/v1/text-to-speech/%s/with-timestamps?output_format=%s"),
				*VoiceIdToUse, Format);

			const TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
			Request->SetVerb(TEXT("POST"));
			Request->SetURL(Url);
			Request->SetHeader(TEXT("xi-api-key"), ApiKey);
			Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
			Request->SetContentAsString(Body);

			// The flush below is documented as an infinite wait, so without a timeout on the request a
			// server that never answers freezes the editor with no way out but the task manager.
			Request->SetTimeout(120.0f);

			if (!Request->ProcessRequest())
			{
				Result.Message = LOCTEXT("RequestFailed", "Could not start the request to ElevenLabs.");
				return ELadderOutcome::Aborted;
			}

			// Blocking on purpose. This is a button in the editor, not gameplay, and waiting here keeps
			// the whole flow -- call, import, write back -- in one readable place.
			FHttpModule::Get().GetHttpManager().Flush(EHttpFlushReason::FullFlush);

			const FHttpResponsePtr Response = Request->GetResponse();
			if (!Response.IsValid())
			{
				Result.Message = LOCTEXT("NoResponse", "ElevenLabs did not respond. Check the network connection.");
				return ELadderOutcome::Aborted;
			}

			const int32 Code = Response->GetResponseCode();
			const FString Content = Response->GetContentAsString();

			if (Code == 200)
			{
				ResponseBody = Content;
				GrantedFormat = Format;
				return ELadderOutcome::Success;
			}

			// Only a tier refusal is worth stepping down for. A bad key, voice or text fails identically
			// at every rung, so those stop here rather than walking the whole ladder and reporting the
			// last one.
			if (Content.Contains(TEXT("output_format_not_allowed")))
			{
				UE_LOG(LogTemp, Log, TEXT("[Azr Narration] %s is not on this subscription, trying the next format down."), Format);
				LastError = Content;
				continue;
			}

			// Not an error yet: the caller will try reading the setting as a voice name instead.
			if (Content.Contains(TEXT("voice_not_found")))
			{
				return ELadderOutcome::VoiceNotFound;
			}

			// The dashboard lists keys by ID and only ever shows the key itself at the moment it is
			// created, so copying the wrong one of the two is the easy mistake to make. Worth saying
			// plainly rather than handing back the raw JSON and letting the reader work it out.
			if (Content.Contains(TEXT("api_key_id_used_as_api_key")))
			{
				Result.Message = LOCTEXT("ApiKeyIdUsed",
					"That is the key's ID, not the key. ElevenLabs shows the key itself only once, when it is created or rotated, and it starts with 'sk_'. Create a new key, copy it on that screen, and paste it into Editor Preferences, Plugins, AzurealXR Narration (API Key).");
				return ELadderOutcome::Aborted;
			}

			if (Content.Contains(TEXT("authentication_error")) || Code == 401)
			{
				Result.Message = LOCTEXT("AuthError",
					"ElevenLabs rejected the API key. Check it in Editor Preferences, Plugins, AzurealXR Narration (API Key) -- or in ELEVENLABS_API_KEY, which is used in preference to it when set.");
				return ELadderOutcome::Aborted;
			}

			// A free subscription may only drive the built-in premade voices through the API. Anything
			// added from the Voice Library works on the website and then fails here, which reads as the
			// tool being broken rather than the plan being wrong -- so name the actual constraint, and
			// say which voices this account can in fact use.
			if (Content.Contains(TEXT("paid_plan_required")) || Code == 402)
			{
				TArray<FVoiceEntry> Available;
				FetchVoices(ApiKey, Available);
				const FString Premade = DescribePremadeVoices(Available);

				Result.Message = Premade.IsEmpty()
					? LOCTEXT("PaidPlanRequired",
						"This voice needs a paid ElevenLabs plan: free accounts can only use the built-in premade voices through the API. Pick a premade voice in Project Settings, Plugins, AzurealXR Narration.")
					: FText::Format(
						LOCTEXT("PaidPlanRequiredWithList",
							"This voice needs a paid ElevenLabs plan: free accounts can only use the built-in premade voices through the API. Ones this account can use: {0}. Set one in Project Settings, Plugins, AzurealXR Narration."),
						FText::FromString(Premade.Left(400)));
				return ELadderOutcome::Aborted;
			}

			if (Code == 429)
			{
				Result.Message = LOCTEXT("RateLimited",
					"ElevenLabs is rate limiting or the account is out of credits. Nothing was written to this step.");
				return ELadderOutcome::Aborted;
			}

			Result.Message = FText::Format(
				LOCTEXT("HttpError", "ElevenLabs refused the request (HTTP {0}). {1}"),
				FText::AsNumber(Code), FText::FromString(Content.Left(300)));
			return ELadderOutcome::Aborted;
		}

		Result.Message = FText::Format(
			LOCTEXT("AllFormatsRefused", "Every output format was refused. Check the subscription on this key. {0}"),
			FText::FromString(LastError.Left(300)));
		return ELadderOutcome::Aborted;
	};

	const FString ConfiguredVoice = Voice->VoiceId.TrimStartAndEnd();
	FString ResolvedFromName;

	ELadderOutcome Outcome = RunFormatLadder(ConfiguredVoice);

	// The setting is documented as a voice id, but the dashboard shows names, so a name is what tends to
	// end up in the box. Rather than send the developer off to hunt for a token, read it as a name and
	// carry on -- then say which id it turned out to be, so it can be pasted in and the lookup skipped.
	if (Outcome == ELadderOutcome::VoiceNotFound)
	{
		TArray<FVoiceEntry> Available;
		FetchVoices(ApiKey, Available);

		const FVoiceEntry* Match = Available.FindByPredicate([&ConfiguredVoice](const FVoiceEntry& Entry)
		{
			return Entry.Name.Equals(ConfiguredVoice, ESearchCase::IgnoreCase);
		});

		if (Match)
		{
			UE_LOG(LogTemp, Log, TEXT("[Azr Narration] '%s' is a voice name, not an id; using %s."),
				*ConfiguredVoice, *Match->Id);

			ResolvedFromName = Match->Id;
			Outcome = RunFormatLadder(Match->Id);
		}
		else
		{
			TArray<FString> Names;
			for (const FVoiceEntry& Entry : Available)
			{
				Names.Add(Entry.Name);
			}

			const FString NameList = Names.Num() > 0
				? FString::Join(Names, TEXT(", "))
				: FString(TEXT("(the voice list could not be read)"));

			Result.Message = FText::Format(
				LOCTEXT("VoiceNotFound",
					"No voice called '{0}' on this account. Available: {1}. Set one of those, or its voice id, in Project Settings, Plugins, AzurealXR Narration."),
				FText::FromString(ConfiguredVoice), FText::FromString(NameList.Left(400)));
			return Result;
		}
	}

	if (Outcome != ELadderOutcome::Success)
	{
		return Result;
	}

	// --- PARSE ---
	TSharedPtr<FJsonObject> Root;
	const TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ResponseBody);
	if (!FJsonSerializer::Deserialize(Reader, Root) || !Root.IsValid())
	{
		Result.Message = LOCTEXT("BadJson", "ElevenLabs returned something that is not valid JSON.");
		return Result;
	}

	FString AudioBase64;
	if (!Root->TryGetStringField(TEXT("audio_base64"), AudioBase64) || AudioBase64.IsEmpty())
	{
		Result.Message = LOCTEXT("NoAudio", "The response carried no audio.");
		return Result;
	}

	// 'alignment' follows the text as submitted. 'normalized_alignment' follows the SPOKEN expansion,
	// where "11kV" becomes "eleven kilovolts" -- more characters than the sentence on screen, so its
	// indices would not correspond to the words the widget displays.
	const TSharedPtr<FJsonObject>* Alignment = nullptr;
	if (!Root->TryGetObjectField(TEXT("alignment"), Alignment) || !Alignment || !Alignment->IsValid())
	{
		Result.Message = LOCTEXT("NoAlignment", "The response carried no timing data, so the reveal would have nothing exact to follow.");
		return Result;
	}

	TArray<FString> Characters;
	TArray<double> StartTimes;
	TArray<double> EndTimes;
	{
		const TArray<TSharedPtr<FJsonValue>>* CharacterValues = nullptr;
		const TArray<TSharedPtr<FJsonValue>>* StartValues = nullptr;
		const TArray<TSharedPtr<FJsonValue>>* EndValues = nullptr;

		if (!(*Alignment)->TryGetArrayField(TEXT("characters"), CharacterValues) ||
			!(*Alignment)->TryGetArrayField(TEXT("character_start_times_seconds"), StartValues) ||
			!(*Alignment)->TryGetArrayField(TEXT("character_end_times_seconds"), EndValues))
		{
			Result.Message = LOCTEXT("BadAlignment", "The timing data was not in the expected shape.");
			return Result;
		}

		Characters.Reserve(CharacterValues->Num());
		for (const TSharedPtr<FJsonValue>& Value : *CharacterValues)
		{
			Characters.Add(Value.IsValid() ? Value->AsString() : FString());
		}

		StartTimes.Reserve(StartValues->Num());
		for (const TSharedPtr<FJsonValue>& Value : *StartValues)
		{
			StartTimes.Add(Value.IsValid() ? Value->AsNumber() : 0.0);
		}

		EndTimes.Reserve(EndValues->Num());
		for (const TSharedPtr<FJsonValue>& Value : *EndValues)
		{
			EndTimes.Add(Value.IsValid() ? Value->AsNumber() : 0.0);
		}
	}

	int32 TimedWords = 0;
	const FString Csv = MakeWordTimingsCsv(Characters, StartTimes, EndTimes, TimedWords);
	const int32 ExpectedWords = CountWords(Trimmed);

	if (TimedWords != ExpectedWords)
	{
		// Refused rather than saved. Timings the runtime will reject are worse than none: the audio
		// would be assigned, the reveal would silently fall back to estimating, and nobody would know
		// why that one line drifts.
		Result.Message = FText::Format(
			LOCTEXT("WordCountMismatch",
				"The timings came back with {0} words but the text has {1}. Check for unusual punctuation or stray whitespace, then generate again."),
			FText::AsNumber(TimedWords), FText::AsNumber(ExpectedWords));
		return Result;
	}

	// --- AUDIO TO DISK ---
	TArray<uint8> AudioBytes;
	if (!FBase64::Decode(AudioBase64, AudioBytes) || AudioBytes.Num() == 0)
	{
		Result.Message = LOCTEXT("BadAudioEncoding", "The audio could not be decoded.");
		return Result;
	}

	FString Extension = TEXT("mp3");
	if (GrantedFormat.StartsWith(TEXT("pcm_")))
	{
		const int32 SampleRate = FCString::Atoi(*GrantedFormat.RightChop(4));

		TArray<uint8> WavBytes;
		WrapPcmAsWav(AudioBytes, SampleRate, WavBytes);
		AudioBytes = MoveTemp(WavBytes);
		Extension = TEXT("wav");
	}

	const FString SafeName = ObjectTools::SanitizeObjectName(AssetBaseName);
	const FString SourcePath = FPaths::ConvertRelativePathToFull(
		FPaths::ProjectIntermediateDir() / TEXT("AzrNarration") / (SafeName + TEXT(".") + Extension));

	if (!FFileHelper::SaveArrayToFile(AudioBytes, *SourcePath))
	{
		Result.Message = FText::Format(LOCTEXT("SaveFailed", "Could not write the audio to {0}."), FText::FromString(SourcePath));
		return Result;
	}

	// --- IMPORT ---
	FString DestinationPath = Voice->NarrationFolder.Path;
	if (DestinationPath.IsEmpty())
	{
		DestinationPath = TEXT("/Game/Narration");
	}

	UAssetImportTask* Task = NewObject<UAssetImportTask>();
	Task->Filename = SourcePath;
	Task->DestinationPath = DestinationPath;
	Task->DestinationName = SafeName;
	Task->bAutomated = true;          // no import dialog
	Task->bReplaceExisting = true;    // regenerating a line updates the asset the step already points at
	Task->bReplaceExistingSettings = false;
	Task->bSave = true;               // the step is about to reference it, so it must survive a restart
	Task->bAsync = false;

	TArray<UAssetImportTask*> Tasks;
	Tasks.Add(Task);

	FAssetToolsModule& AssetToolsModule = FModuleManager::LoadModuleChecked<FAssetToolsModule>(TEXT("AssetTools"));
	AssetToolsModule.Get().ImportAssetTasks(Tasks);

	USoundBase* Imported = nullptr;
	for (UObject* Object : Task->GetObjects())
	{
		Imported = Cast<USoundBase>(Object);
		if (Imported)
		{
			break;
		}
	}

	if (!Imported)
	{
		Result.Message = FText::Format(
			LOCTEXT("ImportFailed", "The audio was generated but would not import into {0}."), FText::FromString(DestinationPath));
		return Result;
	}

	Result.bSuccess = true;
	Result.Outcome = EAzr_NarrationOutcome::Generated;
	Result.Audio = Imported;
	Result.WordTimingsCsv = Csv;
	Result.TextHash = Azr::ComputeNarrationHash(Trimmed);
	Result.WordCount = TimedWords;
	Result.Message = ResolvedFromName.IsEmpty()
		? FText::Format(
			LOCTEXT("GenerateSucceeded", "{0}: {1} words timed, {2}."),
			FText::FromString(SafeName), FText::AsNumber(TimedWords), FText::FromString(GrantedFormat))
		// Reported so the id can be pasted into the setting and the extra lookup stops happening on
		// every generation from here on.
		: FText::Format(
			LOCTEXT("GenerateSucceededByName", "{0}: {1} words timed, {2}. '{3}' resolved to voice id {4} -- paste that into the setting to skip the lookup."),
			FText::FromString(SafeName), FText::AsNumber(TimedWords), FText::FromString(GrantedFormat),
			FText::FromString(ConfiguredVoice), FText::FromString(ResolvedFromName));

	return Result;
}

FAzr_NarrationResult FAzr_NarrationGenerator::GenerateForStepHandle(const TSharedPtr<IPropertyHandle>& StepHandle, bool bForce)
{
	FAzr_NarrationResult Result;

	if (!StepHandle.IsValid() || !StepHandle->IsValidHandle())
	{
		Result.Message = LOCTEXT("BadHandle", "This step could not be read.");
		return Result;
	}

	const TSharedPtr<IPropertyHandle> TextHandle = StepHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAzr_ExplainStep, ExplainText));
	const TSharedPtr<IPropertyHandle> TimingsHandle = StepHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAzr_ExplainStep, WordTimings));
	const TSharedPtr<IPropertyHandle> AudioHandle = StepHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAzr_ExplainStep, AudioTrack));
	const TSharedPtr<IPropertyHandle> HashHandle = StepHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAzr_ExplainStep, NarrationHash));

	if (!TextHandle.IsValid() || !TimingsHandle.IsValid() || !AudioHandle.IsValid() || !HashHandle.IsValid())
	{
		Result.Message = LOCTEXT("MissingFields", "This step is missing the fields the generator writes to.");
		return Result;
	}

	const TSharedPtr<IPropertyHandle> EnglishTextHandle = TextHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAzr_MultiLangText, English));
	const TSharedPtr<IPropertyHandle> EnglishTimingsHandle = TimingsHandle->GetChildHandle(GET_MEMBER_NAME_CHECKED(FAzr_MultiLangText, English));

	if (!EnglishTextHandle.IsValid() || !EnglishTimingsHandle.IsValid())
	{
		Result.Message = LOCTEXT("MissingLanguageFields", "This step's English text could not be read.");
		return Result;
	}

	FString Text;
	if (EnglishTextHandle->GetValue(Text) != FPropertyAccess::Success)
	{
		// Several steps selected at once would each need their own line generated, and there is no way
		// to tell from here which text belongs to which. One at a time.
		Result.Message = LOCTEXT("MultipleValues", "Select a single step to generate its narration.");
		return Result;
	}

	if (Text.TrimStartAndEnd().IsEmpty())
	{
		Result.Outcome = EAzr_NarrationOutcome::NoText;
		Result.Message = LOCTEXT("EmptyText", "This step has no English text yet.");
		return Result;
	}

	// --- ALREADY UP TO DATE? ---
	if (!bForce)
	{
		FString ExistingHash;
		FString ExistingTimings;
		UObject* ExistingAudio = nullptr;

		HashHandle->GetValue(ExistingHash);
		EnglishTimingsHandle->GetValue(ExistingTimings);
		AudioHandle->GetValue(ExistingAudio);

		const bool bUnchanged = !ExistingHash.IsEmpty()
			&& ExistingHash == Azr::ComputeNarrationHash(Text)
			&& !ExistingTimings.IsEmpty()
			&& ExistingAudio != nullptr;

		if (bUnchanged)
		{
			Result.bSuccess = true;
			Result.Outcome = EAzr_NarrationOutcome::AlreadyCurrent;
			Result.Message = LOCTEXT("Skipped", "already up to date");
			return Result;
		}
	}

	// --- NAME THE ASSET AFTER WHERE IT CAME FROM ---
	FString AssetBaseName = TEXT("Narration");
	{
		TArray<UObject*> Outers;
		StepHandle->GetOuterObjects(Outers);

		FString OwnerName;
		if (Outers.Num() > 0 && Outers[0])
		{
			OwnerName = FPackageName::GetShortName(Outers[0]->GetOutermost()->GetName());
		}

		FString StepName = StepHandle->GetProperty() ? StepHandle->GetProperty()->GetName() : TEXT("Step");
		const int32 ArrayIndex = StepHandle->GetIndexInArray();
		if (ArrayIndex != INDEX_NONE)
		{
			StepName += FString::FromInt(ArrayIndex + 1);
		}

		AssetBaseName = OwnerName.IsEmpty()
			? FString::Printf(TEXT("SW_%s"), *StepName)
			: FString::Printf(TEXT("SW_%s_%s"), *OwnerName, *StepName);
	}

	Result = Generate(Text, AssetBaseName);
	if (!Result.bSuccess)
	{
		return Result;
	}

	// Written through the handles rather than into the struct directly: that is what makes this one
	// undoable transaction, dirties the owning package, and reaches placed instances of the Blueprint.
	AudioHandle->SetValue(Cast<UObject>(Result.Audio));
	EnglishTimingsHandle->SetValue(Result.WordTimingsCsv);
	HashHandle->SetValue(Result.TextHash);

	return Result;
}

#undef LOCTEXT_NAMESPACE
