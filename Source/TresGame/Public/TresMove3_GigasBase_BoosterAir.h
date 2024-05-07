#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAirCodeDriven.h"
#include "TresMove3_GigasBase_BoosterAir.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove3_GigasBase_BoosterAir : public UTresLocomotionDefinitionAirCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverrideAccelMaxSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OverrideAccelAcceleration;
    
    UTresMove3_GigasBase_BoosterAir();
};

