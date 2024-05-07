#pragma once
#include "CoreMinimal.h"
#include "TornadoCutWindParam_e_ex357.generated.h"

USTRUCT(BlueprintType)
struct FTornadoCutWindParam_e_ex357 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WindForce;
    
    TRESGAME_API FTornadoCutWindParam_e_ex357();
};

