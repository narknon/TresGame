#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Blackboard/BlackboardKeyType.h"
#include "ETresEnemyUniqueID.h"
#include "TresNpcBTDecorator_EnemyCountCheck.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_EnemyCountCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EnemyNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EArithmeticKeyOperation::Type> m_ArithmeticOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresEnemyUniqueID> m_IgnoreEnemiesUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableLockon;
    
    UTresNpcBTDecorator_EnemyCountCheck();
};

