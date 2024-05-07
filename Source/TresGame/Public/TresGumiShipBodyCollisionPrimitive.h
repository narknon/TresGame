#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipCollisionPrimitive.h"
#include "TresGumiShipBodyCollisionPrimitive.generated.h"

UCLASS(Blueprintable, NonTransient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipBodyCollisionPrimitive : public UTresGumiShipCollisionPrimitive {
    GENERATED_BODY()
public:
    UTresGumiShipBodyCollisionPrimitive();
};

