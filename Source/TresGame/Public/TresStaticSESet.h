#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresStaticSESet.generated.h"

class USoundBase;

UCLASS(Blueprintable)
class TRESGAME_API UTresStaticSESet : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    USoundBase* m_Assets[43];
    
    UTresStaticSESet();
};

