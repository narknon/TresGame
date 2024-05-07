#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAction_XIIILB_Interface.h"
#include "TresAttack_XIIILB_Base.generated.h"

UCLASS(Abstract, Blueprintable, HideDropdown)
class UTresAttack_XIIILB_Base : public UTresAttackDefinitionBase, public ITresAction_XIIILB_Interface {
    GENERATED_BODY()
public:
    UTresAttack_XIIILB_Base();
    
    // Fix for true pure virtual functions not being implemented
};

