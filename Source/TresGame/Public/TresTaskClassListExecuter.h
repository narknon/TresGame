#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresTaskClassListExecuter.generated.h"

class UTresTaskExecuterBase;

UCLASS(Blueprintable)
class UTresTaskClassListExecuter : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTaskExecuterBase* m_pTaskExecuter;
    
public:
    UTresTaskClassListExecuter();
};

