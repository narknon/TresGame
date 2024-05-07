#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipRaderObject.h"
#include "TresUIP_HudGummiShipRader.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudGummiShipRader : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    FTresGumiShipRaderObject m_rRaderIcons[40];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pRaderEff;
    
public:
    UTresUIP_HudGummiShipRader();
};

