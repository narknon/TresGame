#pragma once
#include "CoreMinimal.h"
#include "TresEquipWeaponSlotWork.generated.h"

class UTresEquipDataBase;

USTRUCT(BlueprintType)
struct FTresEquipWeaponSlotWork {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresEquipDataBase* m_pAsset;
    
    TRESGAME_API FTresEquipWeaponSlotWork();
};

