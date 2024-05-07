#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipEnemy625Laser.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy625Laser : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy625Laser(const FObjectInitializer& ObjectInitializer);
};

