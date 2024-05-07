#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresCommandKind.h"
#include "TresNpcBTTask_SetFriendLinkCommand.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_SetFriendLinkCommand : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_CommandSet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresCommandKind> m_CommandKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ReceptionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_CommandAuto: 1;
    
    UTresNpcBTTask_SetFriendLinkCommand();
};

