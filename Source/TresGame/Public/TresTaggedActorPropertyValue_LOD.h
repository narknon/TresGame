#pragma once
#include "CoreMinimal.h"
#include "TresTaggedActorPropertyValueBase.h"
#include "TresTaggedActorPropertyValue_LOD.generated.h"

USTRUCT(BlueprintType)
struct FTresTaggedActorPropertyValue_LOD : public FTresTaggedActorPropertyValueBase {
    GENERATED_BODY()
public:
    TRESGAME_API FTresTaggedActorPropertyValue_LOD();
};

