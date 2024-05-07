#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRMikeBowling.h"
#include "TresPlayerState_FRMikeBowling.generated.h"

class ATresFriendLinkPawnMikeBowling;

UCLASS(Blueprintable)
class UTresPlayerState_FRMikeBowling : public UTresCharState_FRMikeBowling {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnMikeBowling* m_pObj;
    
public:
    UTresPlayerState_FRMikeBowling();
};

