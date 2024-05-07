#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIBlurParams.h"
#include "TresUIFlowScopeDataAsset.generated.h"

class UTexture;

UCLASS(Blueprintable)
class UTresUIFlowScopeDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIBlurParams InitialUIBlurParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIBlurParams InUIBlurParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InUIBlurTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIBlurParams OutUIBlurParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutUIBlurTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresUIBlurParams SelectUIBlurParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SelectUIBlurTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture* UIBlurMaskTexture;
    
    UTresUIFlowScopeDataAsset();
};

