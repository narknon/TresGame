#pragma once
#include "CoreMinimal.h"
#include "TresActionDefinitionBase.h"
#include "TresCoopAction_EnemyShipBase_DistributeArtilleryFormation.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresCoopAction_EnemyShipBase_DistributeArtilleryFormation : public UTresActionDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DepthOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArcLengthFirst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ArcLengthSecond;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_RadiusAddDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_YawDeclRate;
    
    UTresCoopAction_EnemyShipBase_DistributeArtilleryFormation();
};

