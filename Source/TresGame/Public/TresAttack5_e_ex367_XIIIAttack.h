#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "TresAttack5XIIIAttackTypes_e_ex367.h"
#include "TresAttack5_e_ex367_XIIIAttack.generated.h"

class ATresCameraNormal;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack5_e_ex367_XIIIAttack : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<TresAttack5XIIIAttackTypes_e_ex367> m_ActionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraChangeWait;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CameraTransition;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ATresCameraNormal* m_Camera;
    
public:
    UTresAttack5_e_ex367_XIIIAttack();
};

