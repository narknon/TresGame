#pragma once
#include "CoreMinimal.h"
#include "TresSpecialShipPointInfo.generated.h"

class UTresASProxyTresControlsButton;
class UGFxObject;

USTRUCT(BlueprintType)
struct FTresSpecialShipPointInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsButton* m_pGFxMarker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxVisited;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxNext;
    
    TRESGAME_API FTresSpecialShipPointInfo();
};

