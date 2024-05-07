#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_he903_Wind.generated.h"

class UCurveFloat;

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_he903_Wind : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_iMaxLoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxLoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bLoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* m_ForceCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bPermitAttack;
    
    UTresAction2_e_he903_Wind();
};

