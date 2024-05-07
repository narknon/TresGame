#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "DebrisDetails_e_he903_DebrisLand.h"
#include "TresAttack3_e_he903_DebrisLand.generated.h"

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_e_he903_DebrisLand : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDebrisDetails_e_he903_DebrisLand> m_DebrisDetailArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_DefaultLockonCursorPosBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_AttackLockonCursorPosBoneIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_IgnoreBodyCollGrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fKeepDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fKeepDistanceVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxKeepDistance;
    
    UTresAttack3_e_he903_DebrisLand();
};

