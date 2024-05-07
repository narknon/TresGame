#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove2_GigasBase_BoosterFly.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove2_GigasBase_BoosterFly : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverrideAccelMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverrideAccelAcceleration;
    
    UTresMove2_GigasBase_BoosterFly();
};

