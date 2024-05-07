#pragma once
#include "CoreMinimal.h"
#include "TresProjectileStaticMeshBase.h"
#include "TresProjectile_e_ex037_Attack1.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex037_Attack1 : public ATresProjectileStaticMeshBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_WallHitEffData;
    
    ATresProjectile_e_ex037_Attack1(const FObjectInitializer& ObjectInitializer);
};

