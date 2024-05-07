#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipReactionType.h"
#include "ETresGumiShipAttackElementType.h"
#include "ETresGumiShipAttackSubElemntType.h"
#include "ETresGumiShipBadStateType.h"
#include "TresGumiShipSkillParam.generated.h"

class UParticleSystem;

USTRUCT(BlueprintType)
struct FTresGumiShipSkillParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAttackPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipAttackElementType m_eElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipAttackSubElemntType m_eSubElementType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipBadStateType m_eBadStateType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeOfBadStateEffective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fPercentOfBadState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipReactionType m_eReactionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* m_pHitEffect;
    
    TRESGAME_API FTresGumiShipSkillParam();
};

