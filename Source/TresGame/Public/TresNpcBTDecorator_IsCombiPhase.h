#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_IsCombiPhase.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsCombiPhase : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_PhaseIndex;
    
    UTresNpcBTDecorator_IsCombiPhase();
};

