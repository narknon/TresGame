#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresPlayerMagicAssetUnit.h"
#include "TresPlayerMagicSet.generated.h"

UCLASS(Blueprintable)
class UTresPlayerMagicSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresPlayerMagicAssetUnit> m_Units;
    
    UTresPlayerMagicSet();
};

