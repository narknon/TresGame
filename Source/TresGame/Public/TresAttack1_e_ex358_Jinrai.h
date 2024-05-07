#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttack_e_ex358_Base.h"
#include "ETresEnemyJinraiPhaseType_e_ex358.h"
#include "TresAttack1_e_ex358_Jinrai.generated.h"

class UTresAttack1_e_ex358_JinraiBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex358_Jinrai : public UTresAttack_e_ex358_Base {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UTresAttack1_e_ex358_JinraiBase>> m_JinraiAttackDefinitionClassList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyJinraiPhaseType_e_ex358> m_StartPhaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresEnemyJinraiPhaseType_e_ex358> m_EndPhaseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresAttack1_e_ex358_JinraiBase* m_CurrentAttackDefinition;
    
public:
    UTresAttack1_e_ex358_Jinrai();
};

