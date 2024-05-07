#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex017_MagicSquare.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex017_MagicSquare : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_TurnSpeed;
    
    UTresAction1_e_ex017_MagicSquare();
};

