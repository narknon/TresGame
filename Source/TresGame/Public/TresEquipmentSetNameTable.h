#pragma once
#include "CoreMinimal.h"
#include "ETresWeaponForm.h"
#include "ETresWeaponGrowLvl.h"
#include "TresEquipmentSetNameTable.generated.h"

USTRUCT(BlueprintType)
struct FTresEquipmentSetNameTable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresWeaponForm m_FormType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresWeaponGrowLvl m_GrowLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EquipSetName;
    
    TRESGAME_API FTresEquipmentSetNameTable();
};

