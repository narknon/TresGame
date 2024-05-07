#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_ShopMaterialListItem.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_ShopMaterialListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_RarityIconText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ItemIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ItemName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ItemCount;
    
public:
    UTresUIP_ShopMaterialListItem();
};

