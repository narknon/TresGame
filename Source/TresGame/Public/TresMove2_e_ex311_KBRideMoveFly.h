#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove2_e_ex311_KBRideMoveFly.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove2_e_ex311_KBRideMoveFly : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotCheck;
    
    UTresMove2_e_ex311_KBRideMoveFly();
};

