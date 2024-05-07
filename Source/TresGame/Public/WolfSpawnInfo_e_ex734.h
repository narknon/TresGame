#pragma once
#include "CoreMinimal.h"
#include "WolfSpawnInfo_e_ex734.generated.h"

USTRUCT(BlueprintType)
struct FWolfSpawnInfo_e_ex734 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearMoveVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearMoveGoalHeight_Min;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fAppearMoveGoalHeight_Max;
    
    TRESGAME_API FWolfSpawnInfo_e_ex734();
};

