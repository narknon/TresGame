#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipObjectSize.h"
#include "TresGumiShipReactionResistance.h"
#include "TresGumiShipBadStateResistance.h"
#include "TresGumiShipReactionParameter.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipReactionParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipObjectSize m_eSizeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipReactionResistance m_ReactionResistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipBadStateResistance m_BadStateResistance;
    
    TRESGAME_API FTresGumiShipReactionParameter();
};

