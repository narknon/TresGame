#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipShootWeaponBase.h"
#include "ETresGumiShipMultiWeaponSetTargetType.h"
#include "TresGumiShipMultiLockWeapon.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipMultiLockWeapon : public UTresGumiShipShootWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dMaxOfMultiLockNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dMinOfGuaranteeLockNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipMultiWeaponSetTargetType m_eSetTargetType;
    
public:
    UTresGumiShipMultiLockWeapon();
};

