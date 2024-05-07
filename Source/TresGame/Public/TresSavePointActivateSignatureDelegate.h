#pragma once
#include "CoreMinimal.h"
#include "TresSavePointActivateSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresSavePointActivateSignature, bool, Enable);

