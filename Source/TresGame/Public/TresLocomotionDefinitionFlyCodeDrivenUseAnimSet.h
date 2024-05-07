#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDrivenBase.h"
#include "TresLocomotionDefinitionFlyCodeDrivenUseAnimSet.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionFlyCodeDrivenUseAnimSet : public UTresLocomotionDefinitionFlyCodeDrivenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FlightStartAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FlightLoopAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_FlightEndAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_TakeoffAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LandingStartAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LandingLoopAnimName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_LandingEndAnimName;
    
public:
    UTresLocomotionDefinitionFlyCodeDrivenUseAnimSet();
};

