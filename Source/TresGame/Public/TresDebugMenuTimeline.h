#pragma once
#include "CoreMinimal.h"
#include "TresDebugMenuLayer.h"
#include "TresDebugMenuTimeline.generated.h"

USTRUCT(BlueprintType)
struct FTresDebugMenuTimeline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresDebugMenuLayer> m_Layers;
    
    TRESGAME_API FTresDebugMenuTimeline();
};

