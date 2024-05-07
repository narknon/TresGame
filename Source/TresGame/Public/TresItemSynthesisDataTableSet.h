#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresItemSynthesisDataTableSet.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class TRESGAME_API UTresItemSynthesisDataTableSet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ItemSynthesisData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ItemCollectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ItemMotifData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ItemWeaponEnhanceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_ItemWeaponEnhanceIconData;
    
public:
    UTresItemSynthesisDataTableSet();
};

