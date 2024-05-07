#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudShining.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudShining : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_UltimaLockSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_UltimaLockGauge;
    
public:
    UTresUIP_HudShining();
};

