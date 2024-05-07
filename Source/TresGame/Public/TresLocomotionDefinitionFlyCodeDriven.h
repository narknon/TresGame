#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDrivenBase.h"
#include "TresLocomotionDefinitionFlyCodeDriven.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionFlyCodeDriven : public UTresLocomotionDefinitionFlyCodeDrivenBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_FlightStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_FlightLoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_FlightEndAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_TakeoffAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_LandingStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_LandingLoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_LandingEndAnimData;
    
public:
    UTresLocomotionDefinitionFlyCodeDriven();
};

