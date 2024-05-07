#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetCockpit.generated.h"

class USwfMovie;
class UObject;

UCLASS(Blueprintable)
class UTresUIDataAssetCockpit : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudOperation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetHudRailScope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetCenterInformation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* SwfAssetNaviMapGra;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> CockpitSwfRefAssets;
    
    UTresUIDataAssetCockpit();
};

