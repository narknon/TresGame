#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionAirCodeDriven.h"
#include "TresMove2_e_ex114_GlideMove.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove2_e_ex114_GlideMove : public UTresLocomotionDefinitionAirCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_JumpTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_MoveTime;
    
    UTresMove2_e_ex114_GlideMove();
};

