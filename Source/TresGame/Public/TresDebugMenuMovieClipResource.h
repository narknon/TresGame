#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuTimeline.h"
#include "TresDebugMenuFrameLabel.h"
#include "TresDebugMenuTween.h"
#include "TresDebugMenuMovieClipResource.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuMovieClipResource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FrameRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuFrameLabel> m_Labels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuTween> m_Tween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuTimeline> m_Timelines;
    
    TRESGAME_API FTresDebugMenuMovieClipResource();
};

