#pragma once
#include "CoreMinimal.h"
#include "TresAttack_e_ex351_Base.h"
#include "TresEnemyEx351SpawnInfoL.h"
#include "TresEnemyEx351FreezeShotInfo.h"
#include "TresEnemyEx351FreezeShotSpawnWorker.h"
#include "TresAttack4_e_ex351_FreezeShotL.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_ex351_FreezeShotL : public UTresAttack_e_ex351_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_FreezeShotAnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx351SpawnInfoL> m_SpawnInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bSpawnLocationCorrection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_SpawnLocationCorrectionDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx351FreezeShotSpawnWorker> m_FreezeShotSpawnWorker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx351FreezeShotInfo> m_FreezeShotList;
    
    UTresAttack4_e_ex351_FreezeShotL();
};

