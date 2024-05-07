#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIDoFParams.h"
#include "TresUISlowModeDataAsset.generated.h"

UCLASS(Blueprintable)
class UTresUISlowModeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIDoFParams DoFParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DoFTransitionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SlowRate;
    
    UTresUISlowModeDataAsset();
};

