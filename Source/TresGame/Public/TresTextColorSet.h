#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTextColor.h"
#include "TresTextColorSet.generated.h"

UCLASS(Blueprintable)
class UTresTextColorSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresTextColor> Colors;
    
    UTresTextColorSet();
};

