#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_Philharmonic.generated.h"

class UTresASProxyRSLBtnInfo;
class UTresASProxyTresControlsList;
class UTresASProxyRSLHelpText;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_Philharmonic : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLBtnInfo* m_BtnInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CreditSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_SubtitleOnOff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_ContentList;
    
public:
    UTresUIP_Philharmonic();
};

