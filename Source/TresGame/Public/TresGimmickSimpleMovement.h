#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UObject/NoExportTypes.h"
#include "ETresGimmickSimpleMovementMoveType.h"
#include "TresGimmickSimpleMovementOnFinishMoveSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "ETresGimmickSimpleMovementAcclType.h"
#include "ETresGimmickSimpleMovementDirAxis.h"
#include "TresGimmickSimpleMovement.generated.h"

class AActor;
class UTresGimmickSimpleMovementProgressInterface;
class ITresGimmickSimpleMovementProgressInterface;
class UCurveFloat;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGimmickSimpleMovement : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<ITresGimmickSimpleMovementProgressInterface> m_Progress;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickSimpleMovementMoveType m_MoveType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickSimpleMovementAcclType m_AcclType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_MoveTargetActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_InitialVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_Acceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_UnitAccelerationCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxMoveLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGimmickSimpleMovementDirAxis m_Direction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bEnableSweep;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_HomingRotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_UnitParabolaCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ParabolaHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_UnitInterpRotationCurve;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickSimpleMovementOnFinishMoveSignature OnFinishMove;
    
    UTresGimmickSimpleMovement();
    UFUNCTION(BlueprintCallable)
    void BP_StopMove();
    
    UFUNCTION(BlueprintCallable)
    void BP_StartMove();
    
    UFUNCTION(BlueprintCallable)
    void BP_SetTargetLocation(const FVector Location);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMoveType(ETresGimmickSimpleMovementMoveType Type);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMoveTargetActor(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetMaxMoveVelocity(float Velocity);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetEnableSweep(bool Enable);
    
    UFUNCTION(BlueprintCallable)
    void BP_SetAcceleration(float Acceleration);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnFinishMove();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector BP_GetTargetLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTransform BP_GetStartTransform() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetMaxMoveVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float BP_GetAcceleration() const;
    
};

