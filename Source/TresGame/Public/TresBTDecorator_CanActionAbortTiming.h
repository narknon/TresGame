#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "ETresAIActionAbortTimingID.h"
#include "TresBTDecorator_CanActionAbortTiming.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_CanActionAbortTiming : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresAIActionAbortTimingID> m_IDList;
    
    UTresBTDecorator_CanActionAbortTiming();
};

