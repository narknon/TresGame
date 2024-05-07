#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx006ScrumState.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_e_ex006_CoopScrumManagerChangeStatus.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_e_ex006_CoopScrumManagerChangeStatus : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx006ScrumState m_CoopStatus;
    
    UTresBTTask_e_ex006_CoopScrumManagerChangeStatus();
};

