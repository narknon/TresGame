#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresEquipItemDataTable.h"
#include "TresItemMan.generated.h"

class UDataTable;
class UTresKeybladeAbilityDataAsset;
class UTresTreasureDataSet;
class UTresFoodstuffDropDataSet;
class UTresItemSynthesisDataTableSet;

UCLASS(Blueprintable, NotPlaceable, Transient)
class TRESGAME_API UTresItemMan : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_EquipItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresKeybladeAbilityDataAsset* m_KeybladeAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresTreasureDataSet* m_TreasureData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresFoodstuffDropDataSet* m_FoodstuffDropDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_VBonusData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_FoodItemEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_FoodCompleteMealEffectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UDataTable* m_AbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresItemSynthesisDataTableSet* m_ItemSynthesisDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTresEquipItemDataTable> m_EnhancedEquipDataBuf;
    
public:
    UTresItemMan();
};

