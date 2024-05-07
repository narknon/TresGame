#pragma once
#include "CoreMinimal.h"
#include "TresUIP_MobilePortalApp.h"
#include "TresUIP_MobileTreasure.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_MobileTreasure : public UTresUIP_MobilePortalApp {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TotalTreasureNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_WorldNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TreasureItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_TreasureList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
public:
    UTresUIP_MobileTreasure();
};

