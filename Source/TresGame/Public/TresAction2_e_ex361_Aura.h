#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction2_e_ex361_Aura.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex361_Aura : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LightCoefficient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LightChangeStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_LightChangeEndTime;
    
public:
    UTresAction2_e_ex361_Aura();
};

