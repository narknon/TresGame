#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTTask_Noop.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_Noop : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EBTNodeResult::Type> m_SelectionType;
    
    UTresBTTask_Noop();
};

