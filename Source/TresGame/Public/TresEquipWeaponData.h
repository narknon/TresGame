#pragma once
#include "CoreMinimal.h"
#include "TresEquipDataBase.h"
#include "TresEquipmentAssetUnit.h"
#include "TresEquipWeaponData.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresEquipWeaponData : public UTresEquipDataBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentAssetUnit> m_Equips;
    
public:
    UTresEquipWeaponData();
};

