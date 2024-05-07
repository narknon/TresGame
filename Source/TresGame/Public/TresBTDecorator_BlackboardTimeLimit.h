#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_BlackboardTimeLimit.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_BlackboardTimeLimit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_TimeLimit;
    
    UTresBTDecorator_BlackboardTimeLimit();
};

