#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipSpWeapon230Actor.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipSpWeapon070Actor.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipSpWeapon070Actor : public ATresGumiShipSpWeapon230Actor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LagLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D LimitDeg;
    
    ATresGumiShipSpWeapon070Actor(const FObjectInitializer& ObjectInitializer);
};

