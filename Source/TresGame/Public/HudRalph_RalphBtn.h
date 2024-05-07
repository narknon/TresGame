#pragma once
#include "CoreMinimal.h"
#include "HudRalph_RalphBtn.generated.h"

class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

USTRUCT(BlueprintType)
struct FHudRalph_RalphBtn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* IconS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* StockBitmapNumber;
    
    TRESGAME_API FHudRalph_RalphBtn();
};

