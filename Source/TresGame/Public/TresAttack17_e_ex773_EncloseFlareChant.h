#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack17_e_ex773_EncloseFlareChant.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack17_e_ex773_EncloseFlareChant : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ZHomingRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_ZHomingDist;
    
public:
    UTresAttack17_e_ex773_EncloseFlareChant();
};

