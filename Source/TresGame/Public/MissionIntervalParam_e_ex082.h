#pragma once
#include "CoreMinimal.h"
#include "MissionIntervalParamTimeStamp_e_ex082.h"
#include "MissionIntervalParam_e_ex082.generated.h"

USTRUCT(BlueprintType)
struct FMissionIntervalParam_e_ex082 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableTimeStampInterval: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IntervalReduceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMissionIntervalParamTimeStamp_e_ex082> TimeStampIntervalArray;
    
    TRESGAME_API FMissionIntervalParam_e_ex082();
};

