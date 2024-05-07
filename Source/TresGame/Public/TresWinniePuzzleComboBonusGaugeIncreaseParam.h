#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeIncreaseByComboParam.h"
#include "TresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam.h"
#include "TresWinniePuzzleBonusGaugeIncreaseRateParam.h"
#include "TresWinniePuzzleComboBonusGaugeIncreaseParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleComboBonusGaugeIncreaseParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleBonusGaugeIncreaseByComboParam> IncreaseByComboParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleBonusGaugeIncreaseByInvolvedUnitsNumParam> IncreaseByInvolvedUnitsNumParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleBonusGaugeIncreaseRateParam> IncreaseRateParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableIncreaseRateWhenGetCombo2OrMore;
    
    TRESGAME_API FTresWinniePuzzleComboBonusGaugeIncreaseParam();
};

