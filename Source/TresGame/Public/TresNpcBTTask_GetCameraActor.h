#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTTask_GetCameraActor.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_GetCameraActor : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardValue;
    
    UTresNpcBTTask_GetCameraActor();
};

