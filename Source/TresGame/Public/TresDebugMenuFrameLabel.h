#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuFrameLabel.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuFrameLabel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LabelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_LabelFrame;
    
    TRESGAME_API FTresDebugMenuFrameLabel();
};

