#pragma once
#include "CoreMinimal.h"
#include "TresLevelEntity.h"
#include "TresLevelEntityDynamic.generated.h"

UCLASS(Blueprintable, NotPlaceable)
class TRESGAME_API ATresLevelEntityDynamic : public ATresLevelEntity {
    GENERATED_BODY()
public:
    ATresLevelEntityDynamic(const FObjectInitializer& ObjectInitializer);
};

