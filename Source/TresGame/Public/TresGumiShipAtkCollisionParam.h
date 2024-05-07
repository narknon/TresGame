#pragma once
#include "CoreMinimal.h"
#include "ETresGumiShipAtkHitTestType.h"
#include "TresGumiShipSkillParam.h"
#include "TresGumiShipAtkCollisionParam.generated.h"

USTRUCT(BlueprintType)
struct FTresGumiShipAtkCollisionParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresGumiShipAtkHitTestType m_eHitTestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsHitProjectile: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 m_bIsHitBackGround: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AtkParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fTimeOfRefreshIgnore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTresGumiShipSkillParam m_SkillParam;
    
    TRESGAME_API FTresGumiShipAtkCollisionParam();
};

