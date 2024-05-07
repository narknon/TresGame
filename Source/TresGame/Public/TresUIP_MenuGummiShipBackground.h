#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MenuGummiShipBackground.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_MenuGummiShipBackground : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_gummishipMenuBg;
    
public:
    UTresUIP_MenuGummiShipBackground();
};

