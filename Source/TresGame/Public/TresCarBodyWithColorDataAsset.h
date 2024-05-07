#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarBodyWithColorDataAsset.generated.h"

class UTresCarBodyDataAsset;
class UMaterialInterface;

UCLASS(Blueprintable)
class UTresCarBodyWithColorDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTresCarBodyDataAsset* CarBodyDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* ColorMaterial;
    
    UTresCarBodyWithColorDataAsset();
};

