#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingSwing.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingSwing {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bOverrideKnockDetectVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float KnockDetectVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bOverrideRubDetectVelocityThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float RubDetectVelocityThreshold;
    
    FSQEXSEADAutoSeDetectorSettingSwing();
};

