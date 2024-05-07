#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresTreasureDataSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TRESGAME_API UTresTreasureDataSet : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UDataTable* m_TreasureDataTables[32];
    
    UTresTreasureDataSet();
};

