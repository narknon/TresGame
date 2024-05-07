#pragma once
#include "CoreMinimal.h"
#include "TresWinniePuzzleSpecialUnitParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresWinniePuzzleSpecialUnitParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Enable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnColumnsOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* Particle;
    
    TRESGAME_API FTresWinniePuzzleSpecialUnitParam();
};

