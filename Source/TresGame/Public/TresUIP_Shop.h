#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Shop.generated.h"

class UTresUIP_ShopMesWin;
class UTresASProxyTresControlsTabControl;
class UTresASProxyRSLStageCategory;
class UTresUIP_ShopSynthesisConfirmWindow;
class UTresASProxyRSLTopMenuCmd;
class UGFxObject;
class UTresASProxyTresControlsIcon;
class UTresUIP_ShopSynthesisTop;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UTresASProxyRSLItemStatusA;
class UTresUIP_ShopItemSynthesis;
class UTresUIP_ShopKeyPowerUp;
class UTresUIP_ShopPhotoMission;
class UTresUIP_ShopCollection;
class UTresUIP_ShopMaterialListMenu;
class UTresASProxyRSLStageFrame;

UCLASS(Blueprintable)
class UTresUIP_Shop : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_ShopMesWin* m_MesWin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_ShopSynthesisConfirmWindow* m_SynthesisConfirmWindow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CharaIconOpenCloseAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CharaIconPosAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_CharaIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MenuTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategoryTop;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyRSLTopMenuCmd* m_TopMenuCmds[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MenuList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsTabControl* m_ItemListTab;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_ItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ItemListLines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ItemListHeaderAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_ItemListHelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategoryList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLItemStatusA* m_ItemStatusA;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_ShopSynthesisTop* m_SynthesisTop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_ShopItemSynthesis* m_ItemSynthesisMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_ShopKeyPowerUp* m_KeyPowerUpMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_ShopPhotoMission* m_PhotoMissionMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_ShopCollection* m_CollectionMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_ShopMaterialListMenu* m_MaterialListMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageFrame* m_StageFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_StageBg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_Snapshot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ScreenEffBlack;
    
public:
    UTresUIP_Shop();
};

