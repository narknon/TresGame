#pragma once
#include "CoreMinimal.h"
#include "TresUISubParts.h"
#include "TresUIP_ShopCollection.generated.h"

class UTresASProxyRSLHelpText;
class UTresASProxyTresControlsList;
class UGFxObject;
class UTresASProxyRSLStageCategory;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_ShopCollection : public UTresUISubParts {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsList* m_CollectionList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ListEmptyAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_ListEmptyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_BonusText;
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_BonusItemIcon[4];
    
    UPROPERTY(EditAnywhere, Transient)
    UGFxObject* m_BonusItemName[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLHelpText* m_HelpText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyRSLStageCategory* m_StageCategory;
    
public:
    UTresUIP_ShopCollection();
};

