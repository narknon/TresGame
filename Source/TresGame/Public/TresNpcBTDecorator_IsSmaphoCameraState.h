#pragma once
#include "CoreMinimal.h"
#include "ETresNpcSmartphoneCameraState.h"
#include "TresNpcBTDecoratorBase.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresNpcBTDecorator_IsSmaphoCameraState.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsSmaphoCameraState : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector m_Source;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresNpcSmartphoneCameraState> m_States;
    
    UTresNpcBTDecorator_IsSmaphoCameraState();
};

