#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresMobilePortalController.generated.h"

class UTresUIManager;
class UTresUIP_MobilePortal;
class UTresUIP_MobilePortalApp;
class ATresUIActor;

UCLASS(Blueprintable)
class UTresMobilePortalController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_MobilePortal* m_MobilePortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_MobilePortalApp* m_AppUIParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresUIActor* m_JiminyUIActor;
    
public:
    UTresMobilePortalController();
};

