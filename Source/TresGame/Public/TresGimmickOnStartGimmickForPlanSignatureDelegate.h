#pragma once
#include "CoreMinimal.h"
#include "TresGimmickOnStartGimmickForPlanSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGimmickOnStartGimmickForPlanSignature, bool, PlayAnimation);

