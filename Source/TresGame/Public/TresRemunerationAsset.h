#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "TresRemunerationData.h"
#include "TresRemunerationAsset.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresRemunerationAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRemunerationData> DataArray;
    
    UTresRemunerationAsset();
};

