#pragma once
#include "CoreMinimal.h"
#include "CameraEventParam_e_ex761.generated.h"

USTRUCT(BlueprintType)
struct FCameraEventParam_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CenterEffectSpawnDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualChangeStartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LightningStartDelayTime;
    
    TRESGAME_API FCameraEventParam_e_ex761();
};

