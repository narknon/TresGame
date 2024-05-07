#pragma once
#include "CoreMinimal.h"
#include "TresShotParam_e_ex701.generated.h"

USTRUCT(BlueprintType)
struct FTresShotParam_e_ex701 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingTargetRange;
    
    TRESGAME_API FTresShotParam_e_ex701();
};

