#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "TresProjectile_e_ex354_ClusterShotExplosion.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex354_ClusterShotExplosion : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AtkCollGrpName_DisableOnMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AtkCollGrpName_EnableOnMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AtkCollAtkIDName_EnableOnMove;
    
    ATresProjectile_e_ex354_ClusterShotExplosion(const FObjectInitializer& ObjectInitializer);
};

