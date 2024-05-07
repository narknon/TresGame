#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileBase.h"
#include "TresEnemyEx771_FlarePillarAttractParam.h"
#include "TresProjectile_e_ex771_FlarePillarOmen.generated.h"

class UParticleSystem;
class ATresActor_e_ex771_Attract;
class ATresProjectile_e_ex771_FlarePillar;
class UParticleSystemComponent;
class AActor;

UCLASS(Abstract, Blueprintable)
class ATresProjectile_e_ex771_FlarePillarOmen : public ATresProjectileBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemyEx771_FlarePillarAttractParam> m_AttractParamArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresProjectile_e_ex771_FlarePillar* m_FlarePillar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_FlarePillarOmenEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_FlarePillarOmenEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_pro_OmenTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresActor_e_ex771_Attract> m_pro_AttractClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_pTarget;
    
    ATresProjectile_e_ex771_FlarePillarOmen(const FObjectInitializer& ObjectInitializer);
};

