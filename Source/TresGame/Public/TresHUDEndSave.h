#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDEndSave.generated.h"

class USoundBase;
class UTresUIDataAsset;
class UTresUIP_CreditDLC;
class UTresUIP_SaveLoad;

UCLASS(Blueprintable, NonTransient)
class ATresHUDEndSave : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAssetEndSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_IgnoreInputTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DisplayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_SaveLoad* m_SaveLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_CreditDLC* m_CreditDLC;
    
public:
    ATresHUDEndSave(const FObjectInitializer& ObjectInitializer);
};

