#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_XIIILE_LeaderChangeWarpEnd.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_XIIILE_LeaderChangeWarpEnd : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bContactPatch: 1;
    
    UTresAction2_XIIILE_LeaderChangeWarpEnd();
};

