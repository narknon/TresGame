#pragma once
#include "CoreMinimal.h"
#include "TresChangePlayerArtsModeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresChangePlayerArtsModeSignature, bool, bIsArtsMode);

