#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresPhotoHologramDataAsset.generated.h"

class UDataTable;
class UTexture;

UCLASS(Blueprintable)
class UTresPhotoHologramDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_MapDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_HologramDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_MapSetDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TAssetPtr<UTexture>> m_UIImageBgList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TAssetPtr<UTexture>> m_UIImageStartList;
    
    UTresPhotoHologramDataAsset();
};

