#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipCollisionShape.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipStrikeGumiParametarDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipStrikeGumiParametarDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipCollisionShape m_eShape;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fRefreshSec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fWidth;
    
    TRESGAME_API FTresGumiShipStrikeGumiParametarDataTable();
};

