#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_GigasBase_UltimaModeBomb.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_GigasBase_UltimaModeBomb : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_GigasBase_UltimaModeBomb(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnTickMove(float InDeltaTime);
    
};

