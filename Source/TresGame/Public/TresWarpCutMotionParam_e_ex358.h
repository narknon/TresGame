#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyWarpCutMotionType_e_ex357.h"
#include "TresWarpCutMotionParam_e_ex358.generated.h"

USTRUCT(BlueprintType)
struct FTresWarpCutMotionParam_e_ex358 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyWarpCutMotionType_e_ex357> MotionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnimStartTime;
    
    TRESGAME_API FTresWarpCutMotionParam_e_ex358();
};

