#pragma once
#include "CoreMinimal.h"
#include "TresAttackDefinitionBase.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack15_e_ex773_FaceClawSuccess.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack15_e_ex773_FaceClawSuccess : public UTresAttackDefinitionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_PcBgHitEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_pro_WarpOffsetPos;
    
    UTresAttack15_e_ex773_FaceClawSuccess();
};

