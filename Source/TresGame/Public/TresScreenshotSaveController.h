#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresScreenshotSaveController.generated.h"

class UTresGameInstance;

UCLASS(Blueprintable)
class UTresScreenshotSaveController : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresGameInstance* m_pTresGameInstance;
    
public:
    UTresScreenshotSaveController();
};

