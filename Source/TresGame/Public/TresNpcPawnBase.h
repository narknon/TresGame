#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAIPawnBase.h"
#include "ETresCommandKind.h"
#include "ETresChrUniqueID.h"
#include "UObject/NoExportTypes.h"
#include "ETresNpcActionOnType.h"
#include "TresNpcPawnBase.generated.h"

class UTresReactorComponent;
class UEnvQuery;
class UTresLocomotionDefinitionBase;
class UCapsuleComponent;
class UTresFriendComponent;
class AActor;
class USQEXSEADSoundReferenceEnumSet;
class UAudioComponent;
class UBehaviorTree;

UCLASS(Abstract, Blueprintable)
class ATresNpcPawnBase : public ATresAIPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresReactorComponent* MyReactor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MyJumpPowerNormal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpRotRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpDownBlendInTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SuperSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GripHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FriendLinkPointMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FriendLinkPointInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TEnumAsByte<ETresCommandKind>> m_HaveFriendLinkCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bDispDebugInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bDispDebugAnimSet: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bDispDebugAnimInfo: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bDispDebugLineAndSphere: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bDispDebugSmartphoneCamera: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_SlopeSlide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_Swimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_FollowPlayerEQSQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresLocomotionDefinitionBase> m_Walk;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* MyPhysObjHitComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresFriendComponent* m_pFriendMan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pActionTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pActionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCloudIntervalTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fSneezeIntervalTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundReferenceEnumSet* m_SoundAssets_Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DefaultFaceEyeAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DefaultFaceLipAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FaceEyeBlinkMinTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FaceEyeBlinkMaxTimer;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_pVoiceCompo;
    
public:
    ATresNpcPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool SetTargetFNPC(ETresChrUniqueID UniqueId, bool InTargetActor, bool InDestination);
    
    UFUNCTION(BlueprintCallable)
    void SetTalkEventName(FName EventName);
    
    UFUNCTION(BlueprintCallable)
    void SetRailSlideAfterWarp(const AActor* inActor);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcActorExistence2(bool Visible, bool StopAI, bool Leave, bool VisibleWeapon, bool Invincible, bool LockOn);
    
    UFUNCTION(BlueprintCallable)
    void SetNpcActorExistence(bool Visible, bool StopAI, bool Leave, bool VisibleWeapon);
    
    UFUNCTION(BlueprintCallable)
    void SetLeaveFNPC(bool Leave);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableWarp(bool EnableWarp);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableBattleModeAI(bool InDisable);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultBT();
    
    UFUNCTION(BlueprintCallable)
    void SetBodyImmovable(bool InOnOff);
    
    UFUNCTION(BlueprintCallable)
    bool SetBBLocation(FName InName, FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    bool SetBBActor(FName InName, AActor* inActor, bool InClear);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleType(TEnumAsByte<ETresNpcActionOnType> Type);
    
    UFUNCTION(BlueprintCallable)
    void SetActionTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetActionTargetAndPoint(AActor* InActionTarget, AActor* InActionPoint);
    
    UFUNCTION(BlueprintCallable)
    void SetActionPoint(AActor* InActionPoint);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStateMoving() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSituationBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSelfOnDamageFloor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSameTargetAsPlayer() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsPlayerRecoveryNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerIdlingNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerBeingAttackedByEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayerAttackNow() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverlappedForce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadSub() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadMoveTypeToRun() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadLeaderWaiting() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLeadGoal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHostileTarget() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFriendPointMax() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsFriendLinkPointMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFriend(ETresChrUniqueID UniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableChatMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBreakPoseNow() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleType(TEnumAsByte<ETresNpcActionOnType> Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleFollowMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsBadStatus();
    
    UFUNCTION(BlueprintCallable)
    bool IsActionOff();
    
    UFUNCTION(BlueprintCallable)
    FName GetTalkEventName();
    
    UFUNCTION(BlueprintCallable)
    float GetFriendPoint() const;
    
    UFUNCTION(BlueprintCallable)
    float GetActionTime();
    
    UFUNCTION(BlueprintCallable)
    int32 GetActionOnType();
    
    UFUNCTION(BlueprintCallable)
    void ClearActionTargetInfo();
    
    UFUNCTION(BlueprintCallable)
    void ChangeBT(UBehaviorTree* InBehaviorTree);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanSetActionPoint(int32 InType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNpcMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLeadWait() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLeadAvoidanceMove() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanLead() const;
    
    UFUNCTION(BlueprintCallable)
    bool CanFriendLinkBring();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanbeSwirlUpDamageReactionByEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanBattle() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_StartTalkEndReTurn();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTalkEndReTurnInfo(float InTime, AActor* inActor, FVector InLocation);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetFriendLinkPointDisable(bool Disable);
    
    UFUNCTION(BlueprintCallable)
    bool BP_SetFriendLinkCommand(TEnumAsByte<ETresCommandKind> inCommand, float InReceptionTime, bool InAuto);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetCinematicStateFNPC();
    
    UFUNCTION(BlueprintCallable)
    void BP_NpcUseItem(AActor* InTargetActor, TEnumAsByte<ETresCommandKind> InItemCmd);
    
    UFUNCTION(BlueprintCallable)
    bool BP_MethdNpcMotionStop();
    
    UFUNCTION(BlueprintCallable)
    bool BP_MethdNpcMotionPlay(int32 MotionLoopMax, const FName StartName, const FName LoopName, const FName EndName, bool ReTurnEndAnim);
    
    UFUNCTION(BlueprintCallable)
    bool BP_MethdAnnihilationCatch(bool InCanbeCheck);
    
    UFUNCTION(BlueprintCallable)
    bool BP_IsNpcMotionPlay();
    
    UFUNCTION(BlueprintCallable)
    void BP_InitTalkEnd();
    
    UFUNCTION(BlueprintCallable)
    void BP_GetUsableBattleItem();
    
    UFUNCTION(BlueprintCallable)
    bool BP_EndAnnihilationCatch();
    
    UFUNCTION(BlueprintCallable)
    void BP_DelTalkEndReTurnInfo();
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearStateFNPC(bool CinematicClear);
    
};

