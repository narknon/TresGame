#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkUtilityPawn.h"
#include "TresFriendLinkPawnUltimateEnd.generated.h"

UCLASS(Blueprintable)
class ATresFriendLinkPawnUltimateEnd : public ATresFriendLinkUtilityPawn {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFinishMotionStartLagTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fFriendLinkFinishInvincibleTime;
    
public:
    ATresFriendLinkPawnUltimateEnd(const FObjectInitializer& ObjectInitializer);
};

