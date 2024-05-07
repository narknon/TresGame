#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudGigasMarkerInfo.h"
#include "TresUIP_HudGigas.generated.h"

class ATresVehiclePawnGigas;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudGigas : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresHudGigasMarkerInfo> m_markerInfoAry;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxGigasHud;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxTargetMark[3];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxLineAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxHudBgAnm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxNaviMapDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxAttackPadBtn;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionPadBtn[5];
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATresVehiclePawnGigas> m_pVehiclePawnGigas;
    
public:
    UTresUIP_HudGigas();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

