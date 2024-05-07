#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipShootWeaponBase.h"
#include "TresGumiShipStrikeShockWaveWeaponBase.generated.h"

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipStrikeShockWaveWeaponBase : public UTresGumiShipShootWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxOfWidth;
    
public:
    UTresGumiShipStrikeShockWaveWeaponBase();
};

