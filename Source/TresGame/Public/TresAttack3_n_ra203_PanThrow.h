#pragma once
#include "CoreMinimal.h"
#include "TresNpcAttackDefinitionRanged.h"
#include "TresAttack3_n_ra203_PanThrow.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack3_n_ra203_PanThrow : public UTresNpcAttackDefinitionRanged {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PanEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PanWallEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fStartSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_OffsetZ;
    
    UTresAttack3_n_ra203_PanThrow();
};

