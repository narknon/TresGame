#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_CoverWaitCheck.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_CoverWaitCheck : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AdjustLength;
    
    UTresNpcBTDecorator_CoverWaitCheck();
};

