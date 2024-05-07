#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnRuleChildGenerator.h"
#include "TresLotterySpawnActorData.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FTresLotterySpawnActorData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Power;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresSpawnRuleChildGenerator ChildGeneratorRule;
    
    TRESGAME_API FTresLotterySpawnActorData();
};

