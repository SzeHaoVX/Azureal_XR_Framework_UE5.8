

#include "Azr_Types.h"
#include "CableComponent.h"
#include "Components/PrimitiveComponent.h"

namespace
{
	const FName SkipHighlightTag(TEXT("SkipHighlight"));
}

bool Azr::IsHighlightSkipped(const UActorComponent* Component)
{
	if (!Component) return false;
	if (Component->ComponentHasTag(SkipHighlightTag)) return true;

	const AActor* Owner = Component->GetOwner();
	return Owner && Owner->ActorHasTag(SkipHighlightTag);
}

void Azr::SetMeshHighlight(UPrimitiveComponent* Mesh, bool bOn, int32 StencilID)
{
	if (!Mesh) return;

	if (IsHighlightSkipped(Mesh))
	{
		// An outline this framework drew before the tag was added at runtime is still taken down, or it
		// would stay on for good. An outline of the project's own uses its own stencil and is not touched.
		if (!bOn && Mesh->bRenderCustomDepth && Mesh->CustomDepthStencilValue == StencilID)
		{
			Mesh->SetRenderCustomDepth(false);
		}
		return;
	}

	Mesh->SetRenderCustomDepth(bOn);
	Mesh->SetCustomDepthStencilValue(StencilID);
}

void Azr::WakeTether(UCableComponent* Cable)
{
	if (!Cable) return;

	// Attachment, visibility and the end attachment are properties and survive the round trip; the
	// particle array is rebuilt in OnRegister, which is the point. The tick's enabled state survives too.
	if (Cable->IsRegistered())
	{
		Cable->UnregisterComponent();
		Cable->RegisterComponent();
	}
	Cable->SetComponentTickEnabled(true);
}

void Azr::SleepTether(UCableComponent* Cable)
{
	if (Cable) Cable->SetComponentTickEnabled(false);
}
