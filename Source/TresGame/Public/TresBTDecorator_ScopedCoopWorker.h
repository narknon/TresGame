#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTDecorator.h"
#include "TresBTDecorator_ScopedCoopWorker.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_ScopedCoopWorker : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExecutablePriority;
    
    UTresBTDecorator_ScopedCoopWorker();
};

