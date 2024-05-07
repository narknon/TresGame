#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "TresNotifyInterface.h"
#include "GameFramework/Pawn.h"
#include "TresAnimInterface.h"
#include "TresStateQueueInterface.h"
#include "TresReactorComponentInterface.h"
#include "TresActorInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ESQEX_AI_ThinkType -FallbackName=ESQEX_AI_ThinkType
#include "ESQEX_AI_ThinkType.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "ETresPlayerUniqueID.h"
#include "ETresChrUniqueID.h"
#include "ETresEnemyUniqueID.h"
#include "TresPawnBase.generated.h"

class UTresRootComponent;
class UTresBodyCollComponent;
class UTresChrDataTableSet;
class UTresSoundAliasSet;
class UTresChrBaseParam;
class UObject;
class ATresLevelEntity;
class UTresInterpGroup;
class UTresInterpGroupInst;
class AActor;
class ATresCharPawnBase;
class ATresNpcPawnBase;

UCLASS(Abstract, Blueprintable)
class TRESGAME_API ATresPawnBase : public APawn, public ITresAnimInterface, public ITresNotifyInterface, public ITresStateQueueInterface, public ITresReactorComponentInterface, public ITresActorInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresRootComponent* MyRoot;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresBodyCollComponent*> m_BodyComponentsList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBasedMovementInfo BasedMovement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MyLockOnSetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MyLookAtTargetBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresChrDataTableSet* m_pDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresSoundAliasSet* m_SoundAliasAsset;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresChrBaseParam* m_pBaseParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_TeamNo;
    
public:
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<UObject> m_LevelEntitySpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresLevelEntity* m_LevelEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresInterpGroup*> m_InterpGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresInterpGroupInst*> m_InterpGroupInst;
    
    ATresPawnBase(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    bool WarpToTaggedPlayerStart(FName InTag, bool bResetCamera, bool bStateClear);
    
    UFUNCTION(BlueprintCallable)
    bool WarpToActorLocation(const AActor* inActor, bool bResetCamera);
    
    UFUNCTION(BlueprintCallable)
    bool UpdateRotateForDegree(FRotator InNewRot, float inDegree);
    
    UFUNCTION(BlueprintCallable)
    void UpdateRotate(FRotator InNewRot, float InRotRate);
    
    UFUNCTION(BlueprintCallable)
    bool TurnToLocation(FVector InLocation, float InRotRate, bool inDegree);
    
    UFUNCTION(BlueprintCallable)
    bool TurnToActor(const AActor* inActor, float InRotRate, bool inDegree);
    
    UFUNCTION(BlueprintCallable)
    void SetRootAbsolute(bool bNewAbsoluteLocation, bool bNewAbsoluteRotation, bool bNewAbsoluteScale);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnWalkingOffLedge(const FVector& PreviousFloorImpactNormal, const FVector& PreviousFloorContactNormal, const FVector& PreviousLocation, float TimeDelta);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLanded(const FHitResult& Hit);
    
    UFUNCTION(BlueprintCallable)
    void MeshUpdateRotate(FRotator InNewRot, float InRotRate);
    
    UFUNCTION(BlueprintCallable)
    void MeshResetRotate(float InRotRate);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingRootMotion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnableLockOn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeSinceSpawn() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetSpawnLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRotYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRootUpVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRootRightVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetRootFrontVector() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLocationZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetLevelEntitySpawner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresLevelEntity* GetLevelEntity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDirectionToLocation(FVector InLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetDirectionTo(const AActor* inOtherActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetBattleOwner() const;
    
    UFUNCTION(BlueprintCallable)
    void CollisionChangePawnHitResponse(bool bIsEnable, FName InGrpName);
    
    UFUNCTION(BlueprintCallable)
    void CollisionChangeMapHitResponse(bool bIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void CollisionChangeAttackHitResponse(bool bIsEnable, FName InGrpName);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCheatWalk();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCheatGhost();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCheatFly();
    
    UFUNCTION(BlueprintCallable)
    void BP_RootPauseUpdateOverlaps(bool bPause, bool bCallManualUpdateOnEndPause);
    
    UFUNCTION(BlueprintCallable)
    void BP_ReqFriendWarpHomeAll(bool bAdjustCameraBack);
    
    UFUNCTION(BlueprintCallable)
    void BP_NotifyRegisterEnemyGaugeTarget(ATresCharPawnBase* InTarget);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetSelfMovedVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetSelfMovedDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetRootMotionVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresPlayerUniqueID BP_GetPlayerUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetNoActionCounter() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetMovedVelocityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetMovedVelocityXYSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetMovedVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    ATresNpcPawnBase* BP_GetFriendPawnByUniqueID(ETresChrUniqueID uid);
    
    UFUNCTION(BlueprintCallable)
    ATresNpcPawnBase* BP_GetFriendPawnByIndex(int32 Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ESQEX_AI_ThinkType BP_GetFriendAIThinkType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresEnemyUniqueID BP_GetEnemyUniqueID() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ETresChrUniqueID BP_GetChrUniqueID() const;
    
    UFUNCTION(BlueprintCallable)
    void AdjustRotate(float InRotRate);
    
    
    // Fix for true pure virtual functions not being implemented
};

