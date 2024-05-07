#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "BehaviorTree/Tasks/BTTask_SetTagCooldown.h"
#include "TresBTTask_SetTagCooldownBB.generated.h"

UCLASS(Blueprintable)
class UTresBTTask_SetTagCooldownBB : public UBTTask_SetTagCooldown {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBlackboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BlackboardKey;
    
public:
    UTresBTTask_SetTagCooldownBB();
};

