#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresFoodstuffDropDataSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TRESGAME_API UTresFoodstuffDropDataSet : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    UDataTable* m_FoodstuffDropDataTables[32];
    
    UTresFoodstuffDropDataSet();
};

