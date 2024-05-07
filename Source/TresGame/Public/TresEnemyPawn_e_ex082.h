#pragma once
#include "CoreMinimal.h"
#include "TresEnemyEx082_SnowEffectParam.h"
#include "TresEnemyPawnBase.h"
#include "SaveInfo_e_ex082.h"
#include "TresEnemyPawn_e_ex082.generated.h"

class UParticleSystem;
class UEnvQuery;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex082 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_LandSnowEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LandSnowEffectBoneName;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresEnemyEx082_SnowEffectParam m_SnowEffectParam[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SnowEffectHitCheckSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_ModeChangeEnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableAppearState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableMissionLookAt: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableTiltBody: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UClass* m_MissionManagerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MissionAttackCollisionGroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_MissionAttackDataIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MissionAttackIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MissionInitSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSaveInfo_e_ex082 m_SaveInfo;
    
public:
    ATresEnemyPawn_e_ex082(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetAppearStateSpecial();
    
    UFUNCTION(BlueprintCallable)
    void MissionStart();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartModeChange() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLandMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableMissionLookAt() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAllRegionBreaked() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetNumUpthrust(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetNumRush(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetMissionDrawDisplay(int32 bEnable);
    
};

