#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUIActorSettingDataAsset.generated.h"

class ATresUIActorLightSet;
class UTresUIActorPostProcessSetDataAsset;

UCLASS(Blueprintable)
class UTresUIActorSettingDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TAssetSubclassOf<ATresUIActorLightSet>> LightSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TAssetPtr<UTresUIActorPostProcessSetDataAsset>> PostProcessSets;
    
public:
    UTresUIActorSettingDataAsset();
};

