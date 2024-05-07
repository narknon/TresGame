#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "ETresFNpcAINpcMode.h"
#include "TresNpcBTDecorator_IsNpcModeType.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsNpcModeType : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresFNpcAINpcMode> m_NpcModes;
    
    UTresNpcBTDecorator_IsNpcModeType();
};

