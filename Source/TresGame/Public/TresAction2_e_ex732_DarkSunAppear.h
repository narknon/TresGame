#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex732_DarkSunAppear.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex732_DarkSunAppear : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAppearAnim;
    
    UTresAction2_e_ex732_DarkSunAppear();
};

