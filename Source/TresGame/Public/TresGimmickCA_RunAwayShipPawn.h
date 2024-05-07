#pragma once
#include "CoreMinimal.h"
#include "TresCharPawnBase.h"
#include "RunAwayShipParam.h"
#include "TresGimmickCA_RunAwayShipPawnOnFinishShootingSignatureDelegate.h"
#include "UObject/NoExportTypes.h"
#include "TresGimmickCA_RunAwayShipPawn.generated.h"

class UTresSkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class ATresGimmickCA_RunAwayShipPawn : public ATresCharPawnBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRunAwayShipParam m_Parameter;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGimmickCA_RunAwayShipPawnOnFinishShootingSignature OnFinishShooting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresSkeletalMeshComponent* m_MastMesh;
    
public:
    ATresGimmickCA_RunAwayShipPawn(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void SetTurnRate(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetStopMovement(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShotRandamMoveDirectionFactor(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShotRandamLength(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShotRandamDistanceFactor(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetShotInterval(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetOffsetShotDistance(FVector Value);
    
    UFUNCTION(BlueprintCallable)
    void SetNumProjectilePerFrame(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinShotYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinShotPitchAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinShotDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMinSafeAreaYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxYawSpeed(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShotYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShotPitchDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShotPitchAngle(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxShotDistance(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetMaxSafeAreaYaw(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFade(FName ParamName, float fromValue, float toValue, float Time);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultVelocity(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentRestTimer(float Value);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStopMovement() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetYawToPlayer2D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurnRate() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShotRandamMoveDirectionFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShotRandamLength() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShotRandamDistanceFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetShotInterval() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetOffsetShotDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumProjectilePerFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinShotYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinShotPitchAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinShotDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMinSafeAreaYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxYawSpeed() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShotYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShotPitchDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShotPitchAngle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxShotDistance() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetMaxSafeAreaYaw() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDistanceToPlayer2D() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetDefaultVelocity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetCannonRestTimer() const;
    
};

