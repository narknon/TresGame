#pragma once
#include "CoreMinimal.h"
#include "TresEnvBase.h"
#include "TresEnvEnableTickBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresEnvEnableTickBase : public ATresEnvBase {
    GENERATED_BODY()
public:
    ATresEnvEnableTickBase(const FObjectInitializer& ObjectInitializer);
};

