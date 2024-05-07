#pragma once
#include "CoreMinimal.h"
#include "ETresSavePointDispType.h"
#include "TresChangeSavePointEffectSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresChangeSavePointEffectSignature, ETresSavePointDispType, InDispType);

