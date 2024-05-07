#pragma once
#include "CoreMinimal.h"
#include "TresComNpcActSelectBranch.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcActSelectBranch {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_Id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_SeqIndex;
    
    TRESGAME_API FTresComNpcActSelectBranch();
};

