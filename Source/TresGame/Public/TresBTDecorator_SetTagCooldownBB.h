#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/Decorators/BTDecorator_SetTagCooldown.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "TresBTDecorator_SetTagCooldownBB.generated.h"

UCLASS(Blueprintable)
class UTresBTDecorator_SetTagCooldownBB : public UBTDecorator_SetTagCooldown {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UTresBTDecorator_SetTagCooldownBB();
};

