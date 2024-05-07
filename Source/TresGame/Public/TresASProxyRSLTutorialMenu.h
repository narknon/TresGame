#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresASProxyRSLTutorialMenu.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UTresUIParts;
class UTresUIManager;

UCLASS(Blueprintable, NonTransient)
class UTresASProxyRSLTutorialMenu : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIParts* m_OwnerUIParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
public:
    UTresASProxyRSLTutorialMenu();
};

