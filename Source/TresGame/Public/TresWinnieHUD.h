#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresHUDBase.h"
#include "TresWinnieHUD.generated.h"

class UTresUIP_HundredGame;
class UTresSharedUMG;
class UTresUIDataAsset;

UCLASS(Blueprintable, NonTransient)
class ATresWinnieHUD : public ATresHUDBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresSharedUMG> DebugUMGRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAssetHundredGame;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresSharedUMG* m_pDebugUMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HundredGame* m_HundredGameUI;
    
public:
    ATresWinnieHUD(const FObjectInitializer& ObjectInitializer);
};

