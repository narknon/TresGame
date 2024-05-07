#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudTarget_ButtonCount.generated.h"

class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

USTRUCT(BlueprintType)
struct FTresUIP_HudTarget_ButtonCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* ColorSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* Seconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* DecimalSeconds;
    
    TRESGAME_API FTresUIP_HudTarget_ButtonCount();
};

