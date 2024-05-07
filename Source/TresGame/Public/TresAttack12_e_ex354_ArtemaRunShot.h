#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "EX354_ArtemaRunShotSequenceInfo.h"
#include "TresAttack12_e_ex354_ArtemaRunShot.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack12_e_ex354_ArtemaRunShot : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxLoopTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxShotInterval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShotWaitTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxShotAdjustYawAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxShotAdjustPitchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bTurnAroundBattleArea;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX354_ArtemaRunShotSequenceInfo> m_ArtemaRunShotSequenceInfoArray;
    
    UTresAttack12_e_ex354_ArtemaRunShot();
};

