#pragma once
#include "CoreMinimal.h"
#include "TresProjectileSkeletalMeshBase.h"
#include "TresProjectile_n_ra203_Barrel.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_n_ra203_Barrel : public ATresProjectileSkeletalMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_BarrelEffData;
    
    ATresProjectile_n_ra203_Barrel(const FObjectInitializer& ObjectInitializer);
};

