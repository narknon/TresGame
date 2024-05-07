#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_IsHairSwingTree.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsHairSwingTree : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UTresNpcBTDecorator_IsHairSwingTree();
};

