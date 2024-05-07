#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresUIP_HudGummiShipAlert.generated.h"

class UGFxObject;
class UAudioComponent;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudGummiShipAlert : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pTextField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* m_pAudioComponent;
    
public:
    UTresUIP_HudGummiShipAlert();
};

