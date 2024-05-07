#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex054_VolcanoCraterAtkCollInfo.generated.h"

class UParticleSystemComponent;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex054_VolcanoCraterAtkCollInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* m_BurnOmenEff;
    
    TRESGAME_API FTresEnemy_e_ex054_VolcanoCraterAtkCollInfo();
};

