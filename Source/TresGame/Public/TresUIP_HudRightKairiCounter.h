#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_HudRightKairiCounter.generated.h"

class UGFxObject;
class UTresUIP_HudParts;

UCLASS(Blueprintable)
class UTresUIP_HudRightKairiCounter : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudParts* m_HudParts;
    
public:
    UTresUIP_HudRightKairiCounter();
};

