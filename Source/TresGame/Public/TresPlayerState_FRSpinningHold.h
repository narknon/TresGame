#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRSpinningHold.h"
#include "TresPlayerState_FRSpinningHold.generated.h"

class ATresFriendLinkPawnSpinningHold;

UCLASS(Blueprintable)
class UTresPlayerState_FRSpinningHold : public UTresCharState_FRSpinningHold {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnSpinningHold* m_pObj;
    
public:
    UTresPlayerState_FRSpinningHold();
};

