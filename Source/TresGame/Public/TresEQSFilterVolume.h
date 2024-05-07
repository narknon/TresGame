#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresEQSFilterVolume.generated.h"

UCLASS(Blueprintable)
class ATresEQSFilterVolume : public ATresVolume {
    GENERATED_BODY()
public:
    ATresEQSFilterVolume(const FObjectInitializer& ObjectInitializer);
};

