#pragma once
#include "CoreMinimal.h"
#include "EDanceActorAction.h"
#include "TresDanceNpcActionSet.generated.h"

USTRUCT(BlueprintType)
struct FTresDanceNpcActionSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<EDanceActorAction> ActionList;
    
    TRESGAME_API FTresDanceNpcActionSet();
};

