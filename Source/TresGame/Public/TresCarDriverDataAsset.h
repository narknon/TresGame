#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresCarDriverDataAsset.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS(Blueprintable)
class UTresCarDriverDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* DriverMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* DriverMaterial;
    
    UTresCarDriverDataAsset();
};

