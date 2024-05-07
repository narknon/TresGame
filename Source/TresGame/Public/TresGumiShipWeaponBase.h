#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipWeaponSequencePort.h"
#include "TresGumiShipWeaponPrimitive.h"
#include "TresGumiShipWeaponBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipWeaponBase : public UTresGumiShipWeaponPrimitive {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_WeaponDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGumiShipWeaponSequencePort> m_ePort;
    
public:
    UTresGumiShipWeaponBase();
};

