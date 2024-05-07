#pragma once
#include "CoreMinimal.h"
#include "TresUIActorSetting.generated.h"

USTRUCT(BlueprintType)
struct FTresUIActorSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightSetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PostProcessSetIndex;
    
    TRESGAME_API FTresUIActorSetting();
};

