#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresLocomotionDefinitionShip.generated.h"

class UBTService;

UCLASS(Abstract, Blueprintable, HideDropdown)
class UTresLocomotionDefinitionShip : public UTresLocomotionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DecelerationAngle;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TurningDirectionFixTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinSpeedDestroyedMast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxSpeedDestroyedMast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AccelerationDestroyedMast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_MaxRotationSpeedDestroyedMast;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_MaxRotationSpeedMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxRotationSpeedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MaxRotationSpeedAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinRotSpeedRateByVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MinSpeedForRotSpeedRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_StartDeceleTimeToReachEnd;
    
public:
    UTresLocomotionDefinitionShip();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetTurningDirectionScoringFactor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetTurningDirection() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetRootCollisionDiameterXY() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAvoidanceDistance(float InDeltaTime, UBTService* BTService) const;
    
};

