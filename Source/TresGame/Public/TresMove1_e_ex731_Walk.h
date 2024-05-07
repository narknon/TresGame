#pragma once
#include "CoreMinimal.h"
#include "TresLocomotionDefinitionFlyCodeDriven.h"
#include "TresMove1_e_ex731_Walk.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresMove1_e_ex731_Walk : public UTresLocomotionDefinitionFlyCodeDriven {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchResetSpeed;
    
    UTresMove1_e_ex731_Walk();
};

