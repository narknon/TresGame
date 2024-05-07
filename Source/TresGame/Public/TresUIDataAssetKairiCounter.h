#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetKairiCounter.generated.h"

class USwfMovie;
class UObject;

UCLASS(Blueprintable)
class UTresUIDataAssetKairiCounter : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudKairiCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> KairiCounterSwfRefAssets;
    
    UTresUIDataAssetKairiCounter();
};

