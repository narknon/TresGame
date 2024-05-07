#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraComponent.h"
#include "TresGumiShipCameraComponentBase.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCameraComponentBase : public UCameraComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTestRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fDitherAlpha;
    
public:
    UTresGumiShipCameraComponentBase();
};

