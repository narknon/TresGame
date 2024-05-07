#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudSpecialShipTargetInfo.h"
#include "TresUIP_HudSpecialShip.generated.h"

class UTresASProxyTresControlsBitmapNumber;
class UTresUIP_HudParts;
class ATresVehiclePawnSpecialShip;
class UGFxObject;
class ATresPlayerControllerBase;

UCLASS(Blueprintable)
class UTresUIP_HudSpecialShip : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresHudSpecialShipTargetInfo> m_targetInfoAry;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxScopeMove;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxScopeMoveGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxScopeMoveScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxScopeMoveReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxSpecialShip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxShipSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxSpeedGg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxShipHp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxShipIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxIconEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxShipBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxGoalMeterP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxGoalMeterL;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxGoalMeterBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxShipGoalMarker;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxShipGoalArrow[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxShipNaviMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_pGFxGoalMarker;
    
    UPROPERTY(EditAnywhere, Transient)
    UTresASProxyTresControlsBitmapNumber* m_pGFxGoalArrow[2];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxActionCmdList[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxActionCmdData[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxActionCmdAct[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxActionCmdText[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxActionCmdCount[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxActionCmdGgAnm[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxActionCmdTime[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxActionCmdTime2[4];
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UGFxObject* m_pGFxCmdActLogoGg[3];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxActionPadBtn[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxActEvTopPadBtn;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_pGFxExModePadBtn[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresPlayerControllerBase* m_pPlayerControllerBase;
    
    UPROPERTY(EditAnywhere, Transient)
    TWeakObjectPtr<ATresVehiclePawnSpecialShip> m_pVehiclePawnSpecialShip;
    
public:
    UTresUIP_HudSpecialShip();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

