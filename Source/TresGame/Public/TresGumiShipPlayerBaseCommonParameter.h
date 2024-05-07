#pragma once
#include "CoreMinimal.h"
#include "TresGumiShipPlayerBaseCommonParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipPlayerBaseCommonParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fHitPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackPoint;
    
    TRESGAME_API FTresGumiShipPlayerBaseCommonParameter();
};

