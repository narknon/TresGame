#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipAppearanceProjectileBase.h"
#include "TresGumiShipActualProjectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipActualProjectile : public ATresGumiShipAppearanceProjectileBase {
    GENERATED_BODY()
public:
    ATresGumiShipActualProjectile(const FObjectInitializer& ObjectInitializer);
};

