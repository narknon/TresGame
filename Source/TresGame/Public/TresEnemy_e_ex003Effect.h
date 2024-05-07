#pragma once
#include "CoreMinimal.h"
#include "TresEnemy_e_ex003Effect.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresEnemy_e_ex003Effect {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_EffData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_EffAttachName;
    
    TRESGAME_API FTresEnemy_e_ex003Effect();
};

