#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRBaymaxRide.h"
#include "TresPlayerState_FRBaymaxRide.generated.h"

class ATresFriendLinkPawnBaymaxRide;

UCLASS(Blueprintable)
class UTresPlayerState_FRBaymaxRide : public UTresCharState_FRBaymaxRide {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnBaymaxRide* m_pObj;
    
public:
    UTresPlayerState_FRBaymaxRide();
};

