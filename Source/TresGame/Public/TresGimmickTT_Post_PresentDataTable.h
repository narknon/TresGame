#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresItemDefBattleItem.h"
#include "ETresItemDefCampItem.h"
#include "ETresItemDefAccessory.h"
#include "ETresItemDefMaterial.h"
#include "TresGimmickTT_Post_PresentDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGimmickTT_Post_PresentDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefBattleItem m_BattleItemID1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefCampItem m_CampItemID1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefAccessory m_AccessoryID1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresItemDefMaterial m_MaterialID1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ItemNum1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ItemPrizeRate1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_ItemRare1;
    
    TRESGAME_API FTresGimmickTT_Post_PresentDataTable();
};

