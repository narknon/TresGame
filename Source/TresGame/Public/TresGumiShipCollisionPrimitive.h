#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrimitiveComponentBase.h"
#include "TresGumiShipCollisionPrimitive.generated.h"

class UBodySetup;

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipCollisionPrimitive : public UTresGumiShipPrimitiveComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* m_pBodySetup;
    
public:
    UTresGumiShipCollisionPrimitive();
};

