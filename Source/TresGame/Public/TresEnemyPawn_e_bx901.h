#pragma once
#include "CoreMinimal.h"
#include "TresEnemyPawnBase.h"
#include "BX901_IdleFlyInfo.h"
#include "BX901_EffectGroupID.h"
#include "ETresEnemyDarkBaymaxPhase.h"
#include "UObject/NoExportTypes.h"
#include "TresEnemyPawn_e_bx901.generated.h"

class UParticleSystem;
class ATresPlayerPawnBase;
class USQEX_ParticleAttachDataAsset;
class ATresCharPawnBase;
class USceneComponent;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_bx901 : public ATresEnemyPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBX901_IdleFlyInfo m_IdlyeFlyInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchResetRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRailSlideRotResetRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRailSlideRollScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDefaultRailSlideDistanceTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iForceStartSecondBattleHpPer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ForceStartSecondBattleEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HitWallDamageAvailability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_EffectDataAsset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> m_BoolArray;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FBX901_EffectGroupID m_GroupID[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_DamageParticleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DamageParticleSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_DamageParticleSpawnAttackIDArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresPlayerPawnBase* m_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_RailSlideLeadPawn;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* MyRot;
    
public:
    ATresEnemyPawn_e_bx901(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void WindEffectStart();
    
    UFUNCTION(BlueprintCallable)
    void WindEffectEnd();
    
    UFUNCTION(BlueprintCallable)
    void SetWingSize(float InSize);
    
    UFUNCTION(BlueprintCallable)
    void SetPhase(ETresEnemyDarkBaymaxPhase NewPhase);
    
    UFUNCTION(BlueprintCallable)
    void SetHitPointPer(int32 InHpPer);
    
    UFUNCTION(BlueprintCallable)
    void SetCubeEffect();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartRailSlide();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsRailSlideMoveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerRailSlideMoveMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFirstBattlePhase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetRailSlideTransform(FTransform& outTF) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform GetLocationOnWing(float inDistanceFromBody, bool inLeft, bool inRelative) const;
    
    UFUNCTION(BlueprintCallable)
    void EndCubeEffect();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetDarkNeedleRainNum(int32 InNum);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPhaseChange(ETresEnemyDarkBaymaxPhase NewPhase);
    
};

