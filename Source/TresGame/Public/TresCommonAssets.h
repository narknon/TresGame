#pragma once
#include "CoreMinimal.h"
#include "TresLoadAsset.h"
#include "TresAssetReferences.h"
#include "TresCommonAssets.generated.h"

class UTresFoodstuffDropDataSet;
class UDataTable;
class UTresBattlePortalRewardActionData;
class UTresKeybladeAbilityDataAsset;
class UTresStaticSESet;
class UTresTreasureDataSet;
class UTresCommandData;
class UTresForceFeedbackSet;
class UTresItemSynthesisDataTableSet;
class UTresPhotoHologramDataAsset;

UCLASS(Blueprintable, Config=Game)
class TRESGAME_API UTresCommonAssets : public UTresLoadAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_EquipItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresKeybladeAbilityDataAsset* m_KeybladeAbilityData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_FoodItemEffectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_FoodCompleteMealEffectDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresFoodstuffDropDataSet* m_FoodstuffDropDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresTreasureDataSet* m_TreasureDataSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_VictoryBonusDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_AbilityDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_UnlockFlagDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_LuckyMarkDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_LuckyMarkMilestoneRewardDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresBattlePortalRewardActionData* m_TresBattlePortalRewardActionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresCommandData* m_CommandData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresCommandData* m_ShootFlowData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresStaticSESet* m_StaticSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresForceFeedbackSet* m_ForceFeedbackSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresItemSynthesisDataTableSet* m_ItemSynthesisDataTableSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresPhotoHologramDataAsset* m_HologramData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAssetReferences> m_TaggedAssets;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_InitialLoadTags;
    
    UTresCommonAssets();
};

