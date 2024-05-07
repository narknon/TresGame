#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetWorkshop.generated.h"

class USwfMovie;
class UObject;

UCLASS(Blueprintable)
class UTresUIDataAssetWorkshop : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudWorkshop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> HudWorkshopSwfRefAssets;
    
    UTresUIDataAssetWorkshop();
};

