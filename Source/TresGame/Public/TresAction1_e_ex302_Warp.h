#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction1_e_ex302_Warp.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction1_e_ex302_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_ActionEQSQuery;
    
    UTresAction1_e_ex302_Warp();
};

