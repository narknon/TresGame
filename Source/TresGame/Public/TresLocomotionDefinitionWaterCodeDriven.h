#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionWater.h"
#include "TresLocomotionDefinitionWaterCodeDriven.generated.h"

class UAnimationAsset;

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionWaterCodeDriven : public UTresLocomotionDefinitionWater {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_SwimStartAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_SwimLoopAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimationAsset* m_SwimEndAnimData;
    
public:
    UTresLocomotionDefinitionWaterCodeDriven();
};

