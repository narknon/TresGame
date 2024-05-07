#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTTask_UpdateLeadPoint.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_UpdateLeadPoint : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_LeadTarget;
    
    UTresNpcBTTask_UpdateLeadPoint();
};

