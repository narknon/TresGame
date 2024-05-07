#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefGumiParts.h"
#include "ETresItemDefGumiShipBP.h"
#include "ETresItemDefGumiEtc.h"
#include "TresGummiTreasureDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiTreasureDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiParts> m_nTreasureGummiParts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiEtc> m_nTreasureSpecialWeapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiShipBP> m_nTreasurePlan;
    
    TRESGAME_API FTresGummiTreasureDataTable();
};

