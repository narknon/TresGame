#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresHudBmmTargetInfo.h"
#include "TresUIP_HudBmm.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudBmm : public UTresCockpitParts {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresHudBmmTargetInfo m_chanceInfo;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxBmmTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxBmmTargetAnm;
    
public:
    UTresUIP_HudBmm();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

