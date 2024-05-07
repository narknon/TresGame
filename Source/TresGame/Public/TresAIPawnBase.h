#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameplayTagContainer.h"
#include "TresCharPawnBase.h"
#include "TresBehaviorTreeInjectionData.h"
#include "EMercunaMoveResult.h"
#include "AITypes.h"
#include "ETresStateID.h"
#include "UObject/NoExportTypes.h"
#include "TresAIPawnBase.generated.h"

class UTresAttackDefinitionBase;
class UBehaviorTree;
class UTresActionDefinitionBase;
class UTresNpcSmartphoneCameraComponent;
class UTresLocomotionDefinitionBase;
class UMercunaNavigationComponent;
class UMercunaObstacleComponent;

UCLASS(Abstract, Blueprintable)
class ATresAIPawnBase : public ATresCharPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* MyAIBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresBehaviorTreeInjectionData> m_DynamicAIBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresActionDefinitionBase>> m_ActionDefinitions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAttackDefinitionBase> m_DefaultAttackDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_DefaultLocomotionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_BaseAttackCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackCooldownRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HateAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HateRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RageAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RageRandomDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag m_AttackGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDebugDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_Reincarnation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBPEM_IgnoreStatus;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_LocomotionDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AIBodyCollisionRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_MaxShieldHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurnLimitPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FixedPointTurnSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseIdleMaxRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IdleMaxRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseFixedTurnMaxRotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FixedTurnMaxRotationSpeed;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UTresNpcSmartphoneCameraComponent> m_SmartphoneCameraComponentRef;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMercunaNavigationComponent* m_Navigation3DComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bManualEditingObstacleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMercunaObstacleComponent* ObstacleComponent;
    
public:
    ATresAIPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetRage(float inValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAttackGroup(FGameplayTag inValue);
    
protected:
    UFUNCTION()
    void OnMove3DCompleted(FAIRequestID RequestID, TEnumAsByte<EMercunaMoveResult::Type> Result);
    
public:
    UFUNCTION()
    void OnDtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION()
    void OnCtorStateEvent(TEnumAsByte<ETresStateID> inStateID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimWaterSurface() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimUnderWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayFieldVoice();
    
    UFUNCTION(BlueprintCallable, Exec)
    bool IsNavigationBuildInProgress() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostileTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDamageReaction() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetWorldTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceAIStarted() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeNotDamaged() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTimeMoving();
    
    UFUNCTION(BlueprintCallable)
    float GetTimeMotionless();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresLocomotionDefinitionBase* GetStateToLocomotionDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetSpeedFromVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPositionalRankingNotDuplicate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPositionalRanking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastAttackStartedTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLastAttackedTimestamp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastDamaged() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastAttackStateStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastAttackStart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTimeSinceLastAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCurrentDuration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBattleTime() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetAttackGroup() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackCooldownRemaining() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAttackCooldown() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAIRunningTime() const;
    
    UFUNCTION(BlueprintCallable)
    bool DebugAISwimming(FVector Dirc, float Power, float Speed);
    
    UFUNCTION(BlueprintCallable)
    bool DebugAIMove(FVector Dirc, float Power);
    
    UFUNCTION(BlueprintCallable)
    bool DebugAIJump(float JumpPower);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRunBehaviorTree();
    
};

