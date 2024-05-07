#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleHoneypotGaugeIncreaseValueParam.h"
#include "TresWinniePuzzleChallengeModeHoneypotGaugeParam.h"
#include "TresWinniePuzzleHoneypotGaugeParam.generated.h"

USTRUCT(BlueprintType)
struct FTresWinniePuzzleHoneypotGaugeParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GaugeValueMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleHoneypotGaugeIncreaseValueParam> GaugeIncreaseValueParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeIncreaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GaugeIncreaseEffectLifetime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresWinniePuzzleChallengeModeHoneypotGaugeParam> ChallengeModeParam;
    
    TRESGAME_API FTresWinniePuzzleHoneypotGaugeParam();
};

