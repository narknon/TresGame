#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex010_UpDown.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex010_UpDown : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAccel;
    
    UTresAction_e_ex010_UpDown();
};

