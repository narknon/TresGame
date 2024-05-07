#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUIP_CampMenuAdventureGuide.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_CampMenuAdventureGuide : public UTresASProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CuisineAbility;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CuisineAbilityNameText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CuisineTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CuisineTimeGauge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_CuisineTimeText;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_CuisineParameterTexts[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_CuisineBonusParameters[5];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_CuisineBonusParameterTexts[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MognetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_MognetNum;
    
public:
    UTresUIP_CampMenuAdventureGuide();
};

