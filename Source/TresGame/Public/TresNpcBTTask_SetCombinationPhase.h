#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresNpcBTTask_SetCombinationPhase.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_SetCombinationPhase : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PhaseIndex;
    
    UTresNpcBTTask_SetCombinationPhase();
};

