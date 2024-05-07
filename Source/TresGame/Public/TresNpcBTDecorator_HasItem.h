#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresNpcUseItemType.h"
#include "TresNpcBTDecorator_HasItem.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_HasItem : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresNpcUseItemType m_UseItemType;
    
    UTresNpcBTDecorator_HasItem();
};

