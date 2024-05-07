#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx361CounterAfterActionKind.h"
#include "ETresAIActionAbortTimingID.h"
#include "TresEnemyEx361CounterAfterActionInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx361CounterAfterActionInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx361CounterAfterActionKind ActionKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresAIActionAbortTimingID AbortActionID;
    
    TRESGAME_API FTresEnemyEx361CounterAfterActionInfo();
};

