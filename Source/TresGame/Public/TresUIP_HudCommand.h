#pragma once
#include "CoreMinimal.h"
#include "TresCockpitCmdInfo.h"
#include "TresCockpitParts.h"
#include "TresCockpitShortcutCmdInfo.h"
#include "TresCockpitFriendInfo.h"
#include "TresUIP_HudCommand.generated.h"

class UTresUIHudCommandDataAsset;
class UTresUICommandInfoCockpit;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudCommand : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresCockpitCmdInfo m_mainCmdInfoAry[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresCockpitShortcutCmdInfo m_shortcutCmdInfoAry[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresCockpitFriendInfo m_friendInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionCmdList[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionCmdData[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionCmdAct[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionCmdText[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionCmdCount[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionCmdGgAnm[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionCmdTime[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionCmdTime2[7];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxMainCmdList[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxSubCmdList[9];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxSubCmdText[9];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxSubCmdName[9];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxSubCmdListNext;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxSubCmdListNextName;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxUpdateMainCmd[2];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxShortcut[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxShortcutName[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActLogoGg[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxActEvTopText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUICommandInfoCockpit* m_pCommandInfoCockpit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIHudCommandDataAsset* m_HudCommandDataAsset;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionPadBtn[7];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxActEvTopPadBtn;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxExModePadBtn[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxShortcutPadBtn[4];
    
public:
    UTresUIP_HudCommand();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

