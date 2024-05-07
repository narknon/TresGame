#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionMercunaBase.h"
#include "TresLocomotionDefinitionSwim.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresLocomotionDefinitionSwim : public UTresLocomotionDefinitionMercunaBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bWaterSurfaceMovement;
    
public:
    UTresLocomotionDefinitionSwim();
};

