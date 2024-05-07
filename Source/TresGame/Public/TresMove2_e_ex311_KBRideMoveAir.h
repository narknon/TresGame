#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAirCodeDriven.h"
#include "TresMove2_e_ex311_KBRideMoveAir.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove2_e_ex311_KBRideMoveAir : public UTresLocomotionDefinitionAirCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RotationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveSpeed;
    
    UTresMove2_e_ex311_KBRideMoveAir();
};

