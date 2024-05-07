#pragma once
#include "CoreMinimal.h"
#include "ETresChrUniqueID.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetFriendTarget.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_SetFriendTarget : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID m_ChrUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_isTargetActor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_isDestination: 1;
    
    UTresNpcBTTask_SetFriendTarget();
};

