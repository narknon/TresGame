#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_he903_IceMagma.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_he903_IceMagma : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_he903_IceMagma(const FObjectInitializer& ObjectInitializer);
};

