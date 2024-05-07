#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TresAttackDefinitionMelee.h"
#include "UObject/NoExportTypes.h"
#include "TresAttack1_e_ex061_Bunbun.generated.h"

class UParticleSystem;
class UParticleSystemComponent;

UCLASS(Blueprintable, HideDropdown)
class UTresAttack1_e_ex061_Bunbun : public UTresAttackDefinitionMelee {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AttackEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackEffectSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_AttackEffectOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator m_AttackEffectRotOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_AttackEffectCmp;
    
    UTresAttack1_e_ex061_Bunbun();
};

