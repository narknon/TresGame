#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRWoodyBuzzRocket.h"
#include "TresPlayerState_FRWoodyBuzzRocket.generated.h"

class ATresFriendLinkPawnWoodyBuzzRocket;

UCLASS(Blueprintable)
class UTresPlayerState_FRWoodyBuzzRocket : public UTresCharState_FRWoodyBuzzRocket {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnWoodyBuzzRocket* m_pObj;
    
public:
    UTresPlayerState_FRWoodyBuzzRocket();
};

