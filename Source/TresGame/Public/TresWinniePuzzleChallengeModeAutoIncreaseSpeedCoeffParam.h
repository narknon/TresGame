#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseSpeedCoeff;
    
    TRESGAME_API FTresWinniePuzzleChallengeModeAutoIncreaseSpeedCoeffParam();
};

