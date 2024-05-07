#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "TresGumiShipActualProjectile.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipSpWeapon020Projectile.generated.h"

class UPrimitiveComponent;
class UTresGumiShipDefCollisionSetCompo;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon020Projectile : public ATresGumiShipActualProjectile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipDefCollisionSetCompo* m_pDefCollision;
    
public:
    ATresGumiShipSpWeapon020Projectile(const FObjectInitializer& ObjectInitializer);
protected:
    UFUNCTION(BlueprintCallable)
    void _OnComponentHit(UPrimitiveComponent* pHitComponent, AActor* pOtherActor, UPrimitiveComponent* pOtherComp, FVector vNormalImpulse, const FHitResult& rHit);
    
};

