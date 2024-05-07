#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex203_Absorption.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoop1_e_ex203_Absorption : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CheckAngle;
    
public:
    UTresCoop1_e_ex203_Absorption();
    UFUNCTION(BlueprintCallable)
    void ApplyAbortCheck(const FTresCoopDefinitionParamBP& Param) const;
    
};

