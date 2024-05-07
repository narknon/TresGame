#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_CampMenuCuisineConfirmNotice.generated.h"

class UGFxObject;
class UTresASProxyTresControlsButton;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuCuisineConfirmNotice : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TitleText;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_CusineIcons[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_CusineNames[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_CusineNameTexts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityHelpText;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_Parameters[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ParameterPrefixTexts[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ParameterTexts[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_BonusParameters[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_BonusParameterTexts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsButton* m_ButtonYes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsButton* m_ButtonNo;
    
public:
    UTresUIP_CampMenuCuisineConfirmNotice();
};

