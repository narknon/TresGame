#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_ActionTaskLimitPhaseCheck.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_ActionTaskLimitPhaseCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Phase;
    
    UTresNpcBTDecorator_ActionTaskLimitPhaseCheck();
};

