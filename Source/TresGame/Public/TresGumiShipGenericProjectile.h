#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "TresGumiShipGenericProjectile.generated.h"

UCLASS(Blueprintable)
class ATresGumiShipGenericProjectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
    ATresGumiShipGenericProjectile(const FObjectInitializer& ObjectInitializer);
};

