#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex046_BlizzardBreath.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresProjectile_e_ex046_BlizzardBreath : public ATresProjectileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MapHitEffect;
    
public:
    ATresProjectile_e_ex046_BlizzardBreath(const FObjectInitializer& ObjectInitializer);
};

