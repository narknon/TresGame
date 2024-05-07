#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresFNpcAICombiID.h"
#include "TresNpcBTDecorator_IsCombiID.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsCombiID : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresFNpcAICombiID m_Id;
    
    UTresNpcBTDecorator_IsCombiID();
};

