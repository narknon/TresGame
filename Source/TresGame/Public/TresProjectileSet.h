#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresProjectileAssetUnit.h"
#include "TresProjectileSet.generated.h"

UCLASS(Blueprintable)
class UTresProjectileSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresProjectileAssetUnit> Projectiles;
    
    UTresProjectileSet();
};

