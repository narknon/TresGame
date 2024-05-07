#pragma once
#include "CoreMinimal.h"
#include "EX355_RemoteEventID.generated.h"

USTRUCT(BlueprintType)
struct FEX355_RemoteEventID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_RemoteEventName;
    
    TRESGAME_API FEX355_RemoteEventID();
};

