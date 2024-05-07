#pragma once
#include "CoreMinimal.h"
#include "ETresMiRxReplicaManagerStateKind.h"
#include "TresMiRxReplicaStateInfo.generated.h"

USTRUCT(BlueprintType)
struct FTresMiRxReplicaStateInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float m_fCoolDownTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
    TEnumAsByte<ETresMiRxReplicaManagerStateKind> m_eNextState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> m_fCommonParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<bool> m_bCommonParams;
    
public:
    TRESGAME_API FTresMiRxReplicaStateInfo();
};

