#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleHoneypotFillProbabilityParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotFillProbabilityParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 diffNumBetweenMaxAndExist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float spawnNewOneProbability;
    
    TRESGAME_API FTresWinniePuzzleHoneypotFillProbabilityParam();
};

