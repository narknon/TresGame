#pragma once
#include "CoreMinimal.h"
#include "TresChangeGimmickPauseSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresChangeGimmickPauseSignature, bool, bPause);

