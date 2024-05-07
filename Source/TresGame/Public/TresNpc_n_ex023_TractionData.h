#pragma once
#include "CoreMinimal.h"
#include "TresNpc_n_ex023_TractionData.generated.h"

USTRUCT(BlueprintType)
struct FTresNpc_n_ex023_TractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString m_Comment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxVerticalTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMaxHorizontalTractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fVerticalOffsetFromTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHorizontalOffsetFromTarget;
    
    TRESGAME_API FTresNpc_n_ex023_TractionData();
};

