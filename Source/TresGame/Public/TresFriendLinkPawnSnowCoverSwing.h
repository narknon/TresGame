#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnSnowCoverSwing.generated.h"

class ATresProjectileBase;
class AActor;
class ATresGimmickSkeletalBase;

UCLASS(Blueprintable)
class ATresFriendLinkPawnSnowCoverSwing : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_AirProj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FriendLinkEndLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FriendLinkDamageAttackIDName;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_pTargetPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGimmickSkeletalBase* m_pTree;
    
public:
    ATresFriendLinkPawnSnowCoverSwing(const FObjectInitializer& ObjectInitializer);
};

