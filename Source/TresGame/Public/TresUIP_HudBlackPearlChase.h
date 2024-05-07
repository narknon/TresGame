#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudBlackPearlChase.generated.h"

class UTresUIP_HudParts;
class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudBlackPearlChase : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudParts* m_pHudParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxMarkerP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxMarkerB;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxBase;
    
public:
    UTresUIP_HudBlackPearlChase();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

