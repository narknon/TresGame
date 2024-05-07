#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ETresCharEquipPart.h"
#include "TresEquipmentAssetUnit.generated.h"

class ATresWeaponBase;

USTRUCT(BlueprintType)
struct FTresEquipmentAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UnitName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresCharEquipPart m_AttachPart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachBoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bApplyParentScale: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresWeaponBase> RsrcData;
    
    TRESGAME_API FTresEquipmentAssetUnit();
};

