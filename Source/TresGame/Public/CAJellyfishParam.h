#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CAJellyfishParam.generated.h"

USTRUCT(BlueprintType)
struct FCAJellyfishParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaveUPDownTimeMulti;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_WaveUPDownLength;
    
    UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
    FFloatInterval m_TickEnableRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName m_AttackName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_AttackInterval;
    
    TRESGAME_API FCAJellyfishParam();
};

