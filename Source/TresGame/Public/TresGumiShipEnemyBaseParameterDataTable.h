#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "TresGumiShipDropPrizeData.h"
#include "TresGumiShipEnemyBaseParameterDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipEnemyBaseParameterDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nMaxHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_nScorePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxRotateSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPitchLimitAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipDropPrizeData m_DropPrizeSettingData;
    
    TRESGAME_API FTresGumiShipEnemyBaseParameterDataTable();
};

