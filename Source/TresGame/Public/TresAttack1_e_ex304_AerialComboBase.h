#pragma once
#include "CoreMinimal.h"
#include "TresAttack_XIIIE_Base.h"
#include "ETresEnemyEx304ComboKind.h"
#include "TresEnemyEx304RootMotionScaleInfo.h"
#include "TresAttack1_e_ex304_AerialComboBase.generated.h"

class UAnimSequenceBase;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex304_AerialComboBase : public UTresAttack_XIIIE_Base {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* m_AnimData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresEnemyEx304ComboKind m_ComboKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx304RootMotionScaleInfo> m_RootMotionScaleInfoList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ApproachTargetSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_ApproachTargetDistance;
    
public:
    UTresAttack1_e_ex304_AerialComboBase();
};

