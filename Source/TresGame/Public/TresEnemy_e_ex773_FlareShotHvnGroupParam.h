#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex773_FlareShotHvnParam.h"
#include "TresEnemy_e_ex773_FlareShotHvnGroupParam.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex773_FlareShotHvnGroupParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_FireOmenEff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresEnemy_e_ex773_FlareShotHvnParam> m_FlareShotHvnParamArray;
    
    TRESGAME_API FTresEnemy_e_ex773_FlareShotHvnGroupParam();
};

