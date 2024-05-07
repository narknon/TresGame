#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHudGummiMenu.generated.h"

class UTresUIP_MenuGummiShip;
class UTresUIP_MenuGummiShipBackground;
class UTresUIP_EditGummiShip;

UCLASS(Blueprintable, NonTransient)
class ATresHudGummiMenu : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_MenuGummiShip* m_pGummiMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_EditGummiShip* m_pGummiEditor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_MenuGummiShipBackground* m_pGummiEditorBG;
    
public:
    ATresHudGummiMenu(const FObjectInitializer& ObjectInitializer);
};

