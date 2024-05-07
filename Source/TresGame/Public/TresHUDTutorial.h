#pragma once
#include "CoreMinimal.h"
#include "TresHUD.h"
#include "TresHUDTutorial.generated.h"

class UTresUIDataAsset;
class UTresUIManager;
class UTresUIP_Tutorial;

UCLASS(Blueprintable, NonTransient)
class ATresHUDTutorial : public ATresHUD {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAssetTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIManager* m_UIManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_Tutorial* m_Tutorial;
    
public:
    ATresHUDTutorial(const FObjectInitializer& ObjectInitializer);
};

