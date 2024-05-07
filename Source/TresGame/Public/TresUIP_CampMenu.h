#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_CampMenu.generated.h"

class UTresUIP_CampMenuAdventureGuide;
class UTresASProxyTresControlsIcon;
class UTresASProxyRSLTopMenuCmd;
class UGFxObject;
class UTresUIP_CampMenuCharacterStatus;
class UTresASProxyTresControlsButton;
class UTresASProxyRSLHelpText;
class UTresASProxyRSLStageFrame;
class UTresASProxyRSLStageCategory;
class UTresCampController;
class UTresUIP_CampMenuSubParts;

UCLASS(Blueprintable)
class UTresUIP_CampMenu : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsIcon* m_ObjBGIcons[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ObjTopMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_NextToDo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ObjStatusAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ObjStatus;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresUIP_CampMenuCharacterStatus* m_CharacterStatus[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ObjAdventureGuideAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_CampMenuAdventureGuide* m_AdventureGuide;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyRSLTopMenuCmd* m_MenuButtons[9];
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_CharaButtons[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageFrame* m_StageFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresCampController* m_CampController;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresUIP_CampMenuSubParts* m_SubMenus[8];
    
public:
    UTresUIP_CampMenu();
};

