#pragma once
#include "CoreMinimal.h"
#include "TresCodeMenuIconData.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

USTRUCT(BlueprintType)
struct FTresCodeMenuIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pIconAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_pIcon;
    
    TRESGAME_API FTresCodeMenuIconData();
};

