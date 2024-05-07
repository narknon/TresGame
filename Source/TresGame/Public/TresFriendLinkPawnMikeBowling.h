#pragma once
#include "CoreMinimal.h"
#include "TresFriendLinkPawnBase.h"
#include "TresFriendLinkPawnMikeBowling.generated.h"

UCLASS(Blueprintable)
class ATresFriendLinkPawnMikeBowling : public ATresFriendLinkPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTurnYawMax;
    
    ATresFriendLinkPawnMikeBowling(const FObjectInitializer& ObjectInitializer);
};

