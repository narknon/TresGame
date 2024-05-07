#pragma once
#include "CoreMinimal.h"
#include "Components/PrimitiveComponent.h"
#include "TresLayoutComponent.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresLayoutComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UTresLayoutComponent();
};

