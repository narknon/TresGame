#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipRailShootingRouteSplineDataGetter.h"
#include "TresGumiShipRailShootingBattleSetData.generated.h"

class ATriggerBase;
class ATresGumiShipEnemyGenerator;

USTRUCT(BlueprintType)
struct FTresGumiShipRailShootingBattleSetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATriggerBase* m_pEnemySpawnTrigger;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ATresGumiShipEnemyGenerator*> m_EnemyGeneratorList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipRailShootingRouteSplineDataGetter m_TriggerPointAttachData;
    
    TRESGAME_API FTresGumiShipRailShootingBattleSetData();
};

