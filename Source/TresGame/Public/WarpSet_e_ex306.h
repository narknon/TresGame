#pragma once
#include "CoreMinimal.h"
#include "WarpSet_e_ex306.generated.h"

class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FWarpSet_e_ex306 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_GoalBBKeyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WarpTime;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_pOwner;
    
public:
    TRESGAME_API FWarpSet_e_ex306();
};

