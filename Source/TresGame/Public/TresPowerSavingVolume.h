#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresPowerSavingVolume.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresPowerSavingVolume : public ATresVolume {
    GENERATED_BODY()
public:
    ATresPowerSavingVolume(const FObjectInitializer& ObjectInitializer);
};

