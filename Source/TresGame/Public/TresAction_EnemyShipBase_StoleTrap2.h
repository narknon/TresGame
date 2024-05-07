#pragma once
#include "CoreMinimal.h"
#include "TresAction_EnemyShipBase_StoleTrapBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FloatInterval -FallbackName=FloatInterval
#include "StoleTrapWorkData.h"
#include "TresAction_EnemyShipBase_StoleTrap2.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAction_EnemyShipBase_StoleTrap2 : public UTresAction_EnemyShipBase_StoleTrapBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFloatInterval m_YawRange;
    
    UPROPERTY(EditAnywhere)
    FFloatInterval m_RadiusRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bUseYawRandomMinus;
    
protected:
    UPROPERTY(EditAnywhere, Transient)
    FStoleTrapWorkData m_ProjList[2];
    
public:
    UTresAction_EnemyShipBase_StoleTrap2();
};

