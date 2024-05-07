#pragma once
#include "CoreMinimal.h"
#include "TresGimmickPrizeGimmickStaticBaseDLC.h"
#include "ETresGimmickHitCountComponentDamageProfile.h"
#include "TresGimmick_BT_PrizeGimmickStaticBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmick_BT_PrizeGimmickStaticBase : public ATresGimmickPrizeGimmickStaticBaseDLC {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* ShadowMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DitherFadeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickHitCountComponentDamageProfile m_ReplicaHitCountProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_NormalHitCountNoDamage;
    
    ATresGimmick_BT_PrizeGimmickStaticBase(const FObjectInitializer& ObjectInitializer);
};

