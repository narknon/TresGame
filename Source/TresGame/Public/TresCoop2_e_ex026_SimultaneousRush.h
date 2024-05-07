#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopSimultaneousRushInfo.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop2_e_ex026_SimultaneousRush.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoop2_e_ex026_SimultaneousRush : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresCoopSimultaneousRushInfo> m_SimultaneousRushInfos;
    
    UTresCoop2_e_ex026_SimultaneousRush();
    UFUNCTION(BlueprintCallable)
    void CoopWarpReady(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    void CoopWarpFinished(const FTresCoopDefinitionParamBP& Param);
    
};

