#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_he904_Magma.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_he904_Magma : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_he904_Magma(const FObjectInitializer& ObjectInitializer);
};

