#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipEnemyTerritoryID.h"
#include "ETresGummiSpaceDef.h"
#include "TresGumiShipEnemyTerritoryInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyTerritoryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipEnemyTerritoryID m_eTerritoryID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_sNameLabel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGummiSpaceDef m_nSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_nDispNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    uint8 m_nLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_isDiscard;
    
    TRESGAME_API FTresGumiShipEnemyTerritoryInfo();
};

