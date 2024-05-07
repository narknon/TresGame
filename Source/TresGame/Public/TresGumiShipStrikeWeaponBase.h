#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipWeaponBase.h"
#include "TresGumiShipStrikeWeaponBase.generated.h"

class UParticleSystem;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipStrikeWeaponBase : public UTresGumiShipWeaponBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackDataName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackDataNameForShockWave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_byStrikeGumiDataIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pParticleSystem;
    
public:
    UTresGumiShipStrikeWeaponBase();
};

