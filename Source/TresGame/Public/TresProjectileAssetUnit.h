#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "TresProjectileAssetUnit.generated.h"

class ATresProjectileBase;

USTRUCT(BlueprintType)
struct FTresProjectileAssetUnit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ProjectileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ATresProjectileBase> ProjectileData;
    
    TRESGAME_API FTresProjectileAssetUnit();
};

