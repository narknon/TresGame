#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresFNpcAICombiRole.h"
#include "TresNpcBTDecorator_IsCombiRole.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsCombiRole : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresFNpcAICombiRole m_Role;
    
    UTresNpcBTDecorator_IsCombiRole();
};

