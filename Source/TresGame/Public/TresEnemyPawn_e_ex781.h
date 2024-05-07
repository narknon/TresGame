#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILPawnBase.h"
#include "ETresStateID.h"
#include "TresEnemyPawn_e_ex781.generated.h"

class ATresGenerator_e_ex781_GunShotMarker;
class UTresStateBase;
class ATresEnemyPawn_e_ex781_TetraBitManager;
class UTresActionDefinitionBase;
class ATresGimmick_e_ex781_Avatar;
class UParticleSystem;
class ATresEnemyPawnBase;
class ATresGimmick_e_ex781_GravitySphere;
class UParticleSystemComponent;
class AActor;
class ATresKHSBlendVolume;
class ATresGenerator_e_ex781_CallGigas;
class ATresCameraForceLockon;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex781 : public ATresEnemyXIIILPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OpacityFadeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_AeroGuardState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_BackJumpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HeartBreakStartDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresActionDefinitionBase> m_FallWarpState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArmorBreakKnockBackPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArmorBreakKnockBackBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex781_TetraBitManager> m_TetraBitManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGimmick_e_ex781_Avatar> m_AvatarManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresGenerator_e_ex781_GunShotMarker>> m_PatternChaseBeamClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<ATresEnemyPawnBase>> m_SpawnGigasClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_VacuumParticleEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_VacuumParticleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AfterImageEffId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BattleeAreaRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BattleeAreaOutSideWarpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BattleeAreaOutSideWarpHigh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresGimmick_e_ex781_GravitySphere> m_GravitySphereClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresGimmick_e_ex781_GravitySphere* m_pGravitySphere;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex781_TetraBitManager* m_TetraBitManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGimmick_e_ex781_Avatar* m_AvatarManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_VacuumParticleEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_FireList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresKHSBlendVolume* m_KHSBlendVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGenerator_e_ex781_GunShotMarker* m_ChaseBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresGenerator_e_ex781_CallGigas* m_CallGigasGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraForceLockon* m_ClimaxSceneCamera;
    
public:
    ATresEnemyPawn_e_ex781(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SkipPerformance();
    
    UFUNCTION(BlueprintCallable)
    void SetBBUseMogMedal(bool Hit);
    
    UFUNCTION(BlueprintCallable)
    bool IsVisibleCharacter();
    
    UFUNCTION(BlueprintCallable)
    bool IsTetraCircleMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHVGravityScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHVCrimaxScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHVCraftScene() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHighVoltageMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHeartBreakMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsGravitySphereSlashWaitMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrimaxCatchPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAvaterMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsAeroMoveMode();
    
    UFUNCTION(BlueprintCallable)
    bool IsAeroArmorMode();
    
    UFUNCTION(BlueprintCallable)
    bool InBattleField();
    
    UFUNCTION(BlueprintCallable)
    bool BP_SetGravitySphereState(TEnumAsByte<ETresStateID> InState);
    
    UFUNCTION(BlueprintCallable)
    void BP_RecoveryByMogMedal();
    
    UFUNCTION(BlueprintCallable)
    void BP_CleanUpForMogMedal();
    
    UFUNCTION(BlueprintCallable)
    bool AliveChaseBeamGenerator();
    
    UFUNCTION(BlueprintCallable)
    bool AliveCallGigasGenerator();
    
};

