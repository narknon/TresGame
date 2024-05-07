#pragma once
#include "CoreMinimal.h"
#include "TresAdhereObjBase.h"
#include "TresAdhereCloud.generated.h"

UCLASS(Blueprintable)
class ATresAdhereCloud : public ATresAdhereObjBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeatherTimeCloud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeatherCloudParamCTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeatherTimeLightRain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeatherLightRainParamCTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeatherTimeHeavyRain;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WeatherHeavyRainParamCTarget;
    
public:
    ATresAdhereCloud(const FObjectInitializer& ObjectInitializer);
};

