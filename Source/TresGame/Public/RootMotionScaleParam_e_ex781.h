#pragma once
#include "CoreMinimal.h"
#include "RootMotionScaleParam_e_ex781.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionScaleParam_e_ex781 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RootMotionScale;
    
    TRESGAME_API FRootMotionScaleParam_e_ex781();
};

