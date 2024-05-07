#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex013_Coop.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex013_Coop : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_pro_b6BodiesVersion;
    
public:
    UTresAction2_e_ex013_Coop();
};

