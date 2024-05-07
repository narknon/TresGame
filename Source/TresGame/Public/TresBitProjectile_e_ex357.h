#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresBitProjectile_e_ex357.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresBitProjectile_e_ex357 : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_GroundHitEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bGroundHitEffectSpawnHitNormal: 1;
    
public:
    ATresBitProjectile_e_ex357(const FObjectInitializer& ObjectInitializer);
};

