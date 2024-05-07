#pragma once
#include "CoreMinimal.h"
#include "TresRaPuddingEffectRef.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresRaPuddingEffectRef {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* EffectRef;
    
    TRESGAME_API FTresRaPuddingEffectRef();
};

