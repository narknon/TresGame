#pragma once
#include "CoreMinimal.h"
#include "MissionIntervalParamTimeStamp_e_ex082.generated.h"

USTRUCT(BlueprintType)
struct FMissionIntervalParamTimeStamp_e_ex082 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ElapsedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalTime;
    
    TRESGAME_API FMissionIntervalParamTimeStamp_e_ex082();
};

