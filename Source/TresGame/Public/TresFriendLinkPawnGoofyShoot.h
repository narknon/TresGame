#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnGoofyShoot.generated.h"

class AActor;

UCLASS(Blueprintable)
class ATresFriendLinkPawnGoofyShoot : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Param_ThrowPitch;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pDummyTarget;
    
public:
    ATresFriendLinkPawnGoofyShoot(const FObjectInitializer& ObjectInitializer);
};

