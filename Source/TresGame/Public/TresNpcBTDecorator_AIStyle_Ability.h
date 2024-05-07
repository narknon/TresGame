#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresFNpcAIStyle_Ability.h"
#include "TresNpcBTDecorator_AIStyle_Ability.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_AIStyle_Ability : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresFNpcAIStyle_Ability m_AbilityStyle;
    
    UTresNpcBTDecorator_AIStyle_Ability();
};

