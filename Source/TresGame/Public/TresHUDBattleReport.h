#pragma once
#include "CoreMinimal.h"
#include "TresHUDBase.h"
#include "TresHUDBattleReport.generated.h"

class USoundBase;
class UTresUIP_BattleReport;
class UTresUIDataAsset;
class UTresUIP_SaveLoad;

UCLASS(Blueprintable, NonTransient)
class ATresHUDBattleReport : public ATresHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* m_BGM;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresUIDataAsset* m_UIDataAssetBattleReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_BattleReport* m_BattleReport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTresUIP_SaveLoad* m_SaveLoad;
    
public:
    ATresHUDBattleReport(const FObjectInitializer& ObjectInitializer);
};

