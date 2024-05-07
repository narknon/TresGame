#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuCuisine.generated.h"

class UTresUIP_CampMenuCuisineFavorite;
class UTresASProxyRSLStageCategory;
class UTresUIP_CampMenuCuisineParameters;
class UTresASProxyRSLHelpText;
class UTresUIP_CampMenuCuisineSelectButton;
class UTresASProxyTresControlsButton;
class UTresUIP_CampMenuCuisineConfirmNotice;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuCuisine : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresUIP_CampMenuCuisineSelectButton* m_CuisineButtons[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsButton* m_EatButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_CampMenuCuisineFavorite* m_Favorite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_CampMenuCuisineParameters* m_Parameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_CampMenuCuisineConfirmNotice* m_ConfirmNotice;
    
public:
    UTresUIP_CampMenuCuisine();
};

