#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDTheater.generated.h"

class UTresUIDataAsset;

UCLASS(Blueprintable, NonTransient)
class ATresHUDTheater : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAssetTheater;
    
public:
    ATresHUDTheater(const FObjectInitializer& ObjectInitializer);
};

