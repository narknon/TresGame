#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex773_HvnDebrisParam.h"
#include "TresProjectileGenerator_e_ex773_HvnDebris.generated.h"

class UParticleSystem;
class ATresProjectile_e_ex773_DebrisAttract;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex773_HvnDebris : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex773_HvnDebrisParam> m_HvnDebrisParamArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_DebrisEffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectile_e_ex773_DebrisAttract> m_pro_DebrisAttractClass;
    
public:
    ATresProjectileGenerator_e_ex773_HvnDebris(const FObjectInitializer& ObjectInitializer);
};

