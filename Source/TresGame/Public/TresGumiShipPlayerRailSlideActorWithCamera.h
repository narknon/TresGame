#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerRailSlideActor.h"
#include "TresGumiShipPlayerRailSlideActorWithCamera.generated.h"

class USpringArmComponent;
class UTresGumiShipDirectSpeedCompo;

UCLASS(Blueprintable)
class ATresGumiShipPlayerRailSlideActorWithCamera : public ATresGumiShipPlayerRailSlideActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USpringArmComponent* m_pSplingArm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTresGumiShipDirectSpeedCompo* m_pDirect;
    
public:
    ATresGumiShipPlayerRailSlideActorWithCamera(const FObjectInitializer& ObjectInitializer);
};

