#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTTask_GetCameraLocation.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTTask_GetCameraLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_BlackboardValue;
    
    UTresNpcBTTask_GetCameraLocation();
};

