#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx304RootMotionScaleInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTresEnemyEx304RootMotionScaleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RootMotionScaleCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOverRunTarget: 1;
    
    TRESGAME_API FTresEnemyEx304RootMotionScaleInfo();
};

