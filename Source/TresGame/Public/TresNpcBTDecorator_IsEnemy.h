#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresEnemyUniqueID.h"
#include "TresNpcBTDecorator_IsEnemy.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsEnemy : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresEnemyUniqueID> m_EnemiesUID;
    
    UTresNpcBTDecorator_IsEnemy();
};

