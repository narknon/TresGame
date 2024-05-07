#pragma once
#include "CoreMinimal.h"
#include "TresGimmickActivateSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresGimmickActivateSignature, bool, Enable);

