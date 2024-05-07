#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "EnvironmentQuery/EnvQueryTypes.h"
#include "TresAction6_e_ex307_Warp.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction6_e_ex307_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EnvQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EEnvQueryRunMode::Type> m_EnvQueryRunMode;
    
public:
    UTresAction6_e_ex307_Warp();
};

