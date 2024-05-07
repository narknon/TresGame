#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx353HomingParam.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyEx353HomingParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingSpeedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingSpeedPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingMinDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HomingAbsTime;
    
    TRESGAME_API FTresEnemyEx353HomingParam();
};

