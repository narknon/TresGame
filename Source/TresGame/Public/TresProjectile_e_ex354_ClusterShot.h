#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ClusterShot.generated.h"

class AActor;
class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex354_ClusterShot : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectileBase* m_ClusterShotExplosion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_ClusterShotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_ScrollHitEffData;
    
    ATresProjectile_e_ex354_ClusterShot(const FObjectInitializer& ObjectInitializer);
};

