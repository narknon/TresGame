#pragma once
#include "CoreMinimal.h"
#include "TresTaggedActorPropertyValueBase.h"
#include "TresTaggedActorPropertyValue_OceanWindSpeed.generated.h"

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_OceanWindSpeed : public FTresTaggedActorPropertyValueBase {
    GENERATED_BODY()
public:
    TRESGAME_API FTresTaggedActorPropertyValue_OceanWindSpeed();
};

