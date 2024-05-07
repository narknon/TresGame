#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionWeaponBase.h"
#include "TresAction_EnemyShipBase_ArtilleryPair.generated.h"

class UTresAction_EnemyShipBase_Artillery;

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyShipBase_ArtilleryPair : public UTresAttackDefinitionWeaponBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAction_EnemyShipBase_Artillery> m_ArtilleryFrontDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAction_EnemyShipBase_Artillery> m_ArtillerySideDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_YawBorderAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresAction_EnemyShipBase_Artillery* m_LastAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAction_EnemyShipBase_Artillery*> m_CacheAttacks;
    
public:
    UTresAction_EnemyShipBase_ArtilleryPair();
};

