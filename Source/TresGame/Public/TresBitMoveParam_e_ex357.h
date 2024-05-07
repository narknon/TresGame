#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresBitMoveParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTresBitMoveParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval RadiusRange;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval HeightRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AppearEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveStartIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveSpeed;
    
    TRESGAME_API FTresBitMoveParam_e_ex357();
};

