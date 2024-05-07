#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresEnemyXIIILEPawnBase.h"
#include "TresEnemyEx351AfterImageEffect.h"
#include "TresEnemyEx351AfterImageVisibleWorker.h"
#include "ETresStateID.h"
#include "ETresEnemyEx351TimeRushEvent.h"
#include "TresEnemyPawn_e_ex351.generated.h"

class UCurveFloat;
class ATresEnemyPawn_e_ex351;
class UObject;
class USoundBase;
class UParticleSystem;
class UParticleSystemComponent;
class ATresProjectileBase;

UCLASS(Blueprintable)
class ATresEnemyPawn_e_ex351 : public ATresEnemyXIIILEPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresEnemyPawn_e_ex351> m_AvatarPawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsAvatarPawn: 1;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresEnemyEx351AfterImageEffect m_AfterImageEffects[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlowFadeTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AfterImageStartVisibleTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AfterImageFront;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AfterImageLeftRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx351AfterImageVisibleWorker> m_AfterImageVisibleWorker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_NegativeReversalEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresStateID>> m_TimeStopCanSlowStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresStateID>> m_TimeRushNotSendRemoteEventStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_TimeRushBaseDataTableIDNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_TimeRushWeatherEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_TimeRushFloorEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_TimeRushLongHandEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_TimeRushShortHandEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_TimeRushAudioData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TimeRushAudioFadeOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_TimeRushLongHandRewindCurveData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TimeRushInvisibleAttackNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsTimeRushShutDownFreezeShot: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_NegativeReversalEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_TimeRushWeatherEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_TimeRushFloorEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_TimeRushLongHandEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_TimeRushShortHandEffectCmp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_MaliceWhipSmallContinuousProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_MaliceWhipFloorEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ChangeLastAttackHitNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlowRateStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SlowRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SmallContinuousStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USoundBase*> m_AirMaliceWhipVoiceList;
    
public:
    ATresEnemyPawn_e_ex351(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    static void TimeRushSendEvent(UObject* WorldContextObject, ETresEnemyEx351TimeRushEvent EventType);
    
    UFUNCTION(BlueprintCallable)
    bool IsTimeStopSlow();
    
    UFUNCTION(BlueprintCallable)
    bool IsTimeRushStartReazonDamageReaction();
    
    UFUNCTION(BlueprintCallable)
    bool IsTimeRushFinishOneCycle();
    
    UFUNCTION(BlueprintCallable)
    bool IsTimeRush() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsTakaDamageTimeStopCancel();
    
    UFUNCTION(BlueprintCallable)
    bool IsHitWhipComboAttack();
    
    UFUNCTION(BlueprintCallable)
    bool IsHitMaliceWhipAttack();
    
    UFUNCTION(BlueprintCallable)
    bool IsForceWarpIn();
    
    UFUNCTION(BlueprintCallable)
    int32 IsEndTimeRushComboNum();
    
    UFUNCTION(BlueprintCallable)
    bool IsEndAllTimeRushCombo();
    
    UFUNCTION(BlueprintCallable)
    bool IsConditionFinalTimeRush() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsArmorBreakAfterWarp();
    
    UFUNCTION(BlueprintCallable)
    void DebugStartTimeRushCombo();
    
    UFUNCTION(BlueprintCallable)
    void DebugSetTimeRushComboIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable)
    void DebugEndTimeRushCombo();
    
    UFUNCTION(BlueprintCallable)
    ATresEnemyPawn_e_ex351* BP_GetAvaterSelectRoleNumber(int32 InSelectRoleNumber);
    
    UFUNCTION(BlueprintCallable)
    void BP_FinishTimeRush();
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableArmorBreakAfterWarp(bool bEnable);
    
};

