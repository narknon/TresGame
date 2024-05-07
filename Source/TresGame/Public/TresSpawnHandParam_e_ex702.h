#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresSpawnHandParam_e_ex702.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresSpawnHandParam_e_ex702 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> ProjectileClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Num;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxRadius;
    
    TRESGAME_API FTresSpawnHandParam_e_ex702();
};

