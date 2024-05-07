#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRCallMeteor.h"
#include "TresPlayerState_FRCallMeteor.generated.h"

class ATresFriendLinkPawnCallMeteor;

UCLASS(Blueprintable)
class UTresPlayerState_FRCallMeteor : public UTresCharState_FRCallMeteor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnCallMeteor* m_pObj;
    
public:
    UTresPlayerState_FRCallMeteor();
};

