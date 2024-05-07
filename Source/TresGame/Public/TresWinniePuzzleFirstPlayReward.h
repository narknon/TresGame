#pragma once
#include "CoreMinimal.h"
#include "ETresItemDefFoodstuff.h"
#include "TresWinniePuzzleFirstPlayReward.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleFirstPlayReward {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefFoodstuff FoodStuff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 EarnNum;
    
    TRESGAME_API FTresWinniePuzzleFirstPlayReward();
};

