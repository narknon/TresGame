#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresHUDBase.h"
#include "TresRemyHUD.generated.h"

class UTresUIDataAssetRemy;
class UTresSharedUMG;
class UTresUIP_MenuRemy;
class UTresUIP_HudRemy;

UCLASS(Blueprintable, NonTransient)
class ATresRemyHUD : public ATresHUDBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresSharedUMG> DebugUMGRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAssetRemy* UIAsset;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresSharedUMG* m_debugUMG;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_HudRemy* m_HudRemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_MenuRemy* m_MenuRemy;
    
public:
    ATresRemyHUD(const FObjectInitializer& ObjectInitializer);
};

