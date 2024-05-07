#pragma once
#include "CoreMinimal.h"
#include "ETresSavePointDispType.h"
#include "TresChangeShopActorEffectSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresChangeShopActorEffectSignature, ETresSavePointDispType, InDispType);

