#pragma once
#include "CoreMinimal.h"
#include "TripleBreakRootMotionScaleParam_e_ex043.generated.h"

USTRUCT(BlueprintType)
struct FTripleBreakRootMotionScaleParam_e_ex043 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootMotionScale;
    
    TRESGAME_API FTripleBreakRootMotionScaleParam_e_ex043();
};

