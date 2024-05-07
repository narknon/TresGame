#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTTaskNode.h"
#include "TresBTTask_ex367_CallFunction.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_ex367_CallFunction : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PropertyName;
    
    UTresBTTask_ex367_CallFunction();
};

