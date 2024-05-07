#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUD.generated.h"

class UTresUIDataAssetCockpit;
class UTresCockpit;

UCLASS(Blueprintable, NonTransient)
class ATresHUD : public ATresHUDBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAssetCockpit* m_CockpitData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresCockpit* TresCockpit;
    
    ATresHUD(const FObjectInitializer& ObjectInitializer);
};

