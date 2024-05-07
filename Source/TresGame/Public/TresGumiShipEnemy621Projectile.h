#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActualProjectile.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemy621Projectile.generated.h"

class UDamageType;
class UTresGumiShipBodyCollisionSetCompo;
class UTresGumiShipWeaponSequence;
class AActor;
class AController;

UCLASS(Blueprintable)
class ATresGumiShipEnemy621Projectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipWeaponSequence* m_pWeaponSequence;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fToStopDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fEndSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_rRotateSpeed;
    
public:
    ATresGumiShipEnemy621Projectile(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void OnActorTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser);
    
};

