#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresAnimAssetUnit.h"
#include "TresAnimSet.generated.h"

UCLASS(BlueprintType)
class TRESGAME_API UTresAnimSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresAnimAssetUnit> Anims;
    
    /*UTresAnimSet();*/
};

