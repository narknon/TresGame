#pragma once
#include "CoreMinimal.h"
#include "TresCharState_FRFlareForce.h"
#include "TresPlayerState_FRFlareForce.generated.h"

class ATresFriendLinkPawnFlareForce;

UCLASS(Blueprintable)
class UTresPlayerState_FRFlareForce : public UTresCharState_FRFlareForce {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresFriendLinkPawnFlareForce* m_pObj;
    
public:
    UTresPlayerState_FRFlareForce();
};

