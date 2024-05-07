#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectile_EnemyShipBase.h"
#include "TresProjectile_EnemyLargeShipBase_DarkBomb.generated.h"

class ATresProjectileBase;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_EnemyLargeShipBase_DarkBomb : public ATresProjectile_EnemyShipBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> m_DarkBombExpProjectile;
    
    ATresProjectile_EnemyLargeShipBase_DarkBomb(const FObjectInitializer& ObjectInitializer);
};

