#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresGameOverHintSelector.generated.h"

class UTresUIManager;

UCLASS(Blueprintable)
class UTresGameOverHintSelector : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
public:
    UTresGameOverHintSelector();
};

