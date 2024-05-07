#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BX901_IdleFlyInfo.generated.h"

USTRUCT(BlueprintType)
struct FBX901_IdleFlyInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vOffsetMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vOffsetMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector m_vOffsetPeriod;
    
    TRESGAME_API FBX901_IdleFlyInfo();
};

