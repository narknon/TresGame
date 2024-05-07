#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ETresGumiShipReactionType.h"
#include "ETresGumiShipAttackElementType.h"
#include "ETresGumiShipAttackSubElemntType.h"
#include "ETresGumiShipBadStateType.h"
#include "TresGumiShipAttackDataTable.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipAttackDataTable : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipAttackElementType m_eElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipAttackSubElemntType m_eSubElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipReactionType m_eReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipBadStateType m_eBadStateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeOfBadStateEffective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPercentOfBadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_HitEffectDataName;
    
    TRESGAME_API FTresGumiShipAttackDataTable();
};

