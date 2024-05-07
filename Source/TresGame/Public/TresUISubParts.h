#pragma once
#include "CoreMinimal.h"
#include "TresASProxy.h"
#include "TresUISubParts.generated.h"

class UTresUIParts;

UCLASS(Blueprintable, NonTransient)
class UTresUISubParts : public UTresASProxy {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIParts* m_Owner;
    
public:
    UTresUISubParts();
};

