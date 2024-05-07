#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex059_Roar.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction3_e_ex059_Roar : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimName;
    
    UTresAction3_e_ex059_Roar();
};

