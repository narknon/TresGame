#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_ActionTaskLimitCountCheck.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_ActionTaskLimitCountCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Count;
    
    UTresNpcBTDecorator_ActionTaskLimitCountCheck();
};

