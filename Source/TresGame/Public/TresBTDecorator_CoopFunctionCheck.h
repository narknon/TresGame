#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_CoopFunctionCheck.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_CoopFunctionCheck : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FunctionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAutomaticallyEnterNodeName: 1;
    
    UTresBTDecorator_CoopFunctionCheck();
};

