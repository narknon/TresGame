#pragma once
#include "CoreMinimal.h"
#include "TresAction_e_ex358_Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEnvQueryRunMode -FallbackName=EEnvQueryRunMode
#include "TresAction2_e_ex358_Warp.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex358_Warp : public UTresAction_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction2_e_ex358_Warp();
};

