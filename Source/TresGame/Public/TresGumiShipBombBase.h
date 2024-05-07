#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipBombBase.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipBombBase : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
    ATresGumiShipBombBase(const FObjectInitializer& ObjectInitializer);
};

