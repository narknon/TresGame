#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipWorldSymbolID.h"
#include "ETresGumiShipTravelPointID.h"
#include "TresFirstMapJumpData.generated.h"

USTRUCT(BlueprintType)
struct FTresFirstMapJumpData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipWorldSymbolID m_nWmSymbleID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PresistenLevelPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_PlayerStartTagName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isWorldStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipWorldSymbolID m_nWmStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isTpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipTravelPointID m_nTpStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_DebugInfo;
    
    TRESGAME_API FTresFirstMapJumpData();
};

