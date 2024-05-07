#pragma once
#include "CoreMinimal.h"
#include "TresComNpcLookInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresComNpcLookInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_AnimTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> m_LookAtAnims;
    
    TRESGAME_API FTresComNpcLookInfo();
};

