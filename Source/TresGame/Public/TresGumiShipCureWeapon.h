#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipTriggerOnlyWeapon.h"
#include "ETresGumiShipCureValueType.h"
#include "TresGumiShipCureWeapon.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCureWeapon : public UTresGumiShipTriggerOnlyWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipCureValueType m_eCureType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCureValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCureValueMax;
    
public:
    UTresGumiShipCureWeapon();
};

