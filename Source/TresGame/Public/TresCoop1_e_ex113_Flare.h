#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex113_Flare.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresCoop1_e_ex113_Flare : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_EnvQuery;
    
public:
    UTresCoop1_e_ex113_Flare();
    UFUNCTION(BlueprintCallable)
    void CoopMemberWarpEnd(const FTresCoopDefinitionParamBP& Param);
    
};

