#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InvolvedUnitsNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreaseValue;
    
    TRESGAME_API FTresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam();
};

