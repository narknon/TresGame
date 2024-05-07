#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "TresEnemy_e_ex771_FlareShotHvnGroupParam.h"
#include "TresProjectileGenerator_e_ex771_FlareShotHvn.generated.h"

class UParticleSystem;

UCLASS(Blueprintable)
class ATresProjectileGenerator_e_ex771_FlareShotHvn : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex771_FlareShotHvnGroupParam> m_FlareShotHvnGroupParamArray;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pro_FireOmenEffData;
    
public:
    ATresProjectileGenerator_e_ex771_FlareShotHvn(const FObjectInitializer& ObjectInitializer);
};

