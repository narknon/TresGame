#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex721_Darkbird.generated.h"

UCLASS(Blueprintable, HideDropdown)
class ATresProjectile_e_ex721_Darkbird : public ATresProjectileBase {
    GENERATED_BODY()
public:
    ATresProjectile_e_ex721_Darkbird(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void OnTickMove(float InDeltaTime);
    
};

