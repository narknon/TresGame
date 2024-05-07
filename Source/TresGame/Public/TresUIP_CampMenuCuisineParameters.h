#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_CampMenuCuisineParameters.generated.h"

class UGFxObject;
class UTresASProxyTresControlsRadarChart;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuCuisineParameters : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Ability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityTextRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityIconText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_AbilityHelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ParameterRisePack;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ParametersRisePlus[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ParametersRiseText[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ParametersTotalChange[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ParametersTotalChangeText[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_ParametersTotalText[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_BonusParameters[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_BonusParameterTexts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_Time;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TimeGaugeRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TimeGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_TimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsRadarChart* m_RadarChart;
    
public:
    UTresUIP_CampMenuCuisineParameters();
};

