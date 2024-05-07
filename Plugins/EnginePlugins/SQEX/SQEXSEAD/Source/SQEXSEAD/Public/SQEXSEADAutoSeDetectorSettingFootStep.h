#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingFootStep.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingFootStep {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bOverrideFootShuffleAssumeBodyStopVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float FootShuffleAssumeBodyStopVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bOverrideFootShuffleDetectFootAccelThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float FootShuffleDetectFootAccelThreshold;
    
    FSQEXSEADAutoSeDetectorSettingFootStep();
};

