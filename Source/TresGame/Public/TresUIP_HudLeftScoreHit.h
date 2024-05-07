#pragma once
#include "CoreMinimal.h"
#include "TresUIP_HudParts.h"
#include "TresUIP_HudLeftScoreHit.generated.h"

class UGFxObject;
class UTresASProxyTresControlsBitmapNumber;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_HudLeftScoreHit : public UTresUIP_HudParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxScoreSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxNewRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pGFxCounterEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsBitmapNumber* m_pGFxHit;
    
public:
    UTresUIP_HudLeftScoreHit();
};

