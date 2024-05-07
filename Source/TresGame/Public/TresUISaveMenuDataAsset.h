#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresUISaveMenuDataAsset.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class UTresUISaveMenuDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* MenuRestrictionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AreaSelectData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* m_FaceIconLotteryData;
    
    UTresUISaveMenuDataAsset();
};

