#pragma once
#include "CoreMinimal.h"
#include "TresAction_XIIILB_Base.h"
#include "TresEnemyNotifyInterface_e_ex358.h"
#include "TresAction_e_ex358_Interface.h"
#include "TresAction_e_ex358_Base.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresAction_e_ex358_Base : public UTresAction_XIIILB_Base, public ITresEnemyNotifyInterface_e_ex358, public ITresAction_e_ex358_Interface {
    GENERATED_BODY()
public:
    UTresAction_e_ex358_Base();
    
    // Fix for true pure virtual functions not being implemented
};

