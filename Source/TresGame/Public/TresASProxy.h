#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresASProxy.generated.h"

class UGFxObject;

UCLASS(Blueprintable, Transient)
class UTresASProxy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ASObject;
    
public:
    UTresASProxy();
};

