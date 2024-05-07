#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresGumiShipCharaPawnBase.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipEnemyStateID.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "ETresGumiShipEnemyLookAtType.h"
#include "ETresGumiShipEnemyStateResult.h"
#include "ETresGumiShipEnemyID.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyPawnBase.generated.h"

class USQEX_ParticleAttachDataAsset;
class ATresGumiShipEnemyPawnBase;
class ATresGumiShipPlayerPawnBase;
class UTresGumiShipBattleDataTableSet;
class ATresGumiShipEnemyPartsBase;
class UTresGumiShipEnemyStateController;
class AActor;
class ATresGumiShipEnemyGenerator;
class ATresGumiShipEnemyBattleStarter;
class UTresGumiShipEnemyGroupManager;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipEnemyPawnBase : public ATresGumiShipCharaPawnBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDisappearSignature, ATresGumiShipEnemyPawnBase*, pDisappearEnemy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyDeadSignature, ATresGumiShipEnemyPawnBase*, pDeadEnemy);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEnemyAppearSignature, ATresGumiShipEnemyPawnBase*, pAppearEnemy);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDeadSignature OnEnemyDead;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyAppearSignature OnEnemyAppearComplete;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnemyDisappearSignature OnEnemyDisappearComplete;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EnemyNameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEnemyBoundsRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGumiShipBattleDataTableSet* m_pBattleDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_pEffectAttachDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nDeadEffectAttachGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nUniqueDeadEffectAttachGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEncountSymbolWithAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EncountSymbolStateMotionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D m_GuideSymbolOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresGumiShipEnemyStateController> m_UseStateControllerClass;
    
public:
    ATresGumiShipEnemyPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void TurnToTarget(const AActor* TargetActor, float LimitTurnDegrees, bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void TurnToLocation(const FVector& TargetLocation, float LimitTurnDegrees, bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void TurnToDesiredRotation(const FQuat& DesiredRotation, float LimitTurnDegrees, bool ApplyImmediately);
    
    UFUNCTION(BlueprintCallable)
    void StartAttackPermissionCheck();
    
    UFUNCTION(BlueprintCallable)
    void SetPitchLimitAngle(float PitchLimit);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxRotateSpeed(float MaxRotateSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetLockOnPermissionAll(bool LockOnEnable, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyLookAtType(ETresGumiShipEnemyLookAtType LookAtType);
    
    UFUNCTION(BlueprintCallable)
    void SetEnemyLookAtOffset(FVector CameraBaseLookAtOffset);
    
    UFUNCTION(BlueprintCallable)
    void SetAttachEffectsVisibility(bool Visibility, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMeshVisibility(bool Visibility, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintCallable)
    void SetAllMeshFadeRate(float FadeRate, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLockOnPermissionOK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsExistEnemyParts(FName PartsName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDeadOrDisappear() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCrowdEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBossEnemy() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttackPermissionOK() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAttachedEnemyParts(ATresGumiShipEnemyPartsBase* pEnemyParts) const;
    
    UFUNCTION(BlueprintCallable)
    void HideEnemyPawn(bool HiddenEnable, bool PropagateToAttachedParts);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipEnemyStateResult GetStateResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetStateName(ETresGumiShipEnemyStateID StateID) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresGumiShipEnemyStateController* GetStateController() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipEnemyGenerator* GetSpawnOwnerGenerator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetScorePoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPitchLimitAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxRotateSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipEnemyStateID GetLastStateID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipPlayerPawnBase* GetGumiShipPlayerPawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEnemyUnitID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetEnemySymbolOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetEnemyNameID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipEnemyLookAtType GetEnemyLookAtType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetEnemyLookAtOffset() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipEnemyID GetEnemyID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGuid GetEnemyGUID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetEnemyBoundsRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDirectActorRotator() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetDirectActorLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetCurrentStateName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresGumiShipEnemyStateID GetCurrentStateID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipEnemyBattleStarter* GetCurrentEnemyBattleStarter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresGumiShipBattleDataTableSet* GetBattleDataTableSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAttackPriority() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresGumiShipEnemyPartsBase* GetAttachedEnemyParts(FName PartsName) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTresGumiShipEnemyGroupManager* GetAssignedEnemyGroupManager() const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void _StartAttackCoolDownTimer(FName AttackName);
    
    UFUNCTION(BlueprintCallable)
    void _SetUsableAttackEnable(FName AttackName, bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    bool _ReturnAttackPermission();
    
    UFUNCTION(BlueprintCallable)
    bool _RequestAttackPermission();
    
    UFUNCTION(BlueprintCallable)
    void _DeleteAttackMethodEntry(FName AttackName);
    
private:
    UFUNCTION(BlueprintCallable)
    bool _CreanupAttackPermission();
    
protected:
    UFUNCTION(BlueprintCallable)
    void _ChangeState(ETresGumiShipEnemyStateID StateID);
    
    UFUNCTION(BlueprintCallable)
    bool _CancelAttackPermissionRequest();
    
};

