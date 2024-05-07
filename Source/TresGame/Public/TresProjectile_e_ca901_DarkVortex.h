#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "Engine/EngineTypes.h"
#include "TresProjectile_e_ca901_DarkVortex.generated.h"

class UParticleSystem;
class ATresProjectileBase;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ca901_DarkVortex : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_TentacleShootUpProjectileAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EffectAsset;
    
public:
    ATresProjectile_e_ca901_DarkVortex(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void HandleOnImpact(const FHitResult& HitResult);
    
};

