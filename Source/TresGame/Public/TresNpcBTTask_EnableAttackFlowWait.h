#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_EnableAttackFlowWait.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_EnableAttackFlowWait : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnable;
    
    UTresNpcBTTask_EnableAttackFlowWait();
};

