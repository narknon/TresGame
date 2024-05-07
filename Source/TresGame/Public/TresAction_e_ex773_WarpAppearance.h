#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_ex773_WarpAppearance.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex773_WarpAppearance : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RigidTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApear;
    
    UTresAction_e_ex773_WarpAppearance();
};

