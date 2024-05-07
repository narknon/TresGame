#pragma once
#include "CoreMinimal.h"
#include "TresCockpitParts.h"
#include "TresUIP_HudGigasGameBack.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_HudGigasGameBack : public UTresCockpitParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TargetObject;
    
public:
    UTresUIP_HudGigasGameBack();
    UFUNCTION(BlueprintCallable)
    int32 OnCallback(int32 ID, int32 Param);
    
};

