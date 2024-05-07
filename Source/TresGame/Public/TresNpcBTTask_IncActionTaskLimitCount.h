#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_IncActionTaskLimitCount.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_IncActionTaskLimitCount : public UBTTaskNode {
    GENERATED_BODY()
public:
    UTresNpcBTTask_IncActionTaskLimitCount();
};

