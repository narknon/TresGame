#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_StoleTrapBase.h"
#include "UObject/NoExportTypes.h"
#include "EStoleTrapN.h"
#include "StoleTrapWorkData.h"
#include "TresAction_EnemyShipBase_StoleTrapN.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyShipBase_StoleTrapN : public UTresAction_EnemyShipBase_StoleTrapBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_StoleTrapNum;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_RadiusRange;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_SpawnRandamTimeRange;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_InvalidRadiusRangeFromBattleCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_CircleDistortionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<EStoleTrapN::Type> m_CenterType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FStoleTrapWorkData> m_ProjList;
    
public:
    UTresAction_EnemyShipBase_StoleTrapN();
};

