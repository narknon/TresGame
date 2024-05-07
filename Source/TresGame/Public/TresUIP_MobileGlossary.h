#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileGlossary.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;
class UTresASProxyTresControlsScrollBar;

UCLASS(Blueprintable)
class UTresUIP_MobileGlossary : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_List;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ContentText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsScrollBar* m_ContentTextScrollBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_HelpTextSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
public:
    UTresUIP_MobileGlossary();
};

