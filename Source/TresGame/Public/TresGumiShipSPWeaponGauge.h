#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSPWeaponGauge.generated.h"

class UGFxObject;

USTRUCT(BlueprintType)
struct FTresGumiShipSPWeaponGauge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGaugeBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGaugeEff;
    
    TRESGAME_API FTresGumiShipSPWeaponGauge();
};

