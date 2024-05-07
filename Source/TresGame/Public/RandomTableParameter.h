#pragma once
#include "CoreMinimal.h"
#include "TresRandomVoiceForTable.h"
#include "RandomTableParameter.generated.h"

USTRUCT(BlueprintType)
struct FRandomTableParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GroupName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTresRandomVoiceForTable> m_RandomVoiceAssets;
    
    TRESGAME_API FRandomTableParameter();
};

