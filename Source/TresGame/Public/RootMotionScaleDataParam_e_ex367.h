#pragma once
#include "CoreMinimal.h"
#include "RootMotionScaleParam_e_ex367.h"
#include "RootMotionScaleDataParam_e_ex367.generated.h"

USTRUCT(BlueprintType)
struct FRootMotionScaleDataParam_e_ex367 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableAttackHitResetRootMotionScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex367 MinRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionScaleParam_e_ex367 MaxRootMotionScaleParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetDistOffset;
    
    TRESGAME_API FRootMotionScaleDataParam_e_ex367();
};

