#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudSaix.generated.h"

class UTresUIP_HudParts;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudSaix : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxBerserkGauge[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxGaugeAnm[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxGauge[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxGaugeGradation[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxGaugeFlashAnm[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxGaugePlate;
    
public:
    UTresUIP_HudSaix();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

