#pragma once
#include "CoreMinimal.h"
#include "TresUIP_Hologram_CharaInfoIcon.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

USTRUCT(BlueprintType)
struct FTresUIP_Hologram_CharaInfoIcon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_IconRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_IconImg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_NewMark;
    
    TRESGAME_API FTresUIP_Hologram_CharaInfoIcon();
};

