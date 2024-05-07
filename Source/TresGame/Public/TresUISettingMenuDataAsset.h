#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUISettingMenuDataAsset.generated.h"

class UDataTable;
class UTexture;

UCLASS(Blueprintable)
class UTresUISettingMenuDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> IconPlatformTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> IconPlatformData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDataTable*> IconPlatformDataAsia;
    
    UTresUISettingMenuDataAsset();
};

