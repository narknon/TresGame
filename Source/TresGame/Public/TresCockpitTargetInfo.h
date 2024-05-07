#pragma once
#include "CoreMinimal.h"
#include "TresCockpitTargetInfo.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresCockpitTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* TargetCursor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Gauge;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* GaugeParts[3];
    
    TRESGAME_API FTresCockpitTargetInfo();
};

