#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ca901_TentacleSummons.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ca901_TentacleSummons : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_EndTentacleSummonsNum;
    
    UTresAction2_e_ca901_TentacleSummons();
};

