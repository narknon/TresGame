#pragma once
#include "CoreMinimal.h"
#include "TresUIP_CampMenuSubParts.h"
#include "TresUIP_CampMenuCustomize.generated.h"

class UGFxObject;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsTabControl;
class UTresASProxyRSLStageCategory;
class UTresASProxyTresControlsButton;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuCustomize : public UTresUIP_CampMenuSubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_TopLayerTitles[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_TopLayerButtons[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MagicAndLinkRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MagicAndLinkTitle;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_MagicLinkButtons[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MagicLinkWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MagicSettingThirdLayerRoot;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_MagicStrengthButtons[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ShortcutButtonRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ShortcutTitle;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_ShortcutButtons[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ShortcutButtonsPadText[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ShortcutListRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_ShortcutSettingList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsTabControl* m_ShortcutListTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_NpcSecondLayerRoot;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_NpcSettingTitles[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_NpcSettingButtons[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_NpcSettingListRoot;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_NpcSettingListButtons[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_NpcSettingListTitle;
    
public:
    UTresUIP_CampMenuCustomize();
};

