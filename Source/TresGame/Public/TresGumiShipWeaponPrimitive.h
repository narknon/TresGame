#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrimitiveComponentBase.h"
#include "ETresGumiShipWeaponPrimType.h"
#include "TresGumiShipWeaponPrimitive.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipWeaponPrimitive : public UTresGumiShipPrimitiveComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipWeaponPrimType m_ePrimitiveType;
    
public:
    UTresGumiShipWeaponPrimitive();
};

