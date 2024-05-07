#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipActorCompoBase.h"
#include "TresGumiShipPlayerInputWorker.generated.h"

class UTresGumiShipPlayerInputWorkBase;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UTresGumiShipPlayerInputWorker : public UTresGumiShipActorCompoBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresGumiShipPlayerInputWorkBase*> m_pInputWorks;
    
public:
    UTresGumiShipPlayerInputWorker();
};

