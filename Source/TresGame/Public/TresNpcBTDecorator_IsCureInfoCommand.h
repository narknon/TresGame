#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "ETresCommandKind.h"
#include "TresNpcBTDecorator_IsCureInfoCommand.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsCureInfoCommand : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresCommandKind> m_Command;
    
    UTresNpcBTDecorator_IsCureInfoCommand();
};

