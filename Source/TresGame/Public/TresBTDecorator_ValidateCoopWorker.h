#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ValidateCoopWorker.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_ValidateCoopWorker : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecutablePriority;
    
    UTresBTDecorator_ValidateCoopWorker();
};

