#pragma once
#include "CoreMinimal.h"
#include "TresChangeCinematicModeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresChangeCinematicModeSignature, bool, bIsCinematicMode);

