#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefWeapon.h"
#include "TresItemWeaponEnhanceIconDataTable.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTresItemWeaponEnhanceIconDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefWeapon m_WeaponID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> PickerIconAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TAssetPtr<UTexture> KeybladeIconAsset;
    
    TRESGAME_API FTresItemWeaponEnhanceIconDataTable();
};

