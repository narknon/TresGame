#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TresBehaviorTreeInjectionData.generated.h"

class UBehaviorTree;

USTRUCT(BlueprintType)
struct FTresBehaviorTreeInjectionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag InjectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    TRESGAME_API FTresBehaviorTreeInjectionData();
};

