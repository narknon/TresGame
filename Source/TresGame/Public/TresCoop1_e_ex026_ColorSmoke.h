#pragma once
#include "CoreMinimal.h"
#include "TresCoopDefinitionBase.h"
#include "TresCoopDefinitionParamBP.h"
#include "TresCoop1_e_ex026_ColorSmoke.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, HideDropdown)
class UTresCoop1_e_ex026_ColorSmoke : public UTresCoopDefinitionBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_EntryRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ForwardOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpaceBetween;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_QueryTemplateWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_QueryShakeOffWarp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* m_QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_QueryIntervalTime;
    
public:
    UTresCoop1_e_ex026_ColorSmoke();
    UFUNCTION(BlueprintCallable)
    void ProgressSpreadStep(const FTresCoopDefinitionParamBP& Param);
    
    UFUNCTION(BlueprintCallable)
    bool IsStartSpread(const FTresCoopDefinitionParamBP& Param) const;
    
    UFUNCTION(BlueprintCallable)
    void CoopWarpReady(const FTresCoopDefinitionParamBP& Param);
    
};

