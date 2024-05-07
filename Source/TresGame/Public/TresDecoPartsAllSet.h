#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresDecoPartsAllSet.generated.h"

class UTresDecoPartsSet;

UCLASS(Blueprintable)
class TRESGAME_API UTresDecoPartsAllSet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTresDecoPartsSet*> m_Assets;
    
    UTresDecoPartsAllSet();
};

