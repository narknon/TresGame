#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefGumiShipBP.h"
#include "TresGummiPieceDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGummiPieceDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiShipBP> m_pSpace1GummiPieceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiShipBP> m_pSpace2GummiPieceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiShipBP> m_pSpace3GummiPieceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ETresItemDefGumiShipBP> m_pSpace4GummiPieceData;
    
    TRESGAME_API FTresGummiPieceDataTable();
};

