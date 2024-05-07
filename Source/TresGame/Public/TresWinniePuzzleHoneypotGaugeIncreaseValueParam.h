#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleHoneypotGaugeIncreaseValueParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotGaugeIncreaseValueParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HoneypotComboNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IncreaseValue;
    
    TRESGAME_API FTresWinniePuzzleHoneypotGaugeIncreaseValueParam();
};

