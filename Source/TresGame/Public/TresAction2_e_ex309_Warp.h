#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction2_e_ex309_Warp.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction2_e_ex309_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction2_e_ex309_Warp();
};

