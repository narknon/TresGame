#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresMovementComponentBase.h"
#include "AI/RVOAvoidanceInterface.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavigationAvoidanceTypes.h"
#include "Animation/AnimationAsset.h"
#include "TresRailSlideWork.h"
#include "Engine/EngineTypes.h"
#include "TresCharMovementComponent.generated.h"

class USceneComponent;
class UNavigationQueryFilter;
class UTresSwimRingComponent;
class UPrimitiveComponent;
class AActor;
class ATresPawnBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresCharMovementComponent : public UTresMovementComponentBase, public IRVOAvoidanceInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxStepHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnorePhysObjStepUp: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpZVelocity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkableFloorAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkableFloorZ;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EMovementMode> MovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 CustomMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxWalkSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSwimSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxFlySpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OverrideMaxFallingSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxCustomMovementSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WalkSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingFrictionFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseSeparateBrakingFriction: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDecelerationWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDecelerationFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDecelerationSwimming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BrakingDecelerationFlying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AirControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingLateralFriction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Buoyancy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsSwimSurface: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwimSurfaceToDiveVelZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwimSurfaceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UTresSwimRingComponent* m_pSwimRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwimRingRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwimRingGravity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SwimRingVelMax;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerchRadiusThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PerchAdditionalHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FallingPerchAdditionalHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator RotationRate;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseControllerDesiredRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOrientRotationToMovement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bAddFullVelocityToRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bEnableRootScaleRootMotion: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bBodyCollPushVectorConstraintXY: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMovementInProgress: 1;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableScopedMovementUpdates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceMaxAccel: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRunPhysicsWithNoController: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceNextFloorCheck: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShrinkProxyCapsule: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCanWalkOffLedges: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeferUpdateMoveComponent: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* DeferredUpdatedMoveComponent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxOutOfWaterStepHeight;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OutofWaterZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Mass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePhysicsInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTouchForceScaledToMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPushForceScaledToMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalePushForceToVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StandingDownwardForceScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialPushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PushForcePointZOffsetFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchForceFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTouchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTouchForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RepulsionForce;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bForceBraking: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastUpdateLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LastUpdateVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PendingImpulseToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PendingForceToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AnalogInputModifier;
    
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxSimulationTimeStep;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxSimulationIterations;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LedgeCheckThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpOutOfWaterPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFindFloorResult CurrentFloor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EMovementMode> DefaultLandMovementMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EMovementMode> DefaultWaterMovementMode;
    
private:
    UPROPERTY(EditAnywhere, Transient)
    TEnumAsByte<EMovementMode> GroundMovementMode;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMaintainHorizontalGroundVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bImpartBaseVelocityX: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bImpartBaseVelocityY: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bImpartBaseVelocityZ: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bImpartBaseAngularVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnorePhysBaseImpartVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bJustTeleported: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNotifyApex: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCheatFlying: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreBaseRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bApplyBaseRotationOnlyYaw: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnorePhysBaseRotation: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bFastAttachedMove: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysCheckFloor: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseFlatBaseForFloorChecks: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWantsToLeaveNavWalking: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseRVOAvoidance: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRequestedMoveUseAcceleration: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNavWalkingMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bHasRequestedVelocity: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bRequestedMoveWithMaxSpeed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bWasAvoidanceUpdated: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectNavMeshWalking: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bProjectNavMeshOnBothWorldChannels: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceConsiderationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector RequestedVelocity;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AvoidanceUID;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask AvoidanceGroup;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask GroupsToAvoid;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FNavAvoidanceMask GroupsToIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PendingLaunchVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshProjectionInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float NavMeshProjectionTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshProjectionInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshProjectionHeightScaleUp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float NavMeshProjectionHeightScaleDown;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bNeedFallTravelCheck: 1;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bCheckEdgeFloat: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRootMotionMovementParams RootMotionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bComputeEncroachCheck: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTresRailSlideWork m_RailSlideWork;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnoreWaterCurrentForce: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnoreOverlappedForceOnGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIgnoreOverlappedForceInSky: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableMoveOnSpawnFrame: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpUpGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxJumpDurationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpDurationGravityScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bDisableAutoChangeSwimMoveMode: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bLocomotionRootMotionDeltaCustom: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AverageDirectionInterpolationTime;
    
    UTresCharMovementComponent();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdatedComponentEndOverlap(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION(BlueprintCallable)
    void UpdatedComponentBeginOverlap(AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetWalkMode(bool InNewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableFloorZ(float InWalkableFloorZ);
    
    UFUNCTION(BlueprintCallable)
    void SetWalkableFloorAngle(float InWalkableFloorAngle);
    
    UFUNCTION(BlueprintCallable)
    void SetMovementMode(TEnumAsByte<EMovementMode> NewMovementMode, uint8 NewCustomMode);
    
    UFUNCTION(BlueprintCallable)
    void SetJumpDuration(bool bFinish);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToIgnore(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupsToAvoid(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableGravity(bool InEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceGroup(int32 GroupFlags);
    
    UFUNCTION(BlueprintCallable)
    void SetAvoidanceEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float K2_GetWalkableFloorZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float K2_GetWalkableFloorAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalking() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWalkable(const FHitResult& Hit) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsUnderWater() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJumpDurationFinish() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDisableAutoUpdateVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVelocityZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetVelocityXYSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetValidPerchRadius() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ATresPawnBase* GetTresPawnOwner() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeMoving();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTimeMotionless();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetPerchRadiusThreshold() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UPrimitiveComponent* GetMovementBase() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMovedVelocityXYSize() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxJumpHeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsWalkMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsRunMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetImpartedMovementBaseVelocity() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFloorFollowPosition(FVector& Result, const AActor* FollowActor, TSubclassOf<UNavigationQueryFilter> FilterClass, float ProjectionDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetCurrentAcceleration() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAverageInterpolatedVelocity();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetAverageInterpolatedDirection();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnalogInputModifier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccelerationZ() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAccelerationXYSize() const;
    
    UFUNCTION(BlueprintCallable)
    void DisableMovement();
    
    UFUNCTION(BlueprintCallable)
    void DisableAutoUpdateVelocity(bool bInDisable);
    
    UFUNCTION(BlueprintCallable)
    void ClearAccumulatedForces();
    
protected:
    UFUNCTION(BlueprintCallable)
    void CapsuleTouched(UPrimitiveComponent* OverlappedComp, AActor* Other, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void CalcVelocity(float DeltaTime, float Friction, bool bFluid, float BrakingDeceleration);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcJumpVelocity(const FVector& InTarget, float inMinHeight, float inMaxHeight);
    
    UFUNCTION(BlueprintCallable)
    FVector CalcJumpVector(const FVector& InTarget, float inAngle);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocityZ(float InVelocityZ);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocityXY(FVector InVelocity);
    
    UFUNCTION(BlueprintCallable)
    void BP_RequestDirectVelocity(FVector InVelocity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetMovedVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetAcceleration() const;
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearRequestDirectVelocityZ();
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearRequestDirectVelocityXY();
    
    UFUNCTION(BlueprintCallable)
    void BP_ClearRequestDirectVelocity();
    
    UFUNCTION(BlueprintCallable)
    void AddImpulse(FVector Impulse, bool bVelocityChange);
    
    UFUNCTION(BlueprintCallable)
    void AddForce(FVector Force);
    
    
    // Fix for true pure virtual functions not being implemented

    void SetRVOAvoidanceUID(int32 UID);

    int32 GetRVOAvoidanceUID();

    void SetRVOAvoidanceWeight(float Weight);

    float GetRVOAvoidanceWeight();

    FVector GetRVOAvoidanceOrigin();

    float GetRVOAvoidanceRadius();

    float GetRVOAvoidanceHeight();

    float GetRVOAvoidanceConsiderationRadius();

    FVector GetVelocityForRVOConsideration();

    int32 GetAvoidanceGroupMask();

    int32 GetGroupsToAvoidMask();

    int32 GetGroupsToIgnoreMask();
    
};

