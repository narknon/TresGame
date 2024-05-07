#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex081_FeatherProjectile.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex081_FeatherProjectile : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex081_FeatherProjectile(const FObjectInitializer& ObjectInitializer);
};

