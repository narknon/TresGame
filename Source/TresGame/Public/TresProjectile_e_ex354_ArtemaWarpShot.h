#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ArtemaWarpShot.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex354_ArtemaWarpShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ShotSpawnEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_ShotSpawnEffectComp;
    
    ATresProjectile_e_ex354_ArtemaWarpShot(const FObjectInitializer& ObjectInitializer);
};

