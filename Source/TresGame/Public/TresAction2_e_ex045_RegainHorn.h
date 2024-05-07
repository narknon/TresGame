#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex045_RegainHorn.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex045_RegainHorn : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRegainSpeed;
    
    UTresAction2_e_ex045_RegainHorn();
};

