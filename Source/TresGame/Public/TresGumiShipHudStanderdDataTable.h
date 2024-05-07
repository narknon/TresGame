#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipHudRaderParam.h"
#include "TresGumiShipHudGuideAreaParam.h"
#include "TresGumiShipHudStanderdDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipHudStanderdDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHudRaderParam m_RaderParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipHudGuideAreaParam m_GuideParam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShowMessageWindowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_dEnemyHPGaugeMax;
    
    TRESGAME_API FTresGumiShipHudStanderdDataTable();
};

