#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "ETresGameLevelID.h"
#include "TresBTDecorator_GameLevelCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_GameLevelCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGameLevelID> m_GameLevel;
    
    UTresBTDecorator_GameLevelCheck();
};

