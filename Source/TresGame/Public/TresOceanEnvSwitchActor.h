#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SQEX_OceanEnvSwitchActor -FallbackName=SQEX_OceanEnvSwitchActor
#include "SQEX_OceanEnvSwitchActor.h"
#include "TresOceanEnvSwitchSignatureDelegate.h"
#include "TresOceanEnvSwitchActor.generated.h"

class AEmitterCameraLensEffectBase;
class AActor;
class ATresOceanShaderController;
class APostProcessVolume;
class ATresOceanPostProcessVolume;

UCLASS(Blueprintable)
class ATresOceanEnvSwitchActor : public ASQEX_OceanEnvSwitchActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresOceanEnvSwitchSignature OnChangeDiveMode;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bChangeOceanMaterialIndex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresOceanShaderController* m_pOceanController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OceanMaterialOverSea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_OceanMaterialUnderSea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bChangeOceanPostProcessVolume: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    APostProcessVolume* m_pPostProcessOverSea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresOceanPostProcessVolume* m_pPostProcessUnderSea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_PostProcessBlendTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bChangeLightProperty: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pLightPropertyChangeActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TemperatureOverSea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TemperatureUnderSea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEmitterCameraLensEffectBase> m_InLensEffectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AEmitterCameraLensEffectBase> m_OutLensEffectClass;
    
public:
    ATresOceanEnvSwitchActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void BP_SetOceanMaterialIndex(int32 InOverSeaIndex, int32 InUnderSeaIndex);
    
};

