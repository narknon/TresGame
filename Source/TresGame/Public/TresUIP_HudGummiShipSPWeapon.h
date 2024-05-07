#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipUISubParts.h"
#include "TresGumiShipSPWeaponGauge.h"
#include "TresUIP_HudGummiShipSPWeapon.generated.h"

class UGFxObject;
class UTresASProxyTresControlsIcon;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudGummiShipSPWeapon : public UTresGumiShipUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pIconChargeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGaugeAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pChargeAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pActiveAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsIcon* m_pWeaponIconObj;
    
    UPROPERTY(EditAnywhere, Transient)
    FTresGumiShipSPWeaponGauge m_pSpWeaponGauge[3];
    
public:
    UTresUIP_HudGummiShipSPWeapon();
};

