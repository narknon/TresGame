#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetOlaf.generated.h"

class USwfMovie;
class UObject;

UCLASS(Blueprintable)
class UTresUIDataAssetOlaf : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudOlaf;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> OlafSwfRefAssets;
    
    UTresUIDataAssetOlaf();
};

