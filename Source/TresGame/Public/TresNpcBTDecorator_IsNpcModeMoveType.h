#pragma once
#include "CoreMinimal.h"
#include "TresNpcBTDecoratorBase.h"
#include "TresNpcBTDecorator_IsNpcModeMoveType.generated.h"

UCLASS(Blueprintable)
class UTresNpcBTDecorator_IsNpcModeMoveType : public UTresNpcBTDecoratorBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWalk;
    
    UTresNpcBTDecorator_IsNpcModeMoveType();
};

