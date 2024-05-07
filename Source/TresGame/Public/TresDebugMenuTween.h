#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuIntPair.h"
#include "ETresDebugMenuTweenType.h"
#include "TresDebugMenuTween.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuTween {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StartFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EndFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresDebugMenuTweenType> m_TweenType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresDebugMenuIntPair m_ElementPair;
    
    TRESGAME_API FTresDebugMenuTween();
};

