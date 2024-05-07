#pragma once
#include "CoreMinimal.h"
#include "TresDecalData.h"
#include "TresEffectUnit.generated.h"

class UParticleSystem;
class USoundBase;

USTRUCT(BlueprintType)
struct FTresEffectUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UParticleSystem* MyParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    USoundBase* MySoundCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, NoClear, meta=(AllowPrivateAccess=true))
    FTresDecalData MyTresDecal;
    
    TRESGAME_API FTresEffectUnit();
};

