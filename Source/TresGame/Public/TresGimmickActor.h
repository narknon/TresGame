#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ETresGimmickInstanceManagerInstanceState.h"
#include "TresGimmickOnEndActorRideDelegate.h"
#include "ETresEnemyUniqueID.h"
#include "TresReactorComponentInterface.h"
#include "TresAnimInterface.h"
#include "TresNotifyInterface.h"
#include "TresActorInterface.h"
#include "TresGimmickTakeDamageSignatureDelegate.h"
#include "TresGimmickDoCommandSignatureDelegate.h"
#include "TresGimmickActivateSignatureDelegate.h"
#include "TresGimmickOnStartGimmickForPlanSignatureDelegate.h"
#include "TresGimmickOnStopGimmickForPlanSignatureDelegate.h"
#include "TresGimmickOnDestroyedGimmickForPlanSignatureDelegate.h"
#include "TresGimmickOnBeginPauseSpecialSignatureDelegate.h"
#include "TresGimmickOnEndPauseSpecialSignatureDelegate.h"
#include "TresGimmickOnGimmickInstanceInitializeSignatureDelegate.h"
#include "TresReactorDoCommandSignatureDelegate.h"
#include "TresGimmickOnBeginActorRideDelegate.h"
#include "TresGimmickOnChangeActorRideBoneDelegate.h"
#include "TresGimmickKilledCharSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresCommandKind.h"
#include "ETresGimmickDistanceBetweenPlayer.h"
#include "TresGimmickActor.generated.h"

class UTresChrBaseParam;
class UParticleSystem;
class UTresChrDataTableSet;
class UPrimitiveComponent;
class UObject;
class AController;
class ATresGimmickActor;
class ATresPawnBase;
class ATresCharPawnBase;
class UMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickActor : public AActor, public ITresReactorComponentInterface, public ITresAnimInterface, public ITresNotifyInterface, public ITresActorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAutoActivate: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bGimmickComponentAutoLinkActivate: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsActive: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bChangeAtkCollisionChannelWhenHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseBlueprintEventByChangeAtkCollisionChannel: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresChrDataTableSet* m_pDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresChrBaseParam* m_BaseParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyUniqueID m_FakeEnemyUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TeamNo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_UseChangeGimmickActionNotify;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableGimmickControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoStartGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoStartShowGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDefaultShowGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWithoutMyMeshShowGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoStartEnableCollisionGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bDefaultEnableCollisionGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWithoutMyMeshCollisionGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DefaultCollisionGimmickProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoDestoryGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AutoDestoryDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoDestoryHideGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AutoDestoryHideDelayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoDestoryDisableCollisionGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDestroyedReaction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableDestroyedReflection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoStartActiveGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bBeginPlayDisableTickRegister;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseGimmickPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseGimmickPauseDisableTick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseGimmickInstanceManage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAttackGimmick;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_Effect_GimmickDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Effect_GimmickDestroyAttachPoint;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickTakeDamageSignature OnTresTakeDamage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickDoCommandSignature OnGimmickDoCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickActivateSignature OnGimmickActivate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnStartGimmickForPlanSignature OnStartGimmickForPlan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnStopGimmickForPlanSignature OnStopGimmickForPlan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnDestroyedGimmickForPlanSignature OnDestroyedGimmickForPlan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnBeginPauseSpecialSignature OnBeginPauseSpecialForPlan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnEndPauseSpecialSignature OnEndPauseSpecialForPlan;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnGimmickInstanceInitializeSignature OnGimmickInstanceInitialize;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresReactorDoCommandSignature OnReactorDoCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnBeginActorRide OnGimmickBeginActorRide;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnEndActorRide OnGimmickEndActorRide;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickOnChangeActorRideBone OnGimmickChangeActorRideBone;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickKilledCharSignature OnGimmickKilledChar;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FoodstuffKeyName;
    
public:
    ATresGimmickActor(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetPowerSavingMode(bool mode, UObject* who);
    
    UFUNCTION(BlueprintCallable)
    void RequestStopGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintCallable)
    void RequestStartGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintCallable)
    void RequestShowGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestResetGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestHideGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestForceStopedGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestForceStartedGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestForceDestroyedGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestEnableCollisionGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestDisableCollisionGimmickForPlan();
    
    UFUNCTION(BlueprintCallable)
    void RequestDestroyGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTresTakeDamage(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGimmickKilledCharSignature(ATresGimmickActor* AttackCauser, ATresPawnBase* KilledPawn, const FTresDamageInfo& DamageInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGimmickEndActorRide(AActor* RideActor, UPrimitiveComponent* Component, const FName BoneName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintImplementableEvent)
    void ReceiveGimmickDoCommand(ATresCharPawnBase* InCommandCauser, ETresCommandKind InCommandID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGimmickChangeActorRideBone(AActor* RideActor, UPrimitiveComponent* Component, const FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGimmickBeginActorRide(AActor* RideActor, UPrimitiveComponent* Component, const FName BoneName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveGimmickActivate(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void OnChangeGimmickPauseCallBack(bool bPause);
    
    UFUNCTION(BlueprintCallable)
    void NotifyChangeGimmickActionImpl(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPowerSavingMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UMeshComponent* GetMeshComponentForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnStopGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnStartGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnShowGimmickForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnResetGimmickForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnHideGimmickForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnGimmickInstanceInitialize(ETresGimmickInstanceManagerInstanceState State, ETresGimmickInstanceManagerInstanceState OldState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnFlashGimmickForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnEndPauseSpecialForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnEnableCollisionGimmickForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnDisableCollisionGimmickForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnDestroyedGimmickForPlan(bool PlayAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_OnBeginPauseSpecialForPlan();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BPEV_ChangePowerSavingMode(bool isSaving, UObject* who);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BPE_ChangeCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse Response);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTeamNo(int32 InTeamNo);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableFocusPointForPlan(bool Enable);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_ManagedTick(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsStartGimmickForPlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsShowedGimmickForPlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsGimmickActive() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsEnabledCollisionGimmickForPlan() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsDestroyedGimmickForPlan() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_IgnoreActorWhenMovingAll(AActor* Actor, bool bShouldIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetTeamNo() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_GetFoodstuffPrizeToTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BP_GetFoodstuffDropDataKeyName() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EnableGimmickAttackCollision(const FName InGroupName, float InAttackInterval);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_DistanceBetweenPlayer(ETresGimmickDistanceBetweenPlayer Type);
    
    UFUNCTION(BlueprintCallable)
    void BP_DisableGimmickAttackCollision(const FName InGroupName);
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmickComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void BP_DeactivateGimmick();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmickComponentAll();
    
    UFUNCTION(BlueprintCallable)
    void BP_ActivateGimmick();
    
    
    // Fix for true pure virtual functions not being implemented
};

