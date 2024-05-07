#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipGimmickActorBase.h"
#include "TresGumiShipTornadoGimmick.generated.h"

UCLASS(Abstract, Blueprintable)
class ATresGumiShipTornadoGimmick : public ATresGumiShipGimmickActorBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RotationSpeed;
    
public:
    ATresGumiShipTornadoGimmick(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable)
    void StopRotation(bool bStop);
    
};

