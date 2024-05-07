#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353RootMotionScaleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353RootMotionScaleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootMotionScale;
    
    TRESGAME_API FTresEnemyEx353RootMotionScaleParam();
};

