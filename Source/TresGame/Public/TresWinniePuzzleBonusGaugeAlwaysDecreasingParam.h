#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleBonusGaugeAlwaysDecreasingParam.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsEnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreasingBaseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DecreasingSpeedChangeCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreasingBaseSpeedOnSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* DecreasingSpeedChangeCurveOnSecond;
    
    TRESGAME_API FTresWinniePuzzleBonusGaugeAlwaysDecreasingParam();
};

