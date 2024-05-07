#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTinyShipPlanDataTableSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresTinyShipPlanDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> m_pTinyPlanData;
    
public:
    UTresTinyShipPlanDataTableSet();
};

