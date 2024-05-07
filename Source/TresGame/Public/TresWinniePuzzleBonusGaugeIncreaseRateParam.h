#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeIncreaseRateParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseRateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BonusUnitsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Rate;
    
    TRESGAME_API FTresWinniePuzzleBonusGaugeIncreaseRateParam();
};

