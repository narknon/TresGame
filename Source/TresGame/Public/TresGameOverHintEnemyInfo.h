#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyUniqueID.h"
#include "TresGameOverHintEnemyInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresGameOverHintEnemyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyUniqueID ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> AttackID;
    
    TRESGAME_API FTresGameOverHintEnemyInfo();
};

