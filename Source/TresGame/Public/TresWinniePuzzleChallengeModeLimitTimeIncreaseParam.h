#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleChallengeModeLimitTimeIncreaseParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeLimitTimeIncreaseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreaseTime;
    
    TRESGAME_API FTresWinniePuzzleChallengeModeLimitTimeIncreaseParam();
};

