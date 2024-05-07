#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPrimitiveComponentBase.h"
#include "TresGumiShipLockonPrimitive.generated.h"

class UBodySetup;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipLockonPrimitive : public UTresGumiShipPrimitiveComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bAutoEnableWhenBegin;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* m_pBodySetup;
    
public:
    UTresGumiShipLockonPrimitive();
};

