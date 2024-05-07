#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresFNpcAIStyle_Cure.h"
#include "TresNpcBTDecorator_AIStyle_Cure.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_AIStyle_Cure : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresFNpcAIStyle_Cure m_CureStyle;
    
    UTresNpcBTDecorator_AIStyle_Cure();
};

