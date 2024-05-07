#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ClusterShotMove.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex354_ClusterShotMove : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bExplodeOnWallHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttackCollProcessOnSpawn;
    
    ATresProjectile_e_ex354_ClusterShotMove(const FObjectInitializer& ObjectInitializer);
};

