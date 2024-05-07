#pragma once
#include "CoreMinimal.h"
#include "EX354_ArtemaWarpShotInfo.h"
#include "EX354_ArtemaWarpShotSet.generated.h"

class AActor;
class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FEX354_ArtemaWarpShotSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX354_ArtemaWarpShotInfo> m_ArtemaWarpShotInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bSendEventOnEnd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool m_bIgnoreTargetModify;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
    TRESGAME_API FEX354_ArtemaWarpShotSet();
};

