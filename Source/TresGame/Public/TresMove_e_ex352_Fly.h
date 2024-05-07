#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove_e_ex352_Fly.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove_e_ex352_Fly : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPitchLimiterForVelocity;
    
    UTresMove_e_ex352_Fly();
};

