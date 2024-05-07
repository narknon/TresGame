#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex781_AeroGuard.generated.h"

UCLASS(Blueprintable)
class UTresAction4_e_ex781_AeroGuard : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_GuardTime;
    
    UTresAction4_e_ex781_AeroGuard();
};

