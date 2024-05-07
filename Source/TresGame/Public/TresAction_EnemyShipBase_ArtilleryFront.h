#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_Artillery.h"
#include "TresAction_EnemyShipBase_ArtilleryFront.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyShipBase_ArtilleryFront : public UTresAction_EnemyShipBase_Artillery {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_FrontSocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EnableDelayForIterateSocket;
    
public:
    UTresAction_EnemyShipBase_ArtilleryFront();
};

