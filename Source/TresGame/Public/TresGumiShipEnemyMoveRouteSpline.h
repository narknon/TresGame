#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipSplineAdditionalData.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipEnemyMoveRouteSpline.generated.h"

class USplineComponent;

UCLASS(Blueprintable)
class ATresGumiShipEnemyMoveRouteSpline : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USplineComponent* m_pEnemyMoveRouteSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresGumiShipSplineAdditionalData> m_AdditionalData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vRailShootingRouteAttachOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_RailShootingRouteAttachRotation;
    
public:
    ATresGumiShipEnemyMoveRouteSpline(const FObjectInitializer& ObjectInitializer);
};

