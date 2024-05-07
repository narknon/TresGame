#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipConstellationCode.h"
#include "TresGumiShipGimmickConstellationTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipGimmickConstellationTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGumiShipConstellationCode> m_ConstellationCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_NameStrId;
    
    TRESGAME_API FTresGumiShipGimmickConstellationTable();
};

