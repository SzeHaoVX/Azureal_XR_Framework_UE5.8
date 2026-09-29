#include "AzrReleaseProbe.h"

#include "Azr_Types.h"
#include "ChapterSubsystem.h"
#include "Azureal_ExitForceKill.h"
#include "ManualVRPluginBPLibrary.h"

FString UAzrReleaseProbe::Probe()
{
	// Taking the address forces a real symbol reference, so an unresolved export fails at link time
	// here rather than at runtime in a client's build. UManualVRPluginBPLibrary is deliberately left
	// out: it has no MANUALVRPLUGIN_API, so it is usable from Blueprint but not linkable from C++, and
	// including its header is the most a client's C++ can do with it.
	int32 (UChapterSubsystem::*ChapterCount)() const = &UChapterSubsystem::GetTotalChapterCount;
	void (*ForceKill)() = &UAzureal_ExitForceKill::ForceKillGame;

	Play();

	FAzr_MultiLangText Text;
	Text.English = TEXT("Hello");
	Text.Malay = TEXT("Selamat");

	return FString::Printf(TEXT("%s %d %d"), *Text.Resolve(TEXT("bm")), ChapterCount != nullptr, ForceKill != nullptr);
}
