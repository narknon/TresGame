#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresCoopAction_EnemyShipBase_DistributeDarkChargeFormation.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAction_EnemyShipBase_DistributeDarkChargeFormation : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_OffsetPos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_OffsetPos2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_TargetPredictionOffsetTime;
    
    UTresCoopAction_EnemyShipBase_DistributeDarkChargeFormation();
};

