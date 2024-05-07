#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "TresProjectile_e_ex048_VerticalDropMissileProjectile.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex048_VerticalDropMissileProjectile : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ImpactPointEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ImpactPointEffectComponent;
    
public:
    ATresProjectile_e_ex048_VerticalDropMissileProjectile(const FObjectInitializer& ObjectInitializer);
};

