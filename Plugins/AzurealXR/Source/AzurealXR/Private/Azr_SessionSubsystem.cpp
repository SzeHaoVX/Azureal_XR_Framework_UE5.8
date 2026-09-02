

#include "Azr_SessionSubsystem.h"
#include "HttpModule.h"
#include "Interfaces/IHttpResponse.h"
#include "Dom/JsonObject.h"
#include "Dom/JsonValue.h"
#include "Serialization/JsonSerializer.h"

void UAzr_SessionSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
	LoadLauncherContext();

	// Trimmed like every other launch variable. A value that is nothing but whitespace has to read as
	// absent, or a stray space in the launcher's config silently turns a Training session into an
	// Event one and the server rejects it for an event id that is not really there.
	FString EventUserId = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_EVENT_USER_ID")).TrimStartAndEnd();
	FString EventId = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_EVENT_ID")).TrimStartAndEnd();
	FString EnrollmentId = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_COURSE_ENROLLMENT_ID")).TrimStartAndEnd();

	if (!EventUserId.IsEmpty() && !EventId.IsEmpty()) DeterminedSessionType = EAzr_SessionType::Event;
	else if (!EnrollmentId.IsEmpty()) DeterminedSessionType = EAzr_SessionType::Course;
	else DeterminedSessionType = EAzr_SessionType::Training;
}

void UAzr_SessionSubsystem::LoadLauncherContext()
{
	// Everything the launcher injects is trimmed. These arrive as OS environment strings written by
	// another program's config, and a trailing space is invisible in every UI that shows them --
	// but " false" is not "false", and a token with a newline on the end is rejected by the server.
	AuthToken = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_TOKEN")).TrimStartAndEnd();
	BaseApiUrl = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_API_URL")).TrimStartAndEnd();
	ModuleVersionId = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_MODULE_VERSION_ID")).TrimStartAndEnd();
	LanguageCode = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_LANGUAGE")).TrimStartAndEnd();

	// A launcher that quotes its arguments hands the quotes over as part of the value, and a config
	// field labelled "Authorization" invites someone to paste the whole header. Both produce a token
	// that looks right in the log and is refused by the server, so both are undone here.
	AuthToken = AuthToken.Replace(TEXT("\""), TEXT("")).Replace(TEXT("'"), TEXT(""));

	if (AuthToken.StartsWith(TEXT("Bearer "), ESearchCase::IgnoreCase))
	{
		AuthToken = AuthToken.RightChop(7).TrimStartAndEnd();
	}

	// The session paths are appended to this, so it has to end at the /api segment with no trailing
	// slash. Whether the launcher includes /api is not something this code can dictate, so it accepts
	// either -- without this, a url given as the bare host posts to /training-sessions instead of
	// /api/training-sessions and every call comes back 404 with an empty body.
	if (!BaseApiUrl.IsEmpty())
	{
		if (BaseApiUrl.EndsWith(TEXT("/")))
		{
			BaseApiUrl.LeftChopInline(1);
		}
		if (!BaseApiUrl.EndsWith(TEXT("/api")))
		{
			BaseApiUrl += TEXT("/api");
		}
	}

	// 1-based, to match every other chapter number the framework and the server exchange. Atoi gives
	// 0 for a blank or non-numeric value, which is the same as "not asked for" -- so a platform that
	// sends nothing, or sends something unexpected, opens the module at its menu rather than at a
	// chapter nobody chose. Negatives are clamped away for the same reason.
	const FString StartChapterStr = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_START_CHAPTER")).TrimStartAndEnd();
	StartChapter = FMath::Max(0, FCString::Atoi(*StartChapterStr));
	bStartChapterRequested = StartChapter > 0;

	if (StartChapter > 0)
	{
		UE_LOG(LogTemp, Log, TEXT("AzurealXR: Launcher requested chapter %d."), StartChapter);
	}
	else if (!StartChapterStr.IsEmpty())
	{
		UE_LOG(LogTemp, Warning, TEXT("AzurealXR: AZUREAL_START_CHAPTER was '%s', which is not a chapter number. Opening the menu."), *StartChapterStr);
	}

	FString IsExplainedStr = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_IS_EXPLAINED")).TrimStartAndEnd();
	bIsExplained = IsExplainedStr.Equals(TEXT("true"), ESearchCase::IgnoreCase);

	// Note the asymmetry with the line above: explained is opt-IN ("true" or it is off), online is
	// opt-OUT ("false" or it is on). A typo in one disables explanations; the same typo in the other
	// leaves tracking enabled. Deliberate -- silently not reporting is the worse failure.
	FString IsOnlineStr = FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_IS_ONLINE")).TrimStartAndEnd();
	bIsOnline = !IsOnlineStr.Equals(TEXT("false"), ESearchCase::IgnoreCase);

	if (bIsOnline && (AuthToken.IsEmpty() || BaseApiUrl.IsEmpty() || ModuleVersionId.IsEmpty()))
	{
		UE_LOG(LogTemp, Warning, TEXT("AzurealXR: Missing critical launch variables. Falling back to Offline Mode."));
		bIsOnline = false;
	}
}

int32 UAzr_SessionSubsystem::ConsumeStartChapter()
{
	const int32 Requested = StartChapter;
	StartChapter = 0;
	return Requested;
}

FString UAzr_SessionSubsystem::DescribeHttpFailure(const TCHAR* What, FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful) const
{
	const int32 Code = Response.IsValid() ? Response->GetResponseCode() : 0;

	FString Body = Response.IsValid() ? Response->GetContentAsString().TrimStartAndEnd() : FString();
	if (Body.IsEmpty())
	{
		Body = (!bWasSuccessful || !Response.IsValid())
			? TEXT("no response - network, DNS or timeout")
			: TEXT("(server returned no body)");
	}

	const FString Message = FString::Printf(TEXT("HTTP Code: %d | Message: %s"), Code, *Body);

	// The url goes to the log rather than onto the pin: it is the first thing to check when a call is
	// refused, and the first thing in the way when the message is being shown to a person.
	UE_LOG(LogTemp, Warning, TEXT("AzurealXR: %s failed. %s | URL: %s"),
		What, *Message, Request.IsValid() ? *Request->GetURL() : TEXT("(unknown)"));

	return Message;
}

void UAzr_SessionSubsystem::StartSession()
{
	if (!bIsOnline) {
		OnStartFailure.Broadcast(TEXT("Offline Mode: Tracking Disabled."));
		return;
	}

	FString Path = TEXT("/training-sessions");
	if (DeterminedSessionType == EAzr_SessionType::Event) Path = TEXT("/event-sessions");
	else if (DeterminedSessionType == EAzr_SessionType::Course) Path = TEXT("/course-sessions");

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UAzr_SessionSubsystem::OnStartSessionResponse);
	Request->SetURL(BaseApiUrl + Path);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));

	TSharedPtr<FJsonObject> JsonObj = MakeShareable(new FJsonObject());
	JsonObj->SetStringField(TEXT("moduleVersionId"), ModuleVersionId);
	JsonObj->SetBoolField(TEXT("isExplained"), bIsExplained);

	if (DeterminedSessionType == EAzr_SessionType::Event) {
		JsonObj->SetStringField(TEXT("eventUserId"), FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_EVENT_USER_ID")).TrimStartAndEnd());
		JsonObj->SetStringField(TEXT("eventId"), FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_EVENT_ID")).TrimStartAndEnd());
	}
	else if (DeterminedSessionType == EAzr_SessionType::Course) {
		JsonObj->SetStringField(TEXT("courseEnrollmentId"), FPlatformMisc::GetEnvironmentVariable(TEXT("AZUREAL_COURSE_ENROLLMENT_ID")).TrimStartAndEnd());
	}

	FString Body;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
	FJsonSerializer::Serialize(JsonObj.ToSharedRef(), Writer);
	Request->SetContentAsString(Body);
	Request->ProcessRequest();
}

void UAzr_SessionSubsystem::OnStartSessionResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	// Any 2xx, not only 200. A REST API is entitled to answer a creation with 201, and treating that
	// as a failure would throw away a session the server had already opened.
	if (!bWasSuccessful || !Response.IsValid() || !EHttpResponseCodes::IsOk(Response->GetResponseCode())) {
		OnStartFailure.Broadcast(DescribeHttpFailure(TEXT("Start Session"), Request, Response, bWasSuccessful));
		return;
	}

	TSharedPtr<FJsonObject> JsonResponse;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
	if (FJsonSerializer::Deserialize(Reader, JsonResponse) && JsonResponse.IsValid()) {
		FString ParsedId;
		if (JsonResponse->TryGetStringField(TEXT("id"), ParsedId))
		{
			SessionId = ParsedId;
			RecordCurrentTime();
			OnStartSuccess.Broadcast(SessionId);
		}
		else
		{
			OnStartFailure.Broadcast(TEXT("Invalid Server Response: Missing Session ID."));
		}
	}
	else
	{
		OnStartFailure.Broadcast(TEXT("Failed to parse Start Session JSON response. Check Server payload."));
	}
}

void UAzr_SessionSubsystem::RecordCurrentTime()
{
	if (UWorld* World = GetWorld())
	{
		ActiveTimestamp = World->GetTimeSeconds();
	}
}

void UAzr_SessionSubsystem::UpdateSubprocedure(int32 ChapterNum, int32 StepNum, int32 SubStepNum, bool bCompleted)
{
	if (!bIsOnline) {
		OnUpdateFailure.Broadcast(TEXT("Offline Mode: Subprocedure Not Recorded."));
		return;
	}
	if (SessionId.IsEmpty()) {
		OnUpdateFailure.Broadcast(TEXT("Error: No Active Session ID. Call StartSession first."));
		return;
	}

	int32 CalculatedTime = 1;
	if (UWorld* World = GetWorld())
	{
		float CurrentTime = World->GetTimeSeconds();
		float TimeDifference = CurrentTime - ActiveTimestamp;
		CalculatedTime = FMath::Max(1, FMath::RoundToInt(TimeDifference));
		ActiveTimestamp = CurrentTime;
	}

	FString Path = TEXT("/training-sessions/") + SessionId + TEXT("/update");
	if (DeterminedSessionType == EAzr_SessionType::Event) Path = TEXT("/event-sessions/") + SessionId + TEXT("/update");
	else if (DeterminedSessionType == EAzr_SessionType::Course) Path = TEXT("/course-sessions/") + SessionId + TEXT("/update");

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UAzr_SessionSubsystem::OnUpdateResponseReceived);
	Request->SetURL(BaseApiUrl + Path);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));

	TSharedPtr<FJsonObject> JsonObj = MakeShareable(new FJsonObject());
	JsonObj->SetNumberField(TEXT("chapterNumber"), ChapterNum);
	JsonObj->SetNumberField(TEXT("stepNumber"), StepNum);
	JsonObj->SetNumberField(TEXT("subStepNumber"), SubStepNum);
	JsonObj->SetNumberField(TEXT("timeTakenInSeconds"), CalculatedTime);
	JsonObj->SetBoolField(TEXT("completed"), bCompleted);

	FString Body;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
	FJsonSerializer::Serialize(JsonObj.ToSharedRef(), Writer);
	Request->SetContentAsString(Body);
	Request->ProcessRequest();
}

void UAzr_SessionSubsystem::UpdateQuestion(int32 ChapterNum, int32 StepNum, int32 SubStepNum, int32 SelectedOption)
{
	if (!bIsOnline) {
		OnUpdateFailure.Broadcast(TEXT("Offline Mode: Question Not Recorded."));
		return;
	}
	if (SessionId.IsEmpty()) {
		OnUpdateFailure.Broadcast(TEXT("Error: No Active Session ID. Call StartSession first."));
		return;
	}

	RecordCurrentTime();

	FString Path = TEXT("/training-sessions/") + SessionId + TEXT("/update-question");
	if (DeterminedSessionType == EAzr_SessionType::Event) Path = TEXT("/event-sessions/") + SessionId + TEXT("/update-question");
	else if (DeterminedSessionType == EAzr_SessionType::Course) Path = TEXT("/course-sessions/") + SessionId + TEXT("/update-question");

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UAzr_SessionSubsystem::OnUpdateResponseReceived);
	Request->SetURL(BaseApiUrl + Path);
	Request->SetVerb(TEXT("POST"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));

	TSharedPtr<FJsonObject> JsonObj = MakeShareable(new FJsonObject());
	JsonObj->SetNumberField(TEXT("chapterNumber"), ChapterNum);
	JsonObj->SetNumberField(TEXT("stepNumber"), StepNum);
	JsonObj->SetNumberField(TEXT("subStepNumber"), SubStepNum);

	if (SelectedOption > 0) {
		JsonObj->SetNumberField(TEXT("selectedOptionNumber"), SelectedOption);
	}
	else {
		JsonObj->SetField(TEXT("selectedOptionNumber"), MakeShareable(new FJsonValueNull()));
	}

	FString Body;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
	FJsonSerializer::Serialize(JsonObj.ToSharedRef(), Writer);
	Request->SetContentAsString(Body);
	Request->ProcessRequest();
}

void UAzr_SessionSubsystem::OnUpdateResponseReceived(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid() || !EHttpResponseCodes::IsOk(Response->GetResponseCode())) {
		OnUpdateFailure.Broadcast(DescribeHttpFailure(TEXT("Update"), Request, Response, bWasSuccessful));
		return;
	}

	TSharedPtr<FJsonObject> JsonResponse;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(Response->GetContentAsString());
	if (FJsonSerializer::Deserialize(Reader, JsonResponse)) {
		float Score = 0.0f;
		FString Status = TEXT("InProgress");

		JsonResponse->TryGetNumberField(TEXT("scorePercentage"), Score);
		JsonResponse->TryGetStringField(TEXT("sessionStatus"), Status);

		OnUpdateSuccess.Broadcast(Score, Status);
	}
	else {
		OnUpdateFailure.Broadcast(TEXT("Failed to parse Update response."));
	}
}

// ==============================================================================
// END SESSION LOGIC
// ==============================================================================

void UAzr_SessionSubsystem::EndSession()
{
	if (!bIsOnline) {
		OnEndFailure.Broadcast(TEXT("Offline Mode: Session Ended Locally."));
		return;
	}
	if (SessionId.IsEmpty()) {
		OnEndFailure.Broadcast(TEXT("Error: No Active Session ID to end."));
		return;
	}

	FString Path = TEXT("/training-sessions/") + SessionId + TEXT("/end");
	if (DeterminedSessionType == EAzr_SessionType::Event) Path = TEXT("/event-sessions/") + SessionId + TEXT("/end");
	else if (DeterminedSessionType == EAzr_SessionType::Course) Path = TEXT("/course-sessions/") + SessionId + TEXT("/end");

	TSharedRef<IHttpRequest, ESPMode::ThreadSafe> Request = FHttpModule::Get().CreateRequest();
	Request->OnProcessRequestComplete().BindUObject(this, &UAzr_SessionSubsystem::OnEndSessionResponse);
	Request->SetURL(BaseApiUrl + Path);

	// API Requires PUT for End
	Request->SetVerb(TEXT("PUT"));
	Request->SetHeader(TEXT("Content-Type"), TEXT("application/json"));
	Request->SetHeader(TEXT("Authorization"), FString::Printf(TEXT("Bearer %s"), *AuthToken));

	// API Requires just {"id": sessionId} in the body
	TSharedPtr<FJsonObject> JsonObj = MakeShareable(new FJsonObject());
	JsonObj->SetStringField(TEXT("id"), SessionId);

	FString Body;
	TSharedRef<TJsonWriter<>> Writer = TJsonWriterFactory<>::Create(&Body);
	FJsonSerializer::Serialize(JsonObj.ToSharedRef(), Writer);
	Request->SetContentAsString(Body);
	Request->ProcessRequest();
}

void UAzr_SessionSubsystem::OnEndSessionResponse(FHttpRequestPtr Request, FHttpResponsePtr Response, bool bWasSuccessful)
{
	if (!bWasSuccessful || !Response.IsValid() || !EHttpResponseCodes::IsOk(Response->GetResponseCode())) {
		OnEndFailure.Broadcast(DescribeHttpFailure(TEXT("End Session"), Request, Response, bWasSuccessful));
		return;
	}

	const FString ContentString = Response->GetContentAsString();

	// The server accepted the end, so the session is over here whatever the body turns out to say.
	// Cleared before the parse, deliberately: leaving the id set on a reply this code could not read
	// would leave the training flow recording sub-steps into a session that no longer exists, and
	// every one of them would come back 400 for a reason nothing on this side could explain.
	SessionId = TEXT("");

	// A 2xx with nothing in it still ended the session. Treating an empty body as a parse failure
	// would tell the flow the session is still open when it is not. The score is reported as unknown
	// rather than invented -- the server has it; this build simply cannot see it.
	if (ContentString.TrimStartAndEnd().IsEmpty()) {
		UE_LOG(LogTemp, Warning,
			TEXT("AzurealXR: End Session returned %d with no body. Session ended; final score unavailable to the client."),
			Response->GetResponseCode());

		OnEndSuccess.Broadcast(0.0f, TEXT("Completed"));
		return;
	}

	TSharedPtr<FJsonObject> JsonResponse;
	TSharedRef<TJsonReader<>> Reader = TJsonReaderFactory<>::Create(ContentString);
	if (FJsonSerializer::Deserialize(Reader, JsonResponse) && JsonResponse.IsValid()) {
		float FinalScore = 0.0f;
		FString FinalStatus = TEXT("Completed");

		JsonResponse->TryGetNumberField(TEXT("scorePercentage"), FinalScore);
		JsonResponse->TryGetStringField(TEXT("sessionStatus"), FinalStatus);

		OnEndSuccess.Broadcast(FinalScore, FinalStatus);
	}
	else {
		// Still a failure -- the score is genuinely unknown and the caller should say so rather than
		// show a zero. But the session is already closed above, so the flow cannot get stuck on it.
		UE_LOG(LogTemp, Warning, TEXT("AzurealXR: End Session returned %d with an unreadable body: %s"),
			Response->GetResponseCode(), *ContentString.Left(512));

		OnEndFailure.Broadcast(FString::Printf(
			TEXT("Session ended, but the server's reply could not be read (HTTP %d). Final score unavailable."),
			Response->GetResponseCode()));
	}
}