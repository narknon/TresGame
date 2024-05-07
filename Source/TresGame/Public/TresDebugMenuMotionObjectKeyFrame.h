#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresDebugMenuMotionObjectKeyFrame.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuMotionObjectKeyFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_Anchor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_Previous;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Time;
    
    TRESGAME_API FTresDebugMenuMotionObjectKeyFrame();
};

