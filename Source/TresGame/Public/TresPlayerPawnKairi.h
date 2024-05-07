#pragma once
#include "CoreMinimal.h"
#include "TresPlayerPawnBase.h"
#include "TresPlayerPawnKairi.generated.h"

class UTresUIDataAsset;

UCLASS(Blueprintable)
class ATresPlayerPawnKairi : public ATresPlayerPawnBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataShootFlow;
    
public:
    ATresPlayerPawnKairi(const FObjectInitializer& ObjectInitializer);
};

