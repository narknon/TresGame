#pragma once
#include "CoreMinimal.h"
#include "TresAttack3_e_dw405_Avatar.h"
#include "TresAttack4_e_dw405_AvatarSpecial.generated.h"

class UParticleSystem;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack4_e_dw405_AvatarSpecial : public UTresAttack3_e_dw405_Avatar {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackDataIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_PawnHitEffect;
    
    UTresAttack4_e_dw405_AvatarSpecial();
};

