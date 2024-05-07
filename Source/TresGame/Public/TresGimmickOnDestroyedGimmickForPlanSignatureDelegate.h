#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnDestroyedGimmickForPlanSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGimmickOnDestroyedGimmickForPlanSignature, bool, PlayAnimation);

