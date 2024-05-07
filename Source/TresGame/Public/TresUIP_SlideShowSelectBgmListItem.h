#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresControlsListItem.h"
#include "TresUIP_SlideShowSelectBgmListItem.generated.h"

class UGFxObject;

UCLASS(Blueprintable, NonTransient)
class UTresUIP_SlideShowSelectBgmListItem : public UTresASProxyTresControlsListItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pBgmText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pTimeNumText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pSoundBtn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pDataType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* m_pListPhoto;
    
public:
    UTresUIP_SlideShowSelectBgmListItem();
};

