#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSequentialProjectileBase.h"
#include "TresGumiShipSpWeapon130Projectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon130Projectile : public ATresGumiShipSequentialProjectileBase {
    GENERATED_BODY()
public:
    ATresGumiShipSpWeapon130Projectile(const FObjectInitializer& ObjectInitializer);
};

