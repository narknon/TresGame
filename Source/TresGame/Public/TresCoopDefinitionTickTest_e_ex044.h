#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoopDefinitionTickTest_e_ex044.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresCoopDefinitionTickTest_e_ex044 : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UTresCoopDefinitionTickTest_e_ex044();
protected:
    UFUNCTION(BlueprintCallable)
    bool IsReady(const FTresCoopDefinitionParamBP& Param) const;
    
};

