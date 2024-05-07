#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresAtkCollManager.generated.h"

class UTresAtkCollComponent;
class UParticleSystem;
class UTresDamageType;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ATresAtkCollManager : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTresAtkCollComponent*> m_AtkCompList;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CmnGuardReflectEffect;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CmnStaggerReflectEffect;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CmnInvincibleHitEffect;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CmnCriticalHitEffect;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CmnArmorHitEffect;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_CmnIgnoreGuardHitEffect;
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    TSubclassOf<UTresDamageType> m_PhysDamageTypeClass[4];
    
    UPROPERTY(DuplicateTransient, EditAnywhere, Transient)
    TMap<TWeakObjectPtr<AActor>, int32> m_CheeringList;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> m_JoinForceTargetList;
    
public:
    ATresAtkCollManager(const FObjectInitializer& ObjectInitializer);
};

