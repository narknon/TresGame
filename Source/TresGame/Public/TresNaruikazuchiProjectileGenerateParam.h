#pragma once
#include "CoreMinimal.h"
#include "TresNaruikazuchiProjectileGenerateParam.generated.h"

USTRUCT(BlueprintType)
struct FTresNaruikazuchiProjectileGenerateParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingAngle;
    
    TRESGAME_API FTresNaruikazuchiProjectileGenerateParam();
};

