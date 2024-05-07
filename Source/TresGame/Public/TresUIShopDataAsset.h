#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIShopInfo.h"
#include "TresUIShopDataAsset.generated.h"

class UTextureRenderTarget2D;
class USwfMovie;
class UTresUIGumiPartsDataAsset;

UCLASS(Blueprintable)
class UTresUIShopDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* ShopStaffRenderTargetTexture;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FTresUIShopInfo ShopInfos[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USwfMovie> ShopSwfMovieAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTresUIGumiPartsDataAsset> GumiPartsData;
    
    UTresUIShopDataAsset();
};

