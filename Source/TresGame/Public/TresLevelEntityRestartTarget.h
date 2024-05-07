#pragma once
#include "CoreMinimal.h"
#include "ETresLevelEntityRestartSequence.h"
#include "TresLevelEntityRestartTarget.generated.h"

class ATresLevelEntityControlVolume;

USTRUCT(BlueprintType)
struct FTresLevelEntityRestartTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresLevelEntityControlVolume* m_SequenceOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETresLevelEntityRestartSequence m_Sequence;
    
    TRESGAME_API FTresLevelEntityRestartTarget();
};

