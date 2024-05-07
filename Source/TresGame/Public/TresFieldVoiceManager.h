#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresFieldVoiceManager.generated.h"

class UTresFieldVoiceTask;

UCLASS(Blueprintable)
class UTresFieldVoiceManager : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresFieldVoiceTask*> TaskArray;
    
public:
    UTresFieldVoiceManager();
};

