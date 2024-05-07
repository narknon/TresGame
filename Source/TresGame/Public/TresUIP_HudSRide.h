#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudSRideTargetInfo.h"
#include "TresUIP_HudSRide.generated.h"

class UTresASProxyTresControlsBitmapNumber;
class UTresUIP_HudParts;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudSRide : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresHudSRideTargetInfo> m_targetInfoAry;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxSRideHud;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxGoggle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxNewRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxGlowLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxBoostBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxTargetSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_pGFxHighScore;
    
public:
    UTresUIP_HudSRide();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

