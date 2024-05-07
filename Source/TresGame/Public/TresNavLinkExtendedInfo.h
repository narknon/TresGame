#pragma once
#include "CoreMinimal.h"
#include "TresNavLinkExtendedInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresNavLinkExtendedInfo {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 ElementSize;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    uint32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TArray<uint8> Data;
    
    TRESGAME_API FTresNavLinkExtendedInfo();
};

