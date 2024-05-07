#pragma once
#include "CoreMinimal.h"
#include "RaiseCutRootMotionScaleParam_e_ex761.generated.h"

USTRUCT(BlueprintType)
struct FRaiseCutRootMotionScaleParam_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootMotionScale;
    
    TRESGAME_API FRaiseCutRootMotionScaleParam_e_ex761();
};

