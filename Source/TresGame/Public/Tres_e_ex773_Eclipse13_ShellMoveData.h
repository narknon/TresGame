#pragma once
#include "CoreMinimal.h"
#include "Tres_e_ex773_Eclipse13_ShellMoveData.generated.h"

USTRUCT(BlueprintType)
struct FTres_e_ex773_Eclipse13_ShellMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeToLandingPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GeneratorIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LandingPointIndex;
    
    TRESGAME_API FTres_e_ex773_Eclipse13_ShellMoveData();
};

