#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "TresBTDecorator_PlayerNextRailSlideActorRangeCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_PlayerNextRailSlideActorRangeCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Value;
    
    UTresBTDecorator_PlayerNextRailSlideActorRangeCheck();
};

