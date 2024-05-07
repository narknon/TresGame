#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx351RootMotionScaleParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx351RootMotionScaleParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootMotionScale;
    
    TRESGAME_API FTresEnemyEx351RootMotionScaleParam();
};

