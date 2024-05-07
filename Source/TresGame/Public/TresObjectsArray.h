#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "TresObjectsArray.generated.h"

class UObject;

UCLASS(Blueprintable)
class TRESGAME_API UTresObjectsArray : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> m_Objects;
    
    UTresObjectsArray();
};

