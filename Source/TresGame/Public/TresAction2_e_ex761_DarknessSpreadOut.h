#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex761_DarknessSpreadOutBase.h"
#include "TresAction2_e_ex761_DarknessSpreadOut.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex761_DarknessSpreadOut : public UTresAction_e_ex761_DarknessSpreadOutBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearBlockDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AppearBlockOtherPawnDistance;
    
public:
    UTresAction2_e_ex761_DarknessSpreadOut();
};

