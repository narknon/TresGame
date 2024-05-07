#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresCoopDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "CameraEventParam_e_ex761.h"
#include "AttackParam_e_ex761.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop2_e_ex761_WavyLightning.generated.h"

class UParticleSystem;
class UEnvQuery;
class ATresProjectileBase;

UCLASS(Blueprintable, HideDropdown)
class UTresCoop2_e_ex761_WavyLightning : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CameraCenterParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_CameraAppearCenterLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraAppearRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraEventParam_e_ex761 m_CameraFirstEventParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraEventParam_e_ex761 m_CameraNotFirstEventParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_LightningProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DummyLightningSpawnIntervalTime;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_DummyLightningSpawnRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DummyLightningMinIntervalDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AimLightningSpawnIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AimLightningAttackStartSpawnIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AimLightningSpawnLocationRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsAttackStartFinish: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackStartFinishLightningEndDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackStartDelyaTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_AttackAimLightningIntervalTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAttackParam_e_ex761> m_AttackParamList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RaiseCutStartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RaiseCutAppearDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FinishStartDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FinishAttachEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FinishAppearIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FinishAppearDistance;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_FinishAppearOffsetHeightList[11];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    float m_FinishAppearAttackHitOffsetHeightList[11];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DarknessSpreadOutAppearBlockDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DarknessSpreadOutAppearBlockOtherPawnDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_VisualChangeEndDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CenterSignParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LightCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LightChangeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LightChangeEndTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SignEffectDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EnvChangeDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LightChangeDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_FindReferencePointEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FindReferencePointIntervalTime;
    
public:
    UTresCoop2_e_ex761_WavyLightning();
    UFUNCTION(BlueprintCallable)
    void OnStartEnd(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnRaiseCutEnd(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnRaiseCutAttackHit(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnFinishEnd(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnDarknessSpreadOutStart(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnAttackEnd(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    void OnAppearEnd(const FTresCoopDefinitionParamBP& Param);
    
};

