#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRThinkOfYou.h"
#include "TresPlayerState_FRThinkOfYou.generated.h"

class ATresFriendLinkPawnThinkOfYou;

UCLASS(Blueprintable)
class UTresPlayerState_FRThinkOfYou : public UTresCharState_FRThinkOfYou {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnThinkOfYou* m_pObj;
    
public:
    UTresPlayerState_FRThinkOfYou();
};

