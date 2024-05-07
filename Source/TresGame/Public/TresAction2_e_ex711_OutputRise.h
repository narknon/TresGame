#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex711_OutputRise.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex711_OutputRise : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_RiseHeight;
    
    UTresAction2_e_ex711_OutputRise();
};

