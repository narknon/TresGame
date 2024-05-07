#pragma once
#include "CoreMinimal.h"
#include "TresOceanEnvSwitchSignatureDelegate.generated.h"

class ATresOceanEnvSwitchActor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FTresOceanEnvSwitchSignature, ATresOceanEnvSwitchActor*, Actor, bool, DiveMode);

