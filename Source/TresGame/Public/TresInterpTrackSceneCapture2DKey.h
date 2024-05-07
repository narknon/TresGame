#pragma once
#include "CoreMinimal.h"
#include "TresInterpTrackSceneCapture2DKey.generated.h"

USTRUCT(BlueprintType)
struct FTresInterpTrackSceneCapture2DKey {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TargetCamGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_CaptureEveryFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CaptureRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CaptureOffsetTime;
    
    TRESGAME_API FTresInterpTrackSceneCapture2DKey();
};

