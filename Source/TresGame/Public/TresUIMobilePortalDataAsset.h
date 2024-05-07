#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIMobilePortalDataAsset.generated.h"

class UDataTable;
class UTextureRenderTarget2D;
class USwfMovie;
class ATresUIActor;
class USoundBase;
class UTresUIMobileDictionaryDataAsset;

UCLASS(Blueprintable)
class UTresUIMobilePortalDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* JiminyRenderTargetTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetSubclassOf<ATresUIActor> JiminyActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIMobileDictionaryDataAsset* DictionaryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* KeywordGlossaryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AnsemCodeData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* StoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LSIGameData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USwfMovie> SwfMovieAssetLSIButtonSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LSIGamePlayRewardItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<USoundBase> LSIMenuBGM;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    TAssetPtr<USwfMovie> SwfMovieAssets[12];
    
    UTresUIMobilePortalDataAsset();
};

