#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipTextSet.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipTextSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strNamespace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_strKey;
    
    TRESGAME_API FTresGumiShipTextSet();
};

