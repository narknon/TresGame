#pragma once
#include "CoreMinimal.h"
#include "TresGimmickPrizeGimmickSkeletalBaseDLC.h"
#include "ETresGimmickHitCountComponentDamageProfile.h"
#include "TresGimmick_BT_PrizeGimmickSkeletalBase.generated.h"

class UTresStaticMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmick_BT_PrizeGimmickSkeletalBase : public ATresGimmickPrizeGimmickSkeletalBaseDLC {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* MyStaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStaticMeshComponent* ShadowMesh;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DitherFadeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickHitCountComponentDamageProfile m_ReplicaHitCountProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_NormalHitCountNoDamage;
    
    ATresGimmick_BT_PrizeGimmickSkeletalBase(const FObjectInitializer& ObjectInitializer);
};

