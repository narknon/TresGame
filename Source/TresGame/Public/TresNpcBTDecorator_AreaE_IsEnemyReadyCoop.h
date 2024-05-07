#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_AreaE_IsEnemyReadyCoop.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_AreaE_IsEnemyReadyCoop : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UTresNpcBTDecorator_AreaE_IsEnemyReadyCoop();
};

