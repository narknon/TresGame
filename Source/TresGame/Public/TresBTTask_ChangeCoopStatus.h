#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "ETresCoopRunningStatus.h"
#include "TresBTTask_ChangeCoopStatus.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_ChangeCoopStatus : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCoopRunningStatus m_CoopStatus;
    
    UTresBTTask_ChangeCoopStatus();
};

