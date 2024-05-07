#pragma once
#include "CoreMinimal.h"
#include "TresEnvBase.h"
#include "TresEnvMovableBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresEnvMovableBase : public ATresEnvBase {
    GENERATED_BODY()
public:
    ATresEnvMovableBase(const FObjectInitializer& ObjectInitializer);
};

