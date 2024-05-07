#pragma once
#include "CoreMinimal.h"
#include "TresUIDataAsset.h"
#include "TresUIDataAssetDance.generated.h"

class USwfMovie;
class USoundBase;
class UObject;

UCLASS(Blueprintable)
class UTresUIDataAssetDance : public UTresUIDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USwfMovie* RaSwfAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> RaSwfRefAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ResultScoreSE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ResultRankSE;
    
    UTresUIDataAssetDance();
};

