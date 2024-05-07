#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpecialWeaponBaseActor.h"
#include "TresGumiShipSpWeapon180Actor.generated.h"

class UTresGumiShipBodyCollisionSetCompo;
class UTresGumiShipAtkCollisionSetCompo;

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon180Actor : public ATresGumiShipSpecialWeaponBaseActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PrimarySearchDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Speed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SearchTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipBodyCollisionSetCompo* m_pBodyCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipAtkCollisionSetCompo* m_pAtkComllision;
    
public:
    ATresGumiShipSpWeapon180Actor(const FObjectInitializer& ObjectInitializer);
};

