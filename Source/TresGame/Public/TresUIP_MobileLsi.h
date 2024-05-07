#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileLsi.generated.h"

class UGFxObject;
class UTresASProxyTresControlsImageIcon;
class UTresUIP_MobileLsiButton;

UCLASS(Blueprintable)
class UTresUIP_MobileLsi : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_HelpTextTitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_HelpTextDetailText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Result;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ResultCategory1Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ResultCategory2Text;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ResultRankNum[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ResultRankText[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ResultTextMain[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ResultTextSub[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ResultUnitA[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ResultUnitB[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ResultUnitC[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Cursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CursorGra0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CursorGra1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CursorBG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsImageIcon* m_CursorCloseBGImageIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CursorNewMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CursorCompleteMark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ButtonRoot;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresUIP_MobileLsiButton* m_Buttons[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ArrowL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ArrowR;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Page;
    
public:
    UTresUIP_MobileLsi();
};

