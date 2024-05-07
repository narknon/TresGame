#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresEquipmentAssetUnit.h"
#include "TresPhotoHologramWeaponAsset.generated.h"

class UDataTable;
class UTresAnimSet;

UCLASS(Blueprintable)
class UTresPhotoHologramWeaponAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAssetUnit> FixedEquips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* PoseDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> ReplaceAnimSets;
    
    UTresPhotoHologramWeaponAsset();
};

