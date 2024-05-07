#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresDebugStaticEQSItemRenderingComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresDebugStaticEQSItemRenderingComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresDebugStaticEQSItemRenderingComponent();
};

