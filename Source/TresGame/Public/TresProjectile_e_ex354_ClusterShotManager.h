#pragma once
#include "CoreMinimal.h"
#include "TresProjectileBase.h"
#include "EX354_ClusterShotMoveInfo.h"
#include "EX354_ClusterShotHitActorInfo.h"
#include "TresProjectile_e_ex354_ClusterShotManager.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex354_ClusterShotManager : public ATresProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresProjectileBase*> m_ClusterShotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX354_ClusterShotMoveInfo> m_ClusterShotMoveInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX354_ClusterShotHitActorInfo> m_ClusterShotHitActorInfoArray;
    
public:
    ATresProjectile_e_ex354_ClusterShotManager(const FObjectInitializer& ObjectInitializer);
};

