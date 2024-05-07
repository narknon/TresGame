#pragma once
#include "CoreMinimal.h"
#include "TresUICampMenuCuisineFavoriteItem.h"
#include "TresUISubParts.h"
#include "TresUIP_CampMenuCuisineFavorite.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuCuisineFavorite : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Window;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Title;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_Buttons[8];
    
    UPROPERTY(EditAnywhere, Transient)
    FTresUICampMenuCuisineFavoriteItem m_Items[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ParametersText[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_BonusParameters[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_BonusParameterTexts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityIconText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityHelpText;
    
public:
    UTresUIP_CampMenuCuisineFavorite();
};

