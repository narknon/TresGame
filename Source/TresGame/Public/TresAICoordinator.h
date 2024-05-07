#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "TresAI_BPEM_NotificationStartAttackLogInfoDelegate.h"
#include "TresGameplayTagDebugColor.h"
#include "TresTeamDebugColor.h"
#include "TresAI_BPEM_NotificationStartAIAttackLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationTakeDamageLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationAttackHitInvincibleCharLogInfoDelegate.h"
#include "ETresTeam.h"
#include "TresAI_BPEM_NotificationRecoveryHpMpFpLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationCtorStateLogInfoDelegate.h"
#include "TresAI_BPEM_NotificationDtorStateLogInfoDelegate.h"
#include "GenericTeamAgentInterface.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "TresAICoordinator.generated.h"

class UTresAttackPermissionManager;
class UCurveVector;
class UTresBattlePlayerEmotionManager;
class UTresNpcMetaAI;
class UEnvQuery;
class UTresCoopManager;
class ATresAICoordinator;
class UObject;

UCLASS(Blueprintable)
class ATresAICoordinator : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresAttackPermissionManager>> AttackPermissionManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PostAttackerAssignedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveVector* PostTargetAttackedCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGameplayTagDebugColor> AttackGroupDebugColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresTeamDebugColor> TargetDebugColors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool EnableCoopDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AttackGroupDebugDraw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresNpcMetaAI> FriendNpcMetaAIClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresBattlePlayerEmotionManager> BattlePlayerEmotionManagerClass;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAI_BPEM_NotificationStartAIAttackLogInfo OnNotificationStartAIAttackLogInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAI_BPEM_NotificationStartAttackLogInfo OnNotificationStartAttackLogInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAI_BPEM_NotificationTakeDamageLogInfo OnNotificationTakeDamageLogInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAI_BPEM_NotificationAttackHitInvincibleCharLogInfo OnNotificationAttackHitInvincibleCharLogInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAI_BPEM_NotificationRecoveryHpMpFpLogInfo OnNotificationRecoveryHpMpFpLogInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAI_BPEM_NotificationCtorStateLogInfo OnNotificationCtorStateLogInfo;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAI_BPEM_NotificationDtorStateLogInfo OnNotificationDtorStateLogInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAttackPermissionManager*> m_AttackPermissionManagers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresCoopManager* m_CoopManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresNpcMetaAI* m_FriendNpcMetaAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBattlePlayerEmotionManager* m_BattlePlayerEmotionManager;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* GoalRankingQuery;
    
public:
    ATresAICoordinator(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static ATresAICoordinator* GetTresAICoordinator(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    void GetTargetableActorsWithAffiliation(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPositionalRankingNotDuplicate(const AActor* inSourceActor, const AActor* inTargetedActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPositionalRanking(const AActor* inSourceActor, const AActor* inTargetedActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetPlayerFaction(TArray<AActor*>& outResult) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetNeutralFaction(TArray<AActor*>& outResult) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetMemberCountWithAffiliation(const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude, bool IncludingReserve) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresNpcMetaAI* GetFriendNpcMetaAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetFactionColor(AActor* InTarget) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetEnemyFaction(TArray<AActor*>& outResult) const;
    
    UFUNCTION(BlueprintPure)
    void GetDestinationsWithAffiliation(TArray<FVector>& outResult, AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresCoopManager* GetCoopManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresBattlePlayerEmotionManager* GetBattlePlayerEmotionManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetAttackGroupColor(AActor* inAttacker) const;
    
    UFUNCTION(BlueprintCallable)
    float GetAssigmentCooldownRemainingTicket(const AActor* inTargetedActor, FGameplayTag AttackerGroup);
    
    UFUNCTION(BlueprintCallable)
    float GetAssigmentCooldownRemaining(const AActor* inTargetedActor, FGameplayTag AttackerGroup);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAlliesInAttackGroup(TArray<AActor*>& outResult, const AActor* inSourceActor, FGameplayTag AttackerGroup) const;
    
    UFUNCTION(BlueprintPure)
    void GetActorsWithTeamID(TArray<AActor*>& outResult, TEnumAsByte<ETresTeam::Type> inTeamID) const;
    
    UFUNCTION(BlueprintPure)
    void GetActorsWithAffiliationAll(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const;
    
    UFUNCTION(BlueprintPure)
    void GetActorsWithAffiliation(TArray<AActor*>& outResult, const AActor* inSourceActor, TEnumAsByte<ETeamAttitude::Type> inTeamAttitude) const;
    
    UFUNCTION(BlueprintCallable)
    void BP_AssignAttackers(TArray<AActor*> inSourceActors);
    
};

