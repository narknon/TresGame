#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuFrame.h"
#include "TresDebugMenuLayer.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuLayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuFrame> m_Frames;
    
    TRESGAME_API FTresDebugMenuLayer();
};

