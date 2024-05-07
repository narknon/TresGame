#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSequentialProjectileBase.h"
#include "TresGumiShipEnemy703Bullet.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy703Bullet : public ATresGumiShipSequentialProjectileBase {
    GENERATED_BODY()
public:
    ATresGumiShipEnemy703Bullet(const FObjectInitializer& ObjectInitializer);
};

