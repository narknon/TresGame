#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction3_e_ex711_Crash.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction3_e_ex711_Crash : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_StunTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_DiveFallDamageSpeed;
    
    UTresAction3_e_ex711_Crash();
};

