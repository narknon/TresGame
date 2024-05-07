#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_e_ex006_SetCoopDashLocation.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_e_ex006_SetCoopDashLocation : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Destination;
    
    UTresBTTask_e_ex006_SetCoopDashLocation();
};

