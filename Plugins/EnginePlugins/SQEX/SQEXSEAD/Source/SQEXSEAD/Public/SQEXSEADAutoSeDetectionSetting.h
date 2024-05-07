#pragma once
#include "CoreMinimal.h"
#include "SQEXSEADAutoSeDetectorSettingRustle.h"
#include "Engine/DataAsset.h"
#include "SQEXSEADAutoSeAnalyzerSetting.h"
#include "SQEXSEADAutoSeDetectorSettingFootStep.h"
#include "SQEXSEADAutoSeDetectorSettingSwing.h"
#include "SQEXSEADAutoSeDetectionSetting.generated.h"

UCLASS(BlueprintType)
class SQEXSEAD_API USQEXSEADAutoSeDetectionSetting : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FSQEXSEADAutoSeAnalyzerSetting AnalyzerSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    bool bUseAnalyzerSettingForMotionOnlyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FSQEXSEADAutoSeAnalyzerSetting AnalyzerSettingForMotionOnlyMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FSQEXSEADAutoSeDetectorSettingFootStep DetectorSettingFootStep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FSQEXSEADAutoSeDetectorSettingRustle DetectorSettingRustle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    FSQEXSEADAutoSeDetectorSettingSwing DetectorSettingSwing;
    
    USQEXSEADAutoSeDetectionSetting();
};

