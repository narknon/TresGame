#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopSynthesisConfirmWindow.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_ShopSynthesisConfirmWindow : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ItemIconText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ItemNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ItemNumText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsButton* m_ButtonYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsButton* m_ButtonNo;
    
public:
    UTresUIP_ShopSynthesisConfirmWindow();
};

