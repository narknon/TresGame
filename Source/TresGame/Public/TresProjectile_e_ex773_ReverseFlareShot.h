#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex773_ReverseFlareShot.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex773_ReverseFlareShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ExplosionName;
    
    ATresProjectile_e_ex773_ReverseFlareShot(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPE_SpawnExplosion();
    
};

