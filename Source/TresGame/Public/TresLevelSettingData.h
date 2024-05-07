#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresLevelSettingData.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresLevelSettingData : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AsyncLoadingTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AsyncLoadingUseFullTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PriorityAsyncLoadingExtraTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelStreamingActorsUpdateTimeLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelStreamingComponentsRegistrationGranularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LevelStreamingComponentsUnregistrationGranularity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LevelStreamingUnregisterComponentsTimeLimit;
    
public:
    UTresLevelSettingData();
};

