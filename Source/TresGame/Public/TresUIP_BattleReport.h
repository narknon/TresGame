#pragma once
#include "CoreMinimal.h"
#include "TresUIParts.h"
#include "TresUIP_BattleReport.generated.h"

class UGFxObject;

UCLASS(Blueprintable)
class UTresUIP_BattleReport : public UTresUIParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pButtonInfoText;
    
public:
    UTresUIP_BattleReport();
};

