#pragma once
#include "CoreMinimal.h"
#include "TresEquipmentAssetUnit.h"
#include "TresEquipmentAccompanyPawnAssetUnit.h"
#include "ETresCharWearForm.h"
#include "UObject/NoExportTypes.h"
#include "TresEquipmentSetAssetUnit.generated.h"

class UTresProjectileSet;
class UTresAnimSet;
class USkeletalMesh;
class UTresPlayerMagicSet;

USTRUCT(BlueprintType)
struct FTresEquipmentSetAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAssetUnit> SetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAssetUnit> TransformSetData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* m_ReplaceSkinAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCharWearForm m_OwnerWearForm;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresAnimSet*> ReplaceAnimSets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresPlayerMagicSet* m_ReplaceMagicSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresProjectileSet* m_ReplaceProjectileSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_ReplaceIKOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAccompanyPawnAssetUnit> m_AccompanyPawnAssets;
    
    TRESGAME_API FTresEquipmentSetAssetUnit();
};

