#pragma once
#include "CoreMinimal.h"
#include "Engine/PostProcessVolume.h"
#include "TresOceanPostProcessVolume.generated.h"

UCLASS(Blueprintable)
class ATresOceanPostProcessVolume : public APostProcessVolume {
    GENERATED_BODY()
public:
    ATresOceanPostProcessVolume(const FObjectInitializer& ObjectInitializer);
};

