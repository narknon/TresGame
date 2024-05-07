#pragma once
#include "CoreMinimal.h"
#include "TresAtkCollAutoActivate.generated.h"

USTRUCT(BlueprintType)
struct FTresAtkCollAutoActivate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GrpName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackDataIDName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackInterval;
    
    TRESGAME_API FTresAtkCollAutoActivate();
};

