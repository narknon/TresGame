#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileRecord.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_MobileRecord : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_ListContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_ListRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_FzTreasureInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_FzTreasureInfo_Text;
    
public:
    UTresUIP_MobileRecord();
};

