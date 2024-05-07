#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "RegionParam_e_ex046.h"
#include "SaveInfo_e_ex046.h"
#include "TresEnemyPawn_e_ex046.generated.h"

class ATresEnemyRegionPawn_e_ex046;
class UParticleSystem;
class UTresStateBase;
class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex046 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearRiseSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearRiseEndHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_MoveEffectAttachDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_RegionBreakEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableMissionTick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyRegionPawn_e_ex046> m_RegionPawnClass;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FRegionParam_e_ex046 m_RegionParams[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresStateBase> m_ModeChangeClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    FSaveInfo_e_ex046 m_SaveInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> m_DebugBlizzardBreathClassFilePathList;
    
public:
    ATresEnemyPawn_e_ex046(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetAppearStateSpecial();
    
    UFUNCTION(BlueprintCallable)
    void PostAnimUpdate();
    
    UFUNCTION(BlueprintCallable)
    bool IsMissionFinishMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLandMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFlyMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsAllRegionBreaked() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetNumRegionBreak() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetMissionAimOffsetValue() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMissionAimOffsetRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLookAtRotation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLookAtBoneRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastAttackElapsedTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UClass* GetBlizzardBreathAttackDefinitionClass() const;
    
    UFUNCTION(BlueprintCallable)
    void DebugSetMissionDrawDisplay(int32 bEnable);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetBlizzardBreathSplineNo(int32 NO);
    
    UFUNCTION(BlueprintCallable)
    void DebugSetAlwaysRegionBreak();
    
    UFUNCTION(BlueprintCallable)
    void DebugResetAlwaysRegionBreak();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanAttack() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyMissionFinishMode(bool bFinishMode);
    
};

