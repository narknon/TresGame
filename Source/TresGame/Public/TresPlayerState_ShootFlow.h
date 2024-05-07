#pragma once
#include "CoreMinimal.h"
#include "TresCharState_Attack.h"
#include "TresPlayerState_ShootFlow.generated.h"

class ATresProjectileBase;
class UTresLockonTargetComponent;
class UParticleSystemComponent;

UCLASS(Blueprintable)
class UTresPlayerState_ShootFlow : public UTresCharState_Attack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_pComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_pShotProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresProjectileBase*> m_ProjectileList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UParticleSystemComponent*> m_EffectList;
    
    UTresPlayerState_ShootFlow();
};

