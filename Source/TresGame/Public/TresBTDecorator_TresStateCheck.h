#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresStateID.h"
#include "TresBTDecorator_TresStateCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_TresStateCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresStateID>> m_States;
    
    UTresBTDecorator_TresStateCheck();
};

