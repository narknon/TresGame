#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresGumiShipBonusParameterDataTableSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresGumiShipBonusParameterDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_pBonusParameterDataTable;
    
    UTresGumiShipBonusParameterDataTableSet();
};

