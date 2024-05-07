#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRGoofyShoot.h"
#include "TresPlayerState_FRGoofyShoot.generated.h"

class ATresFriendLinkPawnGoofyShoot;

UCLASS(Blueprintable)
class UTresPlayerState_FRGoofyShoot : public UTresCharState_FRGoofyShoot {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnGoofyShoot* m_pObj;
    
    UTresPlayerState_FRGoofyShoot();
};

