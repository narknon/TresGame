#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresChangeIKTypeVolume.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresChangeIKTypeVolume : public ATresVolume {
    GENERATED_BODY()
public:
    ATresChangeIKTypeVolume(const FObjectInitializer& ObjectInitializer);
};

