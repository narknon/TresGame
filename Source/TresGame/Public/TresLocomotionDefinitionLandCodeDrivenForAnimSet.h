#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionLandCodeDriven.h"
#include "TresLocomotionDefinitionLandCodeDrivenForAnimSet.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionLandCodeDrivenForAnimSet : public UTresLocomotionDefinitionLandCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bUseRunStartAnim: 1;
    
    UTresLocomotionDefinitionLandCodeDrivenForAnimSet();
};

