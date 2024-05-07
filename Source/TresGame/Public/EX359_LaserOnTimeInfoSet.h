#pragma once
#include "CoreMinimal.h"
#include "EX359_LaserOnTimeInfo.h"
#include "EX359_LaserInfoSet.h"
#include "EX359_LaserOnTimeInfoSet.generated.h"

class AActor;
class ATresCharPawnBase;

USTRUCT(BlueprintType)
struct FEX359_LaserOnTimeInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX359_LaserOnTimeInfo> m_LaserOnTimeInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_LaserInfoSet m_LaserInfoSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_SpawnActor;
    
public:
    TRESGAME_API FEX359_LaserOnTimeInfoSet();
};

