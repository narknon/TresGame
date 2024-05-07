#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRPromiseWings.h"
#include "TresPlayerState_FRPromiseWings.generated.h"

class ATresFriendLinkPawnPromiseWings;

UCLASS(Blueprintable)
class UTresPlayerState_FRPromiseWings : public UTresCharState_FRPromiseWings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnPromiseWings* m_pObj;
    
public:
    UTresPlayerState_FRPromiseWings();
};

