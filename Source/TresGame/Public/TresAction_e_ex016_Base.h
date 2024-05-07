#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "ETresEnemyEx016ActionKind.h"
#include "TresAction_e_ex016_Base.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_e_ex016_Base : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx016ActionKind m_ActionKind;
    
    UTresAction_e_ex016_Base();
};

