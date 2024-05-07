#pragma once
#include "CoreMinimal.h"
#include "TresTsAwardData.generated.h"

USTRUCT(BlueprintType)
struct FTresTsAwardData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_Key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_DevelopName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool m_IsGet;
    
    TRESGAME_API FTresTsAwardData();
};

