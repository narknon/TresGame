#pragma once
#include "CoreMinimal.h"
#include "EX359_BeamOnTimeInfo.h"
#include "EX359_BeamInfoSet.h"
#include "EX359_BeamOnTimeInfoSet.generated.h"

class ATresCharPawnBase;
class AActor;

USTRUCT(BlueprintType)
struct FEX359_BeamOnTimeInfoSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEX359_BeamOnTimeInfo> m_BeamOnTimeInfoArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEX359_BeamInfoSet m_BeamInfoSet;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ATresCharPawnBase* m_Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* m_SpawnActor;
    
public:
    TRESGAME_API FEX359_BeamOnTimeInfoSet();
};

