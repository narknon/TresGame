#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction6_e_ex361_WarpEnd.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction6_e_ex361_WarpEnd : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bContactPatch: 1;
    
    UTresAction6_e_ex361_WarpEnd();
};

