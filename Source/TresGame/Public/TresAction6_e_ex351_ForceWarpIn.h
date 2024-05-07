#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction6_e_ex351_ForceWarpIn.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction6_e_ex351_ForceWarpIn : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bTimeRushActionAbortWait: 1;
    
    UTresAction6_e_ex351_ForceWarpIn();
};

