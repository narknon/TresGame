#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "e_ex064_AnimParam.generated.h"

USTRUCT(BlueprintType)
struct Fe_ex064_AnimParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AnimName;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FInt32Interval m_NumRange;
    
    TRESGAME_API Fe_ex064_AnimParam();
};

