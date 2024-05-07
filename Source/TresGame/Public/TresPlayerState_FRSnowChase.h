#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRSnowChase.h"
#include "TresPlayerState_FRSnowChase.generated.h"

class ATresFriendLinkPawnSnowChase;

UCLASS(Blueprintable)
class UTresPlayerState_FRSnowChase : public UTresCharState_FRSnowChase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnSnowChase* m_Obj;
    
public:
    UTresPlayerState_FRSnowChase();
};

