#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresGimmickHitCountComponentDamageProfile.h"
#include "ETresGimmickHitCountComponentType.h"
#include "ETresDamageKind.h"
#include "Components/ActorComponent.h"
#include "ETresChrUniqueID.h"
#include "ETresGimmickHitCountComponentTeam.h"
#include "ETresEnemyUniqueID.h"
#include "TresGimmickHitCountComponentOnTresAccumulationRecoverSignatureDelegate.h"
#include "ETresDamageAttribute.h"
#include "TresGimmickHitCountComponentOnTresAccumulationRecoveryedSignatureDelegate.h"
#include "TresGimmickHitCountComponentOnTresTakeDamageGimmickSignatureDelegate.h"
#include "TresGimmickHitCountComponentOnTresDestroyedGimmickSignatureDelegate.h"
#include "TresGimmickHitCountComponentOnTresAccumulationRecoveringSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickHitCountComponent.generated.h"

class AActor;
class UParticleSystem;
class AController;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickHitCountComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseHitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickHitCountComponentDamageProfile m_DamageProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickHitCountComponentType m_Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_HitCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDestroyedStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccumulationReleaseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccumulationRecoveryTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDestroyByFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DestroyByFinishLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDamageByFinish;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableTakeDamageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TakeDamageInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBindTakeDamage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBindHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoReset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoCallDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bCheckKillAttack;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_ApplyBodyGrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresChrUniqueID> m_ApplyDamageChrUniqueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresEnemyUniqueID> m_ApplyDamageEnemyUniqueIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresDamageKind>> m_ApplyDamageKinds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresDamageAttribute> m_ApplyDamageAttribute;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresGimmickHitCountComponentTeam> m_ApplyTeam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> m_ApplyDamageClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_ApplyAttackDataID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IgnoreDamageFriends;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IgnoreDisneyMagic;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_IgnoreAttractionFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresChrUniqueID> m_IgnoreDamageChrUniqueIDs;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresGimmickHitCountComponentTeam> m_IgnoreTeam;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_IgnoreAttackDataID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_Effect_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableBlowDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickHitCountComponentOnTresTakeDamageGimmickSignature OnTresTakeDamageGimmick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickHitCountComponentOnTresDestroyedGimmickSignature OnTresDestroyedGimmick;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickHitCountComponentOnTresAccumulationRecoverSignature OnTresAccumulationRecover;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickHitCountComponentOnTresAccumulationRecoveringSignature OnTresAccumulationRecovering;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickHitCountComponentOnTresAccumulationRecoveryedSignature OnTresAccumulationRecoveryed;
    
    UTresGimmickHitCountComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void OnTresTakeDamageOwner(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void OnActorHit(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnTresTakeDamageGimmick(const FHitResult& HitInfo, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnTresDestroyedGimmick(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnTresAccumulationRecoveryed();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnTresAccumulationRecovering(int32 HitCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnTresAccumulationRecover();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaxHitCount(int32 count, bool bReset);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetHitCount(int32 count);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableHitCount(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDamageProfile(ETresGimmickHitCountComponentDamageProfile damageProfile);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetDamage(int32 Damage);
    
    UFUNCTION(BlueprintCallable)
    void BP_Reset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsDestroyed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsDestroyDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetMaxHitCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTresDamageInfo BP_GetLastTresDamageInfo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult BP_GetLastHitResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetHitCountRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetHitCount() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetDamage() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ForceDestroy(AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable)
    void BP_ApplyDamage(AActor* DamageCauser);
    
};

