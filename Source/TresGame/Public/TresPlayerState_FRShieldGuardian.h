#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRShieldGuardian.h"
#include "TresPlayerState_FRShieldGuardian.generated.h"

class ATresFriendLinkPawnShieldGuardian;

UCLASS(Blueprintable)
class UTresPlayerState_FRShieldGuardian : public UTresCharState_FRShieldGuardian {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnShieldGuardian* m_pObj;
    
public:
    UTresPlayerState_FRShieldGuardian();
};

