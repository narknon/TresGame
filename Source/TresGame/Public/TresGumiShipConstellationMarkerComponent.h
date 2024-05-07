#pragma once
#include "CoreMinimal.h"
#include "TresDetectMarkerComponentBase.h"
#include "ETresGumiShipConstellationCode.h"
#include "UObject/NoExportTypes.h"
#include "TresGumiShipConstellationMarkerComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipConstellationMarkerComponent : public UTresDetectMarkerComponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGumiShipConstellationCode> ConstellationCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D SizeRectangle;
    
public:
    UTresGumiShipConstellationMarkerComponent();
};

