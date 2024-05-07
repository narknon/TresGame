#pragma once
#include "CoreMinimal.h"
#include "TresPawnBase.h"
#include "TresEnemyPawn_e_ex363_RiseRushDurkEffect.generated.h"

class ATresEnemyPawn_e_ex363;
class UParticleSystem;
class UParticleSystemComponent;
class AActor;

UCLASS(Blueprintable, HideDropdown)
class ATresEnemyPawn_e_ex363_RiseRushDurkEffect : public ATresPawnBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_ArielComboParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_AttackSignParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_FloorOffsetZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_EffectOnGround;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresEnemyPawn_e_ex363* m_MyParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_SignProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_AirParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TWeakObjectPtr<AActor> m_Target;
    
public:
    ATresEnemyPawn_e_ex363_RiseRushDurkEffect(const FObjectInitializer& ObjectInitializer);
};

