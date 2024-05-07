#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyEx353RootMotionCorrectionKind.h"
#include "TresEnemyEx353RootMotionScaleParam.h"
#include "TresEnemyEx353RootMotionScaleInfo.generated.h"

class UCurveFloat;

USTRUCT(BlueprintType)
struct FTresEnemyEx353RootMotionScaleInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx353RootMotionCorrectionKind RootMotionCorrectionKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* RootMotionScaleCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyEx353RootMotionScaleParam MinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresEnemyEx353RootMotionScaleParam MaxRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChangeCorrectionKindDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRootMotionScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimTargetBackDistance;
    
    TRESGAME_API FTresEnemyEx353RootMotionScaleInfo();
};

