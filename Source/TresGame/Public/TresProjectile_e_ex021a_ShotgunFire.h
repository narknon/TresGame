#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex021a_ShotgunFire.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex021a_ShotgunFire : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DamageDestroyParticle;
    
public:
    ATresProjectile_e_ex021a_ShotgunFire(const FObjectInitializer& ObjectInitializer);
};

