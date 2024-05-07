#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_MobilePortal.generated.h"

class UTresASProxyRSLBtnInfo;
class UGFxObject;
class UTresASProxyTresControlsImageIcon;
class UTresASProxyRSLStageCategory;
class UTresASProxyTresControlsIcon;
class UTresASProxyTresControlsButton;

UCLASS(Blueprintable)
class UTresUIP_MobilePortal : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MobilePortal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_WorldTitleIcon;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsButton* m_AppButtons[12];
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsImageIcon* m_AppButtonImageIcons[12];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_AppButtonCompleteMarks[12];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Jiminy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_JiminyIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AppScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AppScreenColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AppScreenIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLBtnInfo* m_BtnInfo;
    
public:
    UTresUIP_MobilePortal();
};

