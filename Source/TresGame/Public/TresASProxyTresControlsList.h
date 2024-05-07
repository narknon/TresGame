#pragma once
#include "CoreMinimal.h"
#include "TresASProxyTresCoreAnchorComponent.h"
#include "TresASProxyTresControlsList.generated.h"

class UTresASProxyTresControlsListItem;
class UTresASProxyTresControlsScrollBar;

UCLASS(Blueprintable, NonTransient)
class UTresASProxyTresControlsList : public UTresASProxyTresCoreAnchorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresASProxyTresControlsListItem*> m_ListItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresASProxyTresControlsScrollBar* m_ScrollBar;
    
public:
    UTresASProxyTresControlsList();
};

