#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresInfluenceMapVolumeRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresInfluenceMapVolumeRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresInfluenceMapVolumeRenderingComponent();
};

