#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGameSingleton.generated.h"

class UTresGameInstance;

UCLASS(Blueprintable, Transient)
class TRESGAME_API UTresGameSingleton : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGameInstance* TresGameInstance;
    
    UTresGameSingleton();
};

