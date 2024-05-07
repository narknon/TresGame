#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeIncreaseByComboParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeIncreaseByComboParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ComboValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IncreaseValue;
    
    TRESGAME_API FTresWinniePuzzleBonusGaugeIncreaseByComboParam();
};

