#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresNpcActionOnType.h"
#include "TresNpcBTDecorator_IsActionOn.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsActionOn : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresNpcActionOnType> m_ActionOnType;
    
    UTresNpcBTDecorator_IsActionOn();
};

