#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresTheaterData.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresTheaterData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ChapterData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* SceneData;
    
    UTresTheaterData();
};

