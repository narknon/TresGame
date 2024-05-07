#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRJackSpin.h"
#include "TresPlayerState_FRJackSpin.generated.h"

class ATresFriendLinkPawnJackSpin;

UCLASS(Blueprintable)
class UTresPlayerState_FRJackSpin : public UTresCharState_FRJackSpin {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnJackSpin* m_pObj;
    
public:
    UTresPlayerState_FRJackSpin();
};

