#pragma once
#include "CoreMinimal.h"
#include "TresVolume.h"
#include "TresSpawnPointDisableVolume.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API ATresSpawnPointDisableVolume : public ATresVolume {
    GENERATED_BODY()
public:
    ATresSpawnPointDisableVolume(const FObjectInitializer& ObjectInitializer);
};

