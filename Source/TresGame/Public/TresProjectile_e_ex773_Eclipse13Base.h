#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex773_Eclipse13Base.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_Eclipse13Base : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex773_Eclipse13Base(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void EndProjectile();
    
};

