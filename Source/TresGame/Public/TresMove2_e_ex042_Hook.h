#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresAttackDefinitionBase.h"
#include "ETresGoalType_e_ex042_Hook.h"
#include "UObject/NoExportTypes.h"
#include "TresMove2_e_ex042_Hook.generated.h"

class UTresAttack3_e_ex042_SabelStomp;

UCLASS(Blueprintable, HideDropdown)
class UTresMove2_e_ex042_Hook : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fShotVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPullVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresGoalType_e_ex042_Hook> m_GoalType;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAnchorDestinationSearchMargin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_fAnchorDestinationSearchDivision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vEndMotionRootOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMinAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSkipEndMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UTresAttack3_e_ex042_SabelStomp> m_SabelStompDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStompBeginHeight;
    
    UTresMove2_e_ex042_Hook();
};

