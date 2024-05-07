#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudTarget_UltimaLock.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresUIP_HudTarget_UltimaLock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* UltimaLockSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* UltimaLockGauge;
    
    TRESGAME_API FTresUIP_HudTarget_UltimaLock();
};

