#pragma once
#include "CoreMinimal.h"
#include "TresAreaEffectCurveData.generated.h"

class UCurveVector;
class UCurveFloat;

USTRUCT(BlueprintType)
struct FTresAreaEffectCurveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* AreaBaseColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* AreaBrightColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* AreaDarkColorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* AreaColorSynthesisCurve;
    
    TRESGAME_API FTresAreaEffectCurveData();
};

