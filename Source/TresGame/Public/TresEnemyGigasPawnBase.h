#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyGigasPawnBase.generated.h"

class UParticleSystem;
class ATresVehiclePawnGigas;
class UParticleSystemComponent;
class ATresEnemyPawn_e_ex015;
class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyGigasPawnBase : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresVehiclePawnGigas> m_VehiclePawnGigasClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex015> m_e_ex015Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_DisableGigasPC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_DieBlowTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_ShotNumMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_ShotNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_AimShotMinNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_AimShotMaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShotBureDistMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShotBureDistMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShotHoseiAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ShotLoopMotionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_UltimaModeShotNumMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_UltimaModeShotNumMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_UltimaModeShotLoopMotionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_PunchMotionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_BombMotionPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_pro_CanbeUltimaModeHpPer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_LightMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_LightMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_LightSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_LightFadeOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_DamageAddMotionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_BoosterBlendRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_BoosterUpPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_BoosterDownPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_BattleEscapeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_UltimaModeBattleEscapeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_AuraRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AuraEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_AuraEff;
    
protected:
    UPROPERTY(EditAnywhere, Export)
    UParticleSystemComponent* m_VernierEff[6];
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_VernierEffData;
    
    ATresEnemyGigasPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetStateMachineStep(int32 step);
    
    UFUNCTION(BlueprintCallable)
    bool IsUltimaMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsFlyMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetWaistRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetUpperBodyBlendRate() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetStateMachineStep();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMachineGunBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDamageAddBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoosterUpBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoosterTopMachineGunBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoosterTopBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoosterMachineGunBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoosterDownMachineGunBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoosterDownBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBoosterAddBlendRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAimOffsetAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanbeUltimaMode();
    
};

