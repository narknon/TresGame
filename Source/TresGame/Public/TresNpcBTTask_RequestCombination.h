#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresFNpcAICombiID.h"
#include "TresNpcBTTask_RequestCombination.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_RequestCombination : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresFNpcAICombiID m_CombiID;
    
    UTresNpcBTTask_RequestCombination();
};

