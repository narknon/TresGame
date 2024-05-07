#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresStateAsset.h"
#include "TresStateSet.generated.h"

UCLASS(Blueprintable)
class TRESGAME_API UTresStateSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresStateAsset> MyStates;
    
    UTresStateSet();
};

