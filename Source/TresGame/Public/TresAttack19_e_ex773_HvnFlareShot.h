#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack19_e_ex773_HvnFlareShot.generated.h"

class ATresProjectileBase;
class ATresCameraTargetOTS;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack19_e_ex773_HvnFlareShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<TWeakObjectPtr<ATresProjectileBase>> m_FlareShotArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraTargetOTS* m_Camera;
    
    UTresAttack19_e_ex773_HvnFlareShot();
};

