#pragma once
#include "CoreMinimal.h"
#include "DeviationShotInfo_e_ex306.generated.h"

USTRUCT(BlueprintType)
struct FDeviationShotInfo_e_ex306 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fDeviationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float fMaxDeviationTargetVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNoVerticalDiviation;
    
    TRESGAME_API FDeviationShotInfo_e_ex306();
};

