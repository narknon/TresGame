#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "GenericTeamAgentInterface.h"
#include "Perception/AISightTargetInterface.h"
#include "ETresStateID.h"
#include "ETresAnimNotifyBpEventID.h"
#include "ETresTeam.h"
#include "UObject/NoExportTypes.h"
#include "TresCharMovementUpdatedSignatureDelegate.h"
#include "ETresChrUniqueID.h"
#include "ETresCharWearForm.h"
#include "ETresBodyCollReactionType.h"
#include "ETresPlayerJumpModes.h"
#include "ETresCommandKind.h"
#include "ETresAbilityKind.h"
#include "TresCharTakeDamageSignatureDelegate.h"
#include "ETresDamageKind.h"
#include "TresReactorDoCommandSignatureDelegate.h"
#include "Engine/EngineTypes.h"
#include "TresDamageInfo.h"
#include "Engine/EngineTypes.h"
#include "AlphaBlend.h"
#include "ETresWeaponType.h"
#include "ETresItemDefWeapon.h"
#include "TresCharPawnBase.generated.h"

class USQEXSEADSoundReferenceEnumSet;
class UTresCharMovementComponent;
class USQEX_DynamicBindAssetUserData;
class UTresSwimRingComponent;
class UTresAtkCollComponent;
class UTresSkeletalMeshComponent;
class UTresBodyCollComponent;
class UTresEquipmentComponent;
class AController;
class UTresStateQueueComponent;
class UTresEffectAttachComponent;
class USQEXSEADAutoSeComponent;
class UTresPoleComponent;
class UTresHopComponent;
class UParticleSystem;
class UTresUIDataAssetStatus;
class USQEX_ParticleAttachDataAsset;
class ATresAdhereObjBase;
class UTresLockonTargetComponent;
class UAnimMontage;
class AActor;
class UTresAttractionFlowMarkerComponent;
class USQEXSEADAutoSeComponentCallbackDefault;
class USQEX_KBD_Component;
class UAnimSequenceBase;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresCharPawnBase : public ATresPawnBase, public IGenericTeamAgentInterface, public IAISightTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresDtorState, ETresStateID, StateID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTresCtorState, ETresStateID, StateID);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresAnimNotifyStartBpEvent, FName, AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID>, EventID, int32, Param);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FTresAnimNotifyEndBpEvent, FName, AnimSeqName, TEnumAsByte<ETresAnimNotifyBpEventID>, EventID, int32, Param);

private:    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresCharMovementComponent* MyMovement;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* MyMesh;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresAtkCollComponent* MyAtkColl;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresBodyCollComponent* MyBodyColl;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEquipmentComponent* MyEquipment;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresStateQueueComponent* MyStateComp;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresEffectAttachComponent* MyEffectAtt;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BaseTranslationOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 bPressedJump: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float JumpKeyHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpMaxHoldTime;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCharMovementUpdatedSignature OnCharacterMovementUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresChrUniqueID m_ChrUniqueID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DebugLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_HitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMagicPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_MagicPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    uint32 m_bAppearMsgSended: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MyMpChargeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxFocusPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_FocusPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresBodyCollReactionType m_DefaultBodyCollReactionType;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableAttractionFlowHitPoint: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableAttractionFlowMarkerProc: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 m_AttractionHP;
    
    UPROPERTY(EditAnywhere, SaveGame)
    TEnumAsByte<ETresCommandKind> m_AttractionMarkerCommandID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    float m_AttractionMarkerRestTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bRootTransCalcRootSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 bIsBattleMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsInvincible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsNoDamageResponse: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bNoHpDamage: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsHpLimitOne: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsHpLimitOneExceptPlayerAttack: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bIsNeedAttachAttackHitEffect: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bDisableInvincibleInCinematicMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_ControlAnalogInputModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MyRailSlideSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RailSlideJumpInertialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RailSlideJumpInertialBrake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_DangleOffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEquipmentAutoSpawn: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresPoleComponent* m_LastHitPoleComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresHopComponent* m_LastHitHopComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float m_NoActionCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_LastWaterOuterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bCameraLookPosToMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAssetStatus* m_pUIDataStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MySkelCtrl_IkDisableFlag: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MySkelCtrl_IkInitValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bApplyWetnessMaterial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bApplyOceanWetnessMaterial: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ApplyOceanWetnessMaterialMinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ApplyOceanWetnessMaterialMaxHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresAdhereObjBase* m_pBadStatAdhereActor;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCharTakeDamageSignature OnTresTakeDamage;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresLockonTargetComponent* m_FlowTarget;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresAttractionFlowMarkerComponent* m_AttractionFlowMarker;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresSwimRingComponent* m_pSwimRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresTeam::Type> MyTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnAuraEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnMagicCastEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnBadStatesEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnAppearEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableRegistFootStepEffectGen: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 m_bEnableWaterRippleEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RippleBaseBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RippleLocationShiftScale;
    
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCtorState OnCtorState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresDtorState OnDtorState;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAnimNotifyStartBpEvent OnAnimNotifyStartBpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresAnimNotifyEndBpEvent OnAnimNotifyEndBpEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresReactorDoCommandSignature OnReactorDoCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEXSEADSoundReferenceEnumSet* m_AutoSeAssets;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeComponent* MyAutoSe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USQEXSEADAutoSeComponentCallbackDefault* MyAutoSeCallback;
    
public:
    ATresCharPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetStopAI(bool bStop);
    
    UFUNCTION(BlueprintCallable)
    void SetMoveMode(TEnumAsByte<EMovementMode> NewMovementMode, bool bClearVelocity);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxWalkSpeed(float InMaxWalkSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSwimSpeed(float InMaxSwimSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxFlySpeed(float InMaxFlySpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxAcceleration(float InAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void SetMagicPoint(int32 InMP);
    
    UFUNCTION(BlueprintCallable)
    void SetIKinemaEnable(bool Enable, bool Force);
    
    UFUNCTION(BlueprintCallable)
    void SetHitPoint(int32 InHP);
    
    UFUNCTION(BlueprintCallable)
    void SetGravityScale(float InGravityScale);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusPoint(int32 InFP);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravityLock(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravity(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionNoHpDamage(bool InNoHpDamage);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionNoDamageResponse(bool InNoDamageResponse);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionInvincible(bool InInvincible);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionHpLimitOneExceptPlayerAttack(bool InHpLimitOne);
    
    UFUNCTION(BlueprintCallable)
    void SetConditionHpLimitOne(bool InHpLimitOne);
    
    UFUNCTION(BlueprintCallable)
    void SetBuoyancy(float InBuoyancy);
    
    UFUNCTION(BlueprintCallable)
    void SetBodyCollReactionType(ETresBodyCollReactionType InType, FName InGroup);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleMode(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxWalkSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxSwimSpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxFlySpeed();
    
    UFUNCTION(BlueprintCallable)
    void ResetMaxAcceleration();
    
    UFUNCTION(BlueprintCallable)
    void ResetGravityScale();
    
    UFUNCTION(BlueprintCallable)
    void ResetBuoyancy();
    
    UFUNCTION(BlueprintCallable)
    void ResetBodyCollReactionType(FName InGroup);
    
    UFUNCTION(BlueprintCallable)
    void RequestDirectMove(FVector refVelocity, bool bForceMaxSpeed);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveTresTakeDamage(float DamagePoint, AController* InstigatedBy, const FHitResult& HitInfo, const FTresDamageInfo& DamageInfo, FVector ShotFromDirection, AActor* DamageCauser);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDtorState(ETresStateID StateID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveCtorState(ETresStateID StateID);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyStartBpEvent(FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveAnimNotifyEndBpEvent(FName AnimSeqName, ETresAnimNotifyBpEventID EventID, int32 Param);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunchedCharPawn(float Height);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLaunched(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnJumped();
    
    UFUNCTION(BlueprintCallable)
    bool LaunchCharPawn(float Height, bool bForce, ETresPlayerJumpModes InJumpMode);
    
    UFUNCTION(BlueprintCallable)
    void LaunchCharacter(FVector LaunchVelocity, bool bXYOverride, bool bZOverride);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void K2_UpdateCustomMovement(float DeltaTime);
    
    UFUNCTION(BlueprintImplementableEvent)
    void K2_OnMovementModeChanged(EMovementMode PrevMovementMode, EMovementMode NewMovementMode, uint8 PrevCustomMode, uint8 NewCustomMode);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopAI() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnGround() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveModeWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveModeSwimming() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveModeRailSlide() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveModeFlying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMoveModeFalling() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLandAnimPose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableAutoUpdateVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConditionNoHpDamage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConditionNoDamageResponse() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConditionInvincible() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConditionHpLimitOneExceptPlayerAttack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConditionHpLimitOne() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCinematicEndAIRestart() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattlePose() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBattleMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVelocityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresCharMovementComponent* GetTresCharMovementComponent() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresStateID> GetStateID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSwimSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxMagicPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxHitPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMaxFocusPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxFlySpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMagicPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    USQEX_KBD_Component* GetKBDComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHitPointRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitPointPer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetHitPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetGravityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetFocusPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultMaxWalkSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultMaxSwimSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultMaxFlySpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultBuoyancy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChrLevel() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBuoyancy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresBodyCollReactionType GetBodyCollReactionType(FName InGroup) const;
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoUpdateVelocity(bool bInDisable);
    
    UFUNCTION(BlueprintCallable)
    void ClearVelocity();
    
    UFUNCTION(BlueprintCallable)
    void ClampVelocityZ(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void ClampVelocityXY(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    void ClampVelocity(float Min, float Max);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcJumpVector(const FVector& InTarget, float inAngle);
    
    UFUNCTION(BlueprintCallable)
    void BP_UseMagicPoint(int32 UseMP);
    
    UFUNCTION(BlueprintCallable)
    void BP_StartCinematicLookAt(AActor* TargetActor, FName SocketName, float BlendIn, EAlphaBlendOption InBlendOption);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetWeaponVisible(bool bVisible, bool bAppearEffect, float InPlayRate);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetWeaponRageformRate(float StartValue, float EndValue, float InterpTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetVelocityXY(FVector refVector);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMovementInputXY(FVector WorldDirection, float ScaleValue, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMovementInput(FVector WorldDirection, float ScaleValue, bool bForce);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAccelerationDirXY(FVector refAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAccelerationDir(FVector refAcceleration);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocityZ(float InVelocityZ);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocityXY(FVector refVelocity);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocity(FVector refVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsRailSlideGoForword() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsInnerWaterCurrent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsInnerWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsConditionCheered() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool BP_IsAbilityEnable(ETresAbilityKind InAbilityKind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetWaterCurrentForce() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresStateID> BP_GetTransitionStateID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_GetRailSlideID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetLastTakeDamageHitLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetLastAttackHitLocation() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresWeaponType> BP_GetEquipWeaponType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresItemDefWeapon BP_GetEquipWeaponID() const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<ETresDamageKind> BP_GetDamageStateDamageKind() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_EndCinematicLookAt(float BlendOut, EAlphaBlendOption InBlendOption);
    
    UFUNCTION(BlueprintCallable)
    void BP_DisableSwimFluctuation(bool bDisable, float InInterpTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugChangeWearform(ETresCharWearForm InForm, float InWearChangeTime);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAllAbilitySetDebugWork(int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void BP_DebugAbilitySetDebugWork(ETresAbilityKind InAbilityKind, int32 InLevel);
    
    UFUNCTION(BlueprintCallable)
    void BP_CopyRootMotionVelocityToVelocity();
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimStop(float InBlendOut, FName InSlotName);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlaySequence(UAnimSequenceBase* InAsset, FName InSlotNodeName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, float InRootTransScaleXY, float InRootTransScaleZ);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayMontage(UAnimMontage* InAsset, int32 InEffectGroup, float InPlayRate, float InRootTransScaleXY, float InRootTransScaleZ);
    
    UFUNCTION(BlueprintCallable)
    void BP_AnimPlayAnimset(FName InAnimName, FName InSlotNodeName, float InBlendInTime, bool InLoop, int32 InEffectGroup, float InPlayRate, bool InRootTrans, bool InRootRot, float InRootTransScaleXY, float InRootTransScaleZ, bool InSameCheck);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName BP_AnimGetLastPlayAnimName(FName InSlotName) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_AbilityRemove(ETresAbilityKind InAbilityKind);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_AbilityGetLevel(ETresAbilityKind InAbilityKind) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 BP_AbilityGetEquipNum(ETresAbilityKind InAbilityKind) const;
    
    UFUNCTION(BlueprintCallable)
    bool BP_AbilityAdd(ETresAbilityKind InAbilityKind, bool bEquip);
    
    UFUNCTION(BlueprintCallable)
    void ApplyKBD(USQEX_DynamicBindAssetUserData* KBDAssetUserData, FName ElementName, bool bIsReset, bool bIsResetPose, int32 PreRoll, bool KeepReferences);
    
    
    // Fix for true pure virtual functions not being implemented
};

