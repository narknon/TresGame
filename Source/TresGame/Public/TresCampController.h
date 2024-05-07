#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresUICampCharacterParam.h"
#include "TresCampController.generated.h"

class UTresUIManager;
class UTresUIP_CampMenu;

UCLASS(Blueprintable)
class UTresCampController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_CampMenu* m_CampMenu;
    
    UPROPERTY(EditAnywhere, Transient)
    FTresUICampCharacterParam m_PartyParams[5];
    
public:
    UTresCampController();
};

