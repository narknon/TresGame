#pragma once
#include "CoreMinimal.h"
#include "ex064ShipBodyParameter.generated.h"

USTRUCT(BlueprintType)
struct Fex064ShipBodyParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 m_ShipBodyHP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DamageWeightFromPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_DamageWeightFromEnemy;
    
    TRESGAME_API Fex064ShipBodyParameter();
};

