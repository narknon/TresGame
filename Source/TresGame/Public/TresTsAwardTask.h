#pragma once
#include "CoreMinimal.h"
#include "TresTaskBase.h"
#include "TresTsAwardData.h"
#include "TresTsAwardTask.generated.h"

UCLASS(Abstract, Blueprintable)
class UTresTsAwardTask : public UTresTaskBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTresTsAwardData> m_Awards;
    
public:
    UTresTsAwardTask();
};

