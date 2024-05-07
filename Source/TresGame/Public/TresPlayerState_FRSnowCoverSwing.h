#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRSnowCoverSwing.h"
#include "TresPlayerState_FRSnowCoverSwing.generated.h"

class ATresFriendLinkPawnSnowCoverSwing;

UCLASS(Blueprintable)
class UTresPlayerState_FRSnowCoverSwing : public UTresCharState_FRSnowCoverSwing {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnSnowCoverSwing* m_pObj;
    
public:
    UTresPlayerState_FRSnowCoverSwing();
};

