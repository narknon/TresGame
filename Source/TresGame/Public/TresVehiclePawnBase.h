#pragma once
#include "CoreMinimal.h"
#include "TresAccompanyPawnBase.h"
#include "TresVehiclePawnBase.generated.h"

UCLASS(Blueprintable)
class ATresVehiclePawnBase : public ATresAccompanyPawnBase {
    GENERATED_BODY()
public:
    ATresVehiclePawnBase(const FObjectInitializer& ObjectInitializer);
};

