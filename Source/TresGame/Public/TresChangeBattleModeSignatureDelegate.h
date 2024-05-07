#pragma once
#include "CoreMinimal.h"
#include "TresChangeBattleModeSignatureDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresChangeBattleModeSignature, bool, bIsBattleMode);

