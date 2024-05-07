#pragma once
#include "CoreMinimal.h"
#include "ETresWeaponGrowLvl.h"
#include "TresEquipmentAssetUnit.h"
#include "ETresCharWearForm.h"
#include "TresEquipmentAccompanyPawnAssetUnit.h"
#include "UObject/NoExportTypes.h"
#include "TresEquipValiableSet.generated.h"

class UTresProjectileSet;
class UTresAnimSet;
class UTresPlayerMagicSet;
class UTresUIDataAsset;

USTRUCT(BlueprintType)
struct FTresEquipValiableSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresWeaponGrowLvl m_GrowLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAssetUnit> m_Equips;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAssetUnit> m_TransformSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCharWearForm m_OwnerWearForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> m_ReplaceAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresPlayerMagicSet* m_ReplaceMagicSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresProjectileSet* m_ReplaceProjectileSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ReplaceIKOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAccompanyPawnAssetUnit> m_AccompanyPawnAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAsset;
    
    TRESGAME_API FTresEquipValiableSet();
};

