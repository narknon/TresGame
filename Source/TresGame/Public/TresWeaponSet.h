#pragma once
#include "CoreMinimal.h"
#include "TresEquipmentSetAssetUnit.h"
#include "Engine/DataAsset.h"
#include "TresEquipmentSetTable.h"
#include "TresWeaponSet.generated.h"

class USQEX_ParticleAttachDataAsset;

UCLASS(Blueprintable)
class TRESGAME_API UTresWeaponSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentSetTable> MyEquipTbl;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FName FormName[25];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USQEX_ParticleAttachDataAsset* m_CmnFormChangeChargeEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipmentSetAssetUnit> Equips;
    
public:
    UTresWeaponSet();
};

