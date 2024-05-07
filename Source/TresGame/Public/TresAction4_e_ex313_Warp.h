#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresAction4_e_ex313_Warp.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction4_e_ex313_Warp : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_WarpEQSQuery;
    
public:
    UTresAction4_e_ex313_Warp();
};

