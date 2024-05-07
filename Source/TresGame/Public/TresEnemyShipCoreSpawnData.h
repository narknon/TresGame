#pragma once
#include "CoreMinimal.h"
#include "ETresEnemyShip.h"
#include "TresEnemyShipCoreSpawnData.generated.h"

USTRUCT(BlueprintType)
struct FTresEnemyShipCoreSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyShip::Type> m_LocType;
    
    TRESGAME_API FTresEnemyShipCoreSpawnData();
};

