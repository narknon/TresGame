#pragma once
#include "CoreMinimal.h"
#include "ParticleSystemAttachData_e_ex761.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FParticleSystemAttachData_e_ex761 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* ParticleSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName AttachSocketName;
    
    TRESGAME_API FParticleSystemAttachData_e_ex761();
};

