#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Engine/DataAsset.h"
#include "TresWorldResidentActorClassAsset.generated.h"

class AActor;
class UTresWorldResidentActorClassAsset;

UCLASS(Blueprintable)
class UTresWorldResidentActorClassAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, TSubclassOf<AActor>> AssetMaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<AActor>> AssetArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresWorldResidentActorClassAsset*> ReferenceAssets;
    
public:
    UTresWorldResidentActorClassAsset();
};

