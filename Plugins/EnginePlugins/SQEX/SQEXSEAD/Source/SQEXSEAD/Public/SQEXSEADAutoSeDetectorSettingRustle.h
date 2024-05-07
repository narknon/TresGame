#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingRustle.generated.h"

USTRUCT(BlueprintType)
struct SQEXSEAD_API FSQEXSEADAutoSeDetectorSettingRustle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bOverrideElbowRustleVolumeRangesWalk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ElbowRustleRelativeVelocityForNmlVolumeRangeWalkMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ElbowRustleVolumeRangeWalkMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ElbowRustleVolumeRangeWalkMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bOverrideElbowRustleVolumeRangesRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ElbowRustleRelativeVelocityForNmlVolumeRangeRunMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ElbowRustleRelativeVelocityForNmlVolumeRangeRunMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ElbowRustleVolumeRangeRunMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    float ElbowRustleVolumeRangeRunMax;
    
    FSQEXSEADAutoSeDetectorSettingRustle();
};

