#pragma once
#include "CoreMinimal.h"
#include "TresBTDecorator_CanActionAbortTiming.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_CanActionAbortTimingNumber.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_CanActionAbortTimingNumber : public UTresBTDecorator_CanActionAbortTiming {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_NumberList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBlackboardKeySelector> m_BlackboardKeyNumberList;
    
    UTresBTDecorator_CanActionAbortTimingNumber();
};

