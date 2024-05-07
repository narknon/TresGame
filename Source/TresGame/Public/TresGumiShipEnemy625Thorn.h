#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSequentialProjectileBase.h"
#include "TresGumiShipEnemy625Thorn.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemy625Thorn : public ATresGumiShipSequentialProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pExplosionVFX;
    
public:
    ATresGumiShipEnemy625Thorn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void DestructionEffect();
    
};

