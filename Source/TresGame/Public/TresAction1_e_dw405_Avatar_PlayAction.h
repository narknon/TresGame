#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction_e_dw405_Interface.h"
#include "TresAction1_e_dw405_Avatar_PlayAction.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_dw405_Avatar_PlayAction : public UTresActionDefinitionBase, public ITresAction_e_dw405_Interface {
    GENERATED_BODY()
public:
    UTresAction1_e_dw405_Avatar_PlayAction();
    
    // Fix for true pure virtual functions not being implemented
};

