#pragma once
#include "CoreMinimal.h"
#include "BigTornadoProjPosBoneInfo.generated.h"

USTRUCT(BlueprintType)
struct FBigTornadoProjPosBoneInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_BoneName;
    
    TRESGAME_API FBigTornadoProjPosBoneInfo();
};

